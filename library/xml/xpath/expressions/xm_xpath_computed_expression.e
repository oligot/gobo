indexing

	description:

		"XPath Expressions, other than values"

	library: "Gobo Eiffel XPath Library"
	copyright: "Copyright (c) 2004, Colin Adams and others"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date$"
	revision: "$Revision$"

deferred class XM_XPATH_COMPUTED_EXPRESSION

	-- There are two principal routines for evaluating an expression:
	--  `iterator', which yields an iterator over the result of the expression
	--  as a sequence, and `evaluate_item', which returns an XM_XPATH_ITEM.
	-- Both routines take an XM_XPATH_CONTEXT object to supply the evaluation context;
	--  for an expression that is a Value, this argument is ignored and may be `Void'.
	-- This base class provides an implementation of iterator in terms of evaluate_item
	--  that works only for singleton expressions, and an implementation
	--  of evaluate_item in terms of iterator that works only for non-singleton expressions.
	-- Sub-classes of expression must therefore provide either iterator or evaluate_item:
	--  they do not have to provide both.

inherit

	XM_XPATH_EXPRESSION

feature {NONE} -- Initialization

	initialize is -- TODO - all creation routines should call this
			-- Initialize attributes.
		do
			line_number := -1
		end

feature -- Access

	line_number: INTEGER
			-- Line number of the expression

	sub_expressions: DS_ARRAYED_LIST [XM_XPATH_EXPRESSION] is
			-- Immediate sub-expressions of `Current'
		do
			-- Default implementation returns an empty list;
			-- Suitable for an expression without sub-expressions.
			
			create Result.make_default
			Result.set_equality_tester (expression_tester)
		end

	iterator (a_context: XM_XPATH_CONTEXT): XM_XPATH_SEQUENCE_ITERATOR [XM_XPATH_ITEM] is
			-- Iterator over the values of a sequence
		local
			an_item: XM_XPATH_ITEM
		do
			-- The value of every expression can be regarded as a sequence, s
			--  so this routine is supported for all expressions.
			-- This default implementation handles iteration for expressions that
			--  return singleton values: for non-singleton expressions, the subclass must
			--  provide its own implementation.
				check
					singleton_expression: not cardinality_allows_many
					-- Not a prefect check, as cardinality may not have been set!
				end
			an_item := evaluate_item (a_context)
			if an_item = Void then
				Result := empty_abstract_item_iterator
			else
				create {XM_XPATH_SINGLETON_ITERATOR [XM_XPATH_ITEM]} Result.make (an_item) 
			end
		end

feature -- Comparison

	same_expression (other: XM_XPATH_EXPRESSION): BOOLEAN is
			-- Are `Current' and `other' the same expression?
		do
			Result := Current = other
		end

feature -- Status setting

	frozen compute_static_properties is
			-- Compute the static properties
		require
			not_yet_computed: not are_static_properties_computed
		do
			if not are_dependencies_computed then compute_dependencies end
			if not are_cardinalities_computed then compute_cardinality end
			if not are_special_properties_computed then compute_special_properties end
		ensure
			computed: are_static_properties_computed
			dependencies_not_void: dependencies /= Void
			intrisic_dependencies_not_void: intrinsic_dependencies /= Void
			cardinalities_not_void: cardinalities /= Void
			special_properties_not_void: special_properties /= Void
		end


	compute_intrinsic_dependencies is
			-- Determine the intrinsic dependencies of an expression.
		require	not_yet_computed: not are_intrinsic_dependencies_computed
		do
			create intrinsic_dependencies.make (1, 6)
			-- Now all are `False'
			are_intrinsic_dependencies_computed := True
		ensure
			computed: are_intrinsic_dependencies_computed and then intrinsic_dependencies /= Void
		end
			
	compute_dependencies is
			-- Compute dependencies on context.
			-- This default implementation computes them as
			-- the union of the sub-expressions' dependencies.
		require
			not_yet_computed: not are_dependencies_computed
		local
			sub_exprs: DS_ARRAYED_LIST [XM_XPATH_EXPRESSION]
			an_index: INTEGER
			a_value: BOOLEAN
		do
			if not are_intrinsic_dependencies_computed then compute_intrinsic_dependencies end
			create dependencies.make (1, 6)
			from
				sub_exprs := sub_expressions
				an_index := 1
			variant
				sub_exprs.count + 1 - an_index
			until
				an_index > sub_exprs.count
			loop
				a_value := dependencies.item (an_index) or else intrinsic_dependencies.item (an_index)
				dependencies.put (a_value, an_index)
				an_index := an_index + 1
			end
			
			are_dependencies_computed := True
		ensure
			intrinsic_computed: are_intrinsic_dependencies_computed and then intrinsic_dependencies /= Void
			computed: are_dependencies_computed and then dependencies /= Void
		end
	

feature -- Optimization

	simplify: XM_XPATH_EXPRESSION is
			-- Simplify `Current';
			-- This default implementation does nothing.
		do
			Result := Current
		end

	promote (an_offer: XM_XPATH_PROMOTION_OFFER): XM_XPATH_EXPRESSION is
			-- Offer promotion for `Current'
		do
			Result := Current
		end

feature -- Evaluation

	effective_boolean_value (a_context: XM_XPATH_CONTEXT): XM_XPATH_BOOLEAN_VALUE is
			-- Effective boolean value
		local
			an_iterator: XM_XPATH_SEQUENCE_ITERATOR [XM_XPATH_ITEM]
			an_item: XM_XPATH_ITEM
			a_node: XM_XPATH_NODE
			a_boolean: XM_XPATH_BOOLEAN_VALUE
			a_string: XM_XPATH_STRING_VALUE
			a_number: XM_XPATH_NUMERIC_VALUE
			a_double: XM_XPATH_DOUBLE_VALUE
		do
			an_iterator := iterator (a_context)
			if an_iterator.after then
				create Result.make (False)
			else
					check
						before: an_iterator.before
					end
				an_iterator.forth
				an_item := an_iterator.item_for_iteration
					check
						item_not_void: an_item /= Void
					end
				a_node ?= an_item
				if a_node /= Void then
					create Result.make (True)
				else
					a_boolean ?= an_item
					if a_boolean /= Void then
						create Result.make (a_boolean.value or else not an_iterator.after)
					else
						a_string ?= an_item
						if a_string /= Void then
							create Result.make (a_string.string_value.count /= 0 or else not an_iterator.after)
						else
							a_number ?= an_item
							if a_number /= Void then
								if an_iterator.after then
									create Result.make (False)
								else
									a_double ?=	a_number.convert_to_type (Double_type)
										check
											double_result_not_void: a_double /= Void
											-- This conversion always suceeds
										end
									if a_double.value = 0.0 then
										create Result.make (False)
										else
											create Result.make (a_number.is_nan)
									end
								end
							else
								create Result.make (True)
							end
						end
					end
				end
			end
			if Result = Void then create Result.make (False) end			
		end

	evaluate_item (a_context: XM_XPATH_CONTEXT): XM_XPATH_ITEM is
			-- Evaluate `Current' as a single item
		local
			an_iterator: XM_XPATH_SEQUENCE_ITERATOR [XM_XPATH_ITEM]
		do
				check
					singleton_expression: not cardinality_allows_many
				end
			an_iterator := iterator (a_context)
			if an_iterator.after then
				Result := Void
			else
					check
						before: an_iterator.before
					end
				an_iterator.forth
				Result := an_iterator.item_for_iteration
			end
		end

	evaluate_as_string (a_context: XM_XPATH_CONTEXT): XM_XPATH_STRING_VALUE is
			-- Evaluate `Current' as a String
		local
			an_item: XM_XPATH_ITEM
			a_string: XM_XPATH_STRING_VALUE
		do
			an_item := evaluate_item (a_context)
			if an_item = Void then
				create Result.make ("")
			else
				a_string ?= an_item
				if a_string = Void then
					create Result.make ("")
				else
					Result := a_string
				end
			end
		end

feature -- Element change

	set_line_number (a_line_number: INTEGER) is
			-- Set line number to `a_line_number'.
		require
			strictly_positive_line_number: a_line_number > 0
		do
			line_number := a_line_number
		ensure
			set: line_number = a_line_number
		end

feature {XM_XPATH_EXPRESSION} -- Restricted

	compute_cardinality is
			-- Compute cardinality.
		require
			not_yet_computed: not are_cardinalities_computed			
		deferred
		ensure
			computed: are_cardinalities_computed and then cardinalities /= Void
		end

	compute_special_properties is
			-- Compute special properties.
		require
			not_yet_computed: not are_special_properties_computed			
		do
			create special_properties.make (1, 6)
			-- All `False' by default
			are_special_properties_computed := True
		ensure
			computed: are_special_properties_computed and then special_properties /= Void
		end
	
feature {NONE} -- Implementation
	
	empty_abstract_item_iterator: XM_XPATH_EMPTY_ITERATOR [XM_XPATH_ITEM] is
			-- shared empty iterator
		once
			create Result.make
		end

end
	