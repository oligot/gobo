indexing

	description:

		"Objects that perform static type checking of expressions"

	library: "Gobo Eiffel XPath Library"
	copyright: "Copyright (c) 2004, Colin Adams and others"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date$"
	revision: "$Revision$"

class XM_XPATH_TYPE_CHECKER

inherit

	XM_XPATH_TYPE

	XM_XPATH_CARDINALITY

	XM_XPATH_SHARED_CONFORMANCE

	-- This class provides a single feature to perform static type-checking of an expression.
	-- The routine takes a `supplied' expression,  and checks to see whether it is
	--  known statically to conform to the `required' type.
	-- There are three possible outcomes.
	--  If the static type of the expression is a sub-type of the required
	--   type, the rotuine returns the expression unchanged.
	--  If the static type of the expression is incompatible with the required type
	--   (for example, if the supplied type is integer and the required type is string)
	--   the routine returns `Void' and sets `static_type_check_error_message'.
	--  If the static type is a super-type of the required type, then a new expression
	--   is constructed that evaluates the original expression and checks the dynamic
	--   type of the result; this new expression is returned as the result of the routine.

	-- The rules applied are those for function calling in XPath, that is, the rules
	--  that the argument of a function call must obey in relation to the signature of
	--  the function.
	-- Some contexts require slightly different rules (for example, operands of polymorphic
	--  operators such as "+"). In such cases this routine cannot be used.

feature -- Status_report

	is_static_type_check_error: BOOLEAN
			-- Has a static typing error occured?

	static_type_check_error_message: STRING
			-- Error message from `static_type_check'

feature -- Optimization

	static_type_check (a_supplied_expression: XM_XPATH_EXPRESSION; a_required_type: XM_XPATH_SEQUENCE_TYPE; backwards_compatible: BOOLEAN; a_role_locator: XM_XPATH_ROLE_LOCATOR): XM_XPATH_EXPRESSION is
			-- Check an expression against a required type, modifying it if necessary
		require
			supplied_expression_not_void: a_supplied_expression /= Void
			required_type_not_void: a_required_type /= Void
			role_not_void: a_role_locator /= Void
			no_previous_error: not is_static_type_check_error
		local
			an_expression: XM_XPATH_EXPRESSION
			a_required_item_type, a_supplied_cardinality, a_supplied_item_type: INTEGER
			allows_many, cardinality_ok, item_type_ok: BOOLEAN
			a_message: STRING
		do
			an_expression := a_supplied_expression
			a_required_item_type := a_required_type.primary_type
			allows_many := a_required_type.cardinality_allows_many
			a_supplied_item_type := -1
			a_supplied_cardinality := -1 -- not yet checked

			-- Unless the required cardinality is zero-or-more (no constraints),
			--  check the static cardinality of the supplied expression

			cardinality_ok := a_required_type.cardinality_allows_zero_or_more

			if not cardinality_ok then
				a_supplied_cardinality := an_expression.cardinality
				cardinality_ok := a_required_type.cardinality_subsumes (a_supplied_cardinality)
			end

			item_type_ok := a_required_item_type = Any_item and then a_required_type.content_type = Any_item

			-- Unless the required item type and content type are Any_item (no constraints)
			--  check the static item type against the supplied expression.
			-- NOTE: we don't currently do any static inference regarding the content type

			if not item_type_ok then
				a_supplied_item_type := an_expression.item_type
				item_type_ok := is_sub_type (a_supplied_item_type, a_required_item_type)
				if not item_type_ok then
					if is_promotable (a_supplied_item_type, a_required_item_type) then
						item_type_ok := True
						create {XM_XPATH_CAST_EXPRESSION} an_expression.make (an_expression, a_required_item_type, True)
						a_supplied_item_type := a_required_item_type
					end
				end
			end

			-- If both the cardinality and item type are statically OK, return now.
			
			if item_type_ok and cardinality_ok then
				Result := an_expression
			else

				-- If we haven't evaluated the cardinality of the supplied expression, do it now
				
				if a_supplied_cardinality = -1 then
					a_supplied_cardinality := an_expression.cardinality
				end

				-- If we haven't evaluated the item type of the supplied expression, do it now

				if a_supplied_item_type = -1 then
					a_supplied_item_type := an_expression.item_type
				end

				if a_supplied_cardinality = Required_cardinality_empty and then not a_required_type.cardinality_allows_zero then
					is_static_type_check_error := True
					static_type_check_error_message := STRING_.appended_string ("An empty sequence is not allowed as the ", a_role_locator.message)
					-- TODO need to add location information
					Result := Void
				else

					-- Handle the special rules for 1.0 compatibility mode

					if conformance.xpath_one_compatibility and not allows_many then
						if is_sub_type (a_required_item_type, String_type) then
							if is_sub_type (a_supplied_item_type, Atomic_type) then
								create {XM_XPATH_ATOMIZER_EXPRESSION} an_expression.make (an_expression)
								-- TODO need to copy location information
							end
							create {XM_XPATH_STRING_CONVERTER_EXPRESSION} an_expression.make (an_expression)
							-- TODO need to copy location information
							a_supplied_item_type := String_type
							a_supplied_cardinality := Required_cardinality_exactly_one
						elseif a_required_item_type = Number_type or else is_sub_type (a_required_item_type, Double_type) then
							-- TODO
						elseif a_required_item_type = Any_node or else a_required_item_type = Any_item or else a_required_item_type = Atomic_type then
							-- TODO
						end
						
					end
				end

				-- If the required type is atomic, and the supplied type is not statically
				--  guaranteed to be atomic, add an ATOMIZER_EXPRESSION

				if is_sub_type (a_required_item_type, Atomic_type) and then not is_sub_type (a_supplied_item_type, Atomic_type) then
					create {XM_XPATH_ATOMIZER_EXPRESSION} an_expression.make (an_expression)
					-- TODO need to copy location information
					a_supplied_item_type := an_expression.item_type
					a_supplied_cardinality := an_expression.cardinality
				end

				-- If the required type is a subtype of Atomic_type, and the supplied type is
				-- capable of producing untyped atomic values, add an Untyped Atomic Converter

				-- TODO
			end
		ensure
			static_error_or_non_void_result: not is_static_type_check_error implies Result /= Void
		end	

invariant

	error_message_when_error: is_static_type_check_error implies static_type_check_error_message /= Void

end
