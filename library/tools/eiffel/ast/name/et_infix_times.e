indexing

	description:

		"Eiffel infix '*' feature names"

	library: "Gobo Eiffel Tools Library"
	copyright: "Copyright (c) 1999-2002, Eric Bezault and others"
	license: "Eiffel Forum License v1 (see forum.txt)"
	date: "$Date$"
	revision: "$Revision$"

deferred class ET_INFIX_TIMES

inherit

	ET_INFIX
		redefine
			is_infix_times
		end

feature -- Access

	name: STRING is "infix %"*%""
			-- Name of feature

	hash_code: INTEGER is 17
			-- Hash code

feature -- Status report

	is_infix_times: BOOLEAN is True
			-- Is current feature name of the form 'infix "*"'?

feature -- Comparison

	same_feature_name (other: ET_FEATURE_NAME): BOOLEAN is
			-- Are feature name and `other' the same feature name?
			-- (case insensitive)
		do
			Result := other.is_infix_times
		end

end -- class ET_INFIX_TIMES
