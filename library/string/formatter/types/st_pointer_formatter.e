indexing

	description:

		"Format ?x or ?X to produce hexadecimal output"

	library: "Gobo Eiffel Formatter Library"
	origins: "Based on code from Object Tools."
	copyright: "Copyright (c) 2004, Eric Bezault and others"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date$"
	revision: "$Revision$"

class ST_POINTER_FORMATTER

inherit

	ST_ABSTRACT_FORMATTER
		rename
			make as make_abstract
		end

creation

	make

feature -- Initialization

	make is
			-- If `a_uppercase_digits' then uppercase digits are used,
			-- else lowercase digits.
		do
			make_abstract
			create hex_formatter.make (False)
		end

feature {ST_SCIENTIFIC_FORMAT} -- Type that can be formatted

	anchor: POINTER_REF is
		once
			create Result
		end

feature -- Output

	output: STRING is
			-- Formatted `value'
		do
			-- TODO: Currently no portable way to do this?
			--hex_formatter.set_value (value.item.to_integer)
			--Result := zero_x + hex_formatter.output
			Result := value.out
		end

feature {NONE} -- Implementation

	hex_formatter: ST_HEX_FORMATTER

	zero_x: STRING is "0x"

end
