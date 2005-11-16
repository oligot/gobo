indexing

	description:

		"US-ASCII output encoders."

	library: "Gobo Eiffel XSLT Library"
	copyright: "Copyright (c) 2004, Colin Adams and others"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date$"
	revision: "$Revision$"

class XM_XSLT_ASCII_ENCODER

inherit

	XM_XSLT_OUTPUT_ENCODER

	KL_IMPORTED_STRING_ROUTINES
		export {NONE} all end

create

	make

feature {NONE} -- Initialization

	make (a_raw_outputter: XM_OUTPUT) is
			-- Establish invariant.
		require
			outputter_not_void: a_raw_outputter /= Void
		do
			encoding := "US-ASCII"
			outputter := a_raw_outputter
		ensure
			encoding_set: STRING_.same_string (encoding,"US-ASCII")
			outputter_set: outputter = a_raw_outputter
		end

feature -- Access

	byte_order_mark: STRING is
			-- XML BOM
		once
			-- Precondition is never met
		end

feature -- Status report

	byte_order_mark_permitted: BOOLEAN is
			--	Is a BOM permitted?
		do
			Result := False
		end

	is_byte_order_mark_default: BOOLEAN is
			-- Is emitting a BOM the default behaviour?
		do
			Result := False
		end

	is_bad_character_code (a_code: INTEGER): BOOLEAN is
			-- Is `a_code' not representable in `encoding'?
		do
			Result := a_code > 127
		end

feature -- Element change

	output (a_character_string: STRING) is
			-- Encode `a_character_string' and write it to `outputter'.
		do
			if not is_error then
				outputter.output (a_character_string)
			end
		rescue
			is_error := True
			retry
		end

	output_ignoring_error (a_character_string: STRING) is
			-- Output `a_character_string', ignoring any error.
		do
			if is_error then
				is_error := False
			else
				outputter.output (a_character_string)
			end
		rescue
			is_error := True
			retry
		end

end
	
