
class XM_FILE_SOURCE

inherit
	XM_URI_SOURCE
		redefine
			out
		end

creation
	make
	
feature {NONE} -- Creation

	make (a_file: STRING) is
			-- Set file name.
		require
			not_void: a_file /= Void
		do
			file_name := a_file
		ensure
			set: file_name.is_equal (a_file)
		end

feature -- Access

	file_name: STRING
			-- File name.
	
	uri: UC_STRING is
			-- File URI.
		do
			!!Result.make_from_utf8("file:"+file_name)
		end
		
feature -- Out

	out: STRING is
			-- Filename.
		do
			Result := file_name
		end

invariant
	file_name_not_void: file_name /= Void
	
end
