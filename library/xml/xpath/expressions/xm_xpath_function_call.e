indexing

	description:

		"Objects that call XPath system-defined and user-defined functions"

	library: "Gobo Eiffel XPath Library"
	copyright: "Copyright (c) 2004, Colin Adams and others"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date$"
	revision: "$Revision$"

deferred class XM_XPATH_FUNCTION_CALL

inherit

	XM_XPATH_COMPUTED_EXPRESSION
		redefine
			simplify, promote, sub_expressions
		end

feature -- Access

	arguments: DS_ARRAYED_LIST [XM_XPATH_EXPRESSION]
			-- Actual parameters

	supplied_argument_count: INTEGER is
			-- Number of actual arguments supplied in the function call
		do
			Result := arguments.count
		ensure
			positive_result: Result >= 0
		end

	sub_expressions: DS_ARRAYED_LIST [XM_XPATH_EXPRESSION] is
			-- Immediate sub-expressions of `Current'
		do
			Result := arguments
		end

	name: STRING is
			-- Function name
		deferred
		ensure
			Name_not_void: Result /= Void and then Result.count > 0
		end

feature -- Status report

	display (a_level: INTEGER; a_pool: XM_XPATH_NAME_POOL) is
			-- Diagnostic print of expression structure to `std.error'
		do
			std.error.put_string (indent (a_level))
			std.error.put_string ("function ")
			std.error.put_string (name)
			std.error.put_new_line
			from
				arguments.start
			variant
				arguments.count + 1 - arguments.index				
			until
				arguments.after
			loop
				arguments.item_for_iteration.display (a_level + 1, a_pool)
				arguments.forth
			end
		end

feature -- Status setting

	set_arguments (args: DS_ARRAYED_LIST [XM_XPATH_EXPRESSION]) is
			-- Set all arguments.
		require
			arguments_not_void: args /= Void
		do
			arguments := args
			arguments.set_equality_tester (expression_tester)
		ensure
			arguments_set: arguments = args
		end
	
feature -- Optimization

	simplify: XM_XPATH_EXPRESSION is
			-- Simplify `Current'
		local
			result_expression: XM_XPATH_FUNCTION_CALL
			simplified_arguments: DS_ARRAYED_LIST [XM_XPATH_EXPRESSION]
		do
			result_expression := clone (Current)
			simplified_arguments := simplify_arguments
			if simplified_arguments /= Void then
				result_expression.set_arguments (simplified_arguments)
			else
				
				-- don't simplify arguments if an error occured;
				-- The error will be picked up later (?? - TODO check out this reasoning)

				do_nothing
			end
			Result := result_expression
		end

	analyze (a_context: XM_XPATH_STATIC_CONTEXT): XM_XPATH_EXPRESSION is
			-- Perform static analysis of `Current' and its subexpressions;
			-- This also calls pre_evaluate to evaluate the function
			--  if all the arguments are constant;
			-- Functions that do not require this behavior
			--  can override the pre_evaluate routine.
		local
			fixed_values: BOOLEAN
			a_value: XM_XPATH_VALUE
			an_argument: XM_XPATH_EXPRESSION
			result_arguments: DS_ARRAYED_LIST [XM_XPATH_EXPRESSION]
			arguments_cursor: DS_ARRAYED_LIST_CURSOR [XM_XPATH_EXPRESSION]
			a_result_expression: XM_XPATH_FUNCTION_CALL
		do
			a_result_expression := clone (Current)
			create result_arguments.make (arguments.count)
			from
				fixed_values := True -- until we find otherwise
				arguments_cursor := arguments.new_cursor
				arguments_cursor.start
			variant
				arguments.count + 1 - arguments_cursor.index
			until
				arguments_cursor.after
			loop
				if arguments_cursor.item.may_analyze then
					an_argument := arguments_cursor.item.analyze (a_context)
				else
					an_argument := arguments_cursor.item
				end
				result_arguments.put_last (an_argument)
				a_value ?= an_argument
				if a_value = Void then fixed_values := False end
				arguments_cursor.forth
			end

			a_result_expression.set_arguments (result_arguments)
			a_result_expression.check_arguments (a_context)

			-- Now, if any of the arguments has a static type error,
			--  then `a_result_expression' as a whole has too.
			
			if a_result_expression.is_error then
				Result := a_result_expression -- Marked in error
			elseif fixed_values then
				Result := a_result_expression.pre_evaluate (a_context) -- May or may not be in error
			else
				Result := a_result_expression -- No error, but needs run-time evaluation
			end
			Result.set_analyzed
		end

	promote (an_offer: XM_XPATH_PROMOTION_OFFER): XM_XPATH_EXPRESSION is
			-- Offer promotion for `Current'
		local
			an_expression:  XM_XPATH_EXPRESSION
			result_arguments: DS_ARRAYED_LIST [XM_XPATH_EXPRESSION]
			an_argument: XM_XPATH_EXPRESSION
			a_result_expression: XM_XPATH_FUNCTION_CALL
		do
			an_expression := an_offer.accept (Current)
			if an_expression = Void then
				if an_offer.action = Unordered then
					Result := Current					
				else
					result_arguments := clone (arguments)
					from
						result_arguments.start
					variant
						result_arguments.count + 1 - result_arguments.index
					until
						result_arguments.after
					loop
						an_argument := result_arguments.item_for_iteration.promote (an_offer)
						result_arguments.replace_at (an_argument)
						result_arguments.forth
					end
					a_result_expression ?= an_expression
						check
							promoted_expression_not_void: a_result_expression /= Void
						end
					a_result_expression.set_arguments (result_arguments)
					Result := a_result_expression
				end
			else
				Result := an_expression
			end
		end

feature -- Evaluation

	pre_evaluate (a_context: XM_XPATH_STATIC_CONTEXT): XM_XPATH_EXPRESSION is
			-- Pre-evaluate `Current' at compile time.
			-- Functions that do not allow pre-evaluation,
			--  or that need access to context information,
			--  can redefine this routine.
		require
			no_error: not is_error
			context_not_void: a_context /= Void
		do
			Result := eagerly_evaluate (Void)
		ensure
			evaluated: Result /= Void
		end

feature {XM_XPATH_FUNCTION_CALL} -- Local

	check_arguments (a_context: XM_XPATH_STATIC_CONTEXT) is
			-- Check arguments during parsing, when all the argument expressions have been read.
		require
			no_error: not is_error
			context_not_void: a_context /= Void
		deferred
		ensure
			maybe_type_error: True
		end

feature {NONE} -- Implementation

	simplify_arguments: DS_ARRAYED_LIST [XM_XPATH_EXPRESSION] is
			-- Simplify `arguments'
		local
			an_argument: XM_XPATH_EXPRESSION
			result_arguments: DS_ARRAYED_LIST [XM_XPATH_EXPRESSION]
			arguments_cursor: DS_ARRAYED_LIST_CURSOR [XM_XPATH_EXPRESSION]
			in_error: BOOLEAN
		do
			from
				create result_arguments.make (arguments.count)
				arguments_cursor := arguments.new_cursor
				arguments_cursor.start
			variant
				result_arguments.count + 1 - arguments_cursor.index
			until
				in_error or else arguments_cursor.after
			loop
				an_argument := arguments_cursor.item.simplify
				if an_argument.is_error then
					in_error := True
				else
					result_arguments.put_last (an_argument)
				end
				arguments_cursor.forth
			end
			if not in_error then
				Result := result_arguments
			end
		ensure
			simplified_arguments_void_on_error: True
		end

	check_argument_count (a_minimum_count, a_maximum_count: INTEGER) is
			-- Check number of arguments
		require
			positive_minimum_count: a_minimum_count >= 0
			nearly_positive_maximum_count: a_maximum_count >= -1
			no_previous_error: not is_error
		local
			a_message: STRING
			is_type_error: BOOLEAN
		do
			-- TODO - need to add location information in messages
			if a_minimum_count = a_maximum_count and then a_minimum_count /= supplied_argument_count then
				is_type_error := True
			a_message := STRING_.appended_string ("Function ", name)
			a_message := STRING_.appended_string (a_message, " must have ")
			a_message := STRING_.appended_string (a_message, a_minimum_count.out)
			a_message := STRING_.appended_string (a_message, plural_arguments_text (a_minimum_count))
			elseif supplied_argument_count < a_minimum_count then
			is_type_error := True
				a_message := STRING_.appended_string ("Function ", name)
				a_message := STRING_.appended_string (a_message, " must have at least")
				a_message := STRING_.appended_string (a_message, a_minimum_count.out)
				a_message := STRING_.appended_string (a_message, plural_arguments_text (a_minimum_count))
			elseif a_maximum_count > -1 and supplied_argument_count > a_maximum_count then
			is_type_error := True
				a_message := STRING_.appended_string ("Function ", name)
				a_message := STRING_.appended_string (a_message, " must have at most")
				a_message := STRING_.appended_string (a_message, a_maximum_count.out)
				a_message := STRING_.appended_string (a_message, plural_arguments_text (a_maximum_count))
			end
			if is_type_error then
				set_last_error_from_string (a_message, 17, Type_error)
			end
		ensure
			Correct_number_or_error: True
		end

	plural_arguments_text (a_count: INTEGER): STRING is
			-- Singular of plural arguments text
		require
			positive_count: a_count >= 0
		do
			if a_count = 1 then
				Result := " argument"
			else
				Result := " arguments"
			end
		ensure
			plural_arguments_text_not_void: Result /= Void
		end

invariant

	arguments_not_void: arguments /= Void

end
