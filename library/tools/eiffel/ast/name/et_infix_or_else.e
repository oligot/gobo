indexing

	description:

		"Eiffel infix 'or else' feature names"

	library: "Gobo Eiffel Tools Library"
	copyright: "Copyright (c) 1999-2002, Eric Bezault and others"
	license: "Eiffel Forum License v1 (see forum.txt)"
	date: "$Date$"
	revision: "$Revision$"

deferred class ET_INFIX_OR_ELSE

inherit

	ET_INFIX
		redefine
			is_infix_or_else
		end

feature -- Access

	name: STRING is "infix %"or else%""
			-- Name of feature

	hash_code: INTEGER is 14
			-- Hash code

feature -- Status report

	is_infix_or_else: BOOLEAN is True
			-- Is current feature name of the form 'infix "or else"'?

feature -- Comparison

	same_feature_name (other: ET_FEATURE_NAME): BOOLEAN is
			-- Are feature name and `other' the same feature name?
			-- (case insensitive)
		do
			Result := other.is_infix_or_else
		end

end -- class ET_INFIX_OR_ELSE
