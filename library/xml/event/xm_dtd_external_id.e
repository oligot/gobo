indexing

	description:

		"External identifiers in DTD"

	library: "Gobo Eiffel XML Library"
	copyright: "Copyright (c) 2002, Eric Bezault and others"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date$"
	revision: "$Revision$"

class XM_DTD_EXTERNAL_ID

inherit

	ANY
		undefine
			out
		end
		
	HASHABLE
		redefine
			hash_code,
			out
		end
		
	KL_IMPORTED_STRING_ROUTINES
		export
			{NONE} all
		undefine
			out
		end
		
creation

	make

feature {NONE} -- Initialization

	make is
			-- Do nothing.
		do
		end

feature -- ANY

	out: STRING is
			-- Print as in input.
		do
			if public_id /= Void then
				Result := clone ("PUBLIC ")
				Result := STRING_.appended_string (Result, public_id)
			end
			
			if system_id /= Void then
				if Result = Void then
					Result := clone ("SYSTEM")
				end
				Result.append_character (' ')
				Result := STRING_.appended_string (Result, system_id)
				Result.append_character (' ')
			end
		end

feature -- Query

	is_public: BOOLEAN is
			--- Is public_id defined?
		do
			Result := public_id /= Void
		end
			
feature -- Access

	base: STRING
			-- Base URI

	system_id: STRING
			-- SYSTEM

	public_id: STRING
			-- PUBLIC

feature -- Access

	hash_code: INTEGER is
			-- Hash code
		do
			if public_id /= Void then
				Result := public_id.hash_code // 3
			end
			if system_id /= Void then
				Result := Result + (system_id.hash_code // 3)
			end
		end
		
feature -- Setting

	set_base (a_base: like base) is
			-- Set base URI.
		do
			base := a_base
		ensure
			base_set: base = a_base
		end

	set_system (a_system_id: like system_id) is
			-- Set SYSTEM.
		do
			system_id := a_system_id
		ensure
			system_id_set: system_id = a_system_id
		end

	set_public (a_public_id: like public_id) is
			-- Set PUBLIC.
		do
			public_id := a_public_id
		ensure
			public_id_set: public_id = a_public_id
		end

end
