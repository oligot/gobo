indexing

	description:

		"Eiffel actual argument lists"

	library: "Gobo Eiffel Tools Library"
	copyright: "Copyright (c) 1999-2002, Eric Bezault and others"
	license: "Eiffel Forum License v1 (see forum.txt)"
	date: "$Date$"
	revision: "$Revision$"

class ET_ACTUAL_ARGUMENTS

inherit

	ET_EXPRESSION_LIST

creation

	make, make_with_capacity

feature -- Status report

	is_one_argument: BOOLEAN is
			-- Is there exactly one argument?
		do
			Result := (count = 1)
		end

end -- class ET_ACTUAL_ARGUMENTS
