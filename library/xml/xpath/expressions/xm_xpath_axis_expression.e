indexing

	description:

		"XPath Axis Expressions"

	library: "Gobo Eiffel XPath Library"
	copyright: "Copyright (c) 2004, Colin Adams and others"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date$"
	revision: "$Revision$"

class XM_XPATH_AXIS_EXPRESSION

inherit

	XM_XPATH_COMPUTED_EXPRESSION
		redefine
-- TODO			iterator, ...
		end
	
	XM_XPATH_AXIS

creation

	make

feature {NONE} -- Initialization

	make (an_axis_type: INTEGER; a_node_test: XM_XPATH_NODE_TEST) is
			-- TODO
		do
			axis := an_axis_type
			node_test := a_node_test
			compute_static_properties
		ensure
			axis_set: axis = an_axis_type
			node_test_set: node_test = a_node_test
		end

feature -- Access
	
	item_type: INTEGER is
			--Determine the data type of the expression, if possible
		local
			principal_axis: INTEGER
		do
			principal_axis := axis_principal_node_type (axis)
			if principal_axis = Attribute_node then
				Result := principal_axis
			elseif node_test = Void then
				Result := Any_node
			else
				Result := node_test.item_type
			end
		end

	axis: INTEGER
			-- Type of axis

	node_test: XM_XPATH_NODE_TEST
			-- Node test

feature -- Status report

	display (a_level: INTEGER; a_pool: XM_XPATH_NAME_POOL) is
			-- Diagnostic print of expression structure to `std.error'
		local
			a_string, test_string: STRING
		do
			if node_test = Void then
				test_string := "node()"
				debug ("XPath Axis Expression")
					std.error.put_string ("Axis expression: - no node-test present")
					std.error.put_new_line
				end
			else
				test_string := node_test.original_text
				debug ("XPath Axis Expression")
					std.error.put_string ("Axis expression: - test string is")
					std.error.put_string (test_string)
					std.error.put_new_line
				end
			end

			a_string := STRING_.appended_string (indent (a_level), axis_name (axis))
			a_string := STRING_.appended_string (a_string, "::")
			a_string := STRING_.appended_string (a_string, test_string)
			std.error.put_string (a_string)
			std.error.put_new_line
		end

feature -- Optimization

	analyze (a_context: XM_XPATH_STATIC_CONTEXT): XM_XPATH_EXPRESSION is
			-- Perform static analysis of an expression and its subexpressions
		do
			Result := Current
			Result.set_analyzed
		end

feature {NONE} -- Implementation
	
	compute_cardinality is
			-- Compute cardinality.
		do
			set_cardinality_zero_or_more
		end
	
end
