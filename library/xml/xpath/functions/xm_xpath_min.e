indexing

	description:

		"Objects that implement the XPath min() function"

	library: "Gobo Eiffel XPath Library"
	copyright: "Copyright (c) 2004, Colin Adams and others"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date$"
	revision: "$Revision$"

class XM_XPATH_MIN

inherit

	XM_XPATH_MINIMAX_ROUTINES

creation

	make

feature {NONE} -- Initialization

	make is
			-- Establish invariant
		do
			name := "min"
			minimum_argument_count := 1
			maximum_argument_count := 2
			create arguments.make (2)
			arguments.set_equality_tester (expression_tester)
			compute_static_properties
		end

end
	
