indexing

	description:

		"Namespace pool"

	library: "Gobo Eiffel XML Library"
	copyright: "Copyright (c) 2003, Colin Adams and others"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date$"
	revision: "$Revision$"

class XM_XPATH_NAME_POOL

	-- A collection of XML names, each containing a Namespace URI,
	-- a Namespace prefix, and a local name
	-- plus a collection of namespaces, each consisting of a prefix/URI pair.
	
	-- The equivalence betweem names depends only on the URI and the local name.
	-- The prefix is retained for documentary purposes only; it is useful when
	-- reconstructing a document to use prefixes that the user is familiar with.

	-- The NamePool eliminates duplicate names if they have the same prefix, uri,
	-- and local part. It retains duplicates if they have different prefixes.

	-- The NamePool holds two kinds of entry: name entries, representing
	-- expanded names (local name + prefix + URI), identified by a name code,
	-- and namespace entries (prefix + URI) identified by a namespace code.
	--
	-- The data structure of the name table is as follows.
	--
	-- There is a fixed size hash table; names are allocated to slots in this
	-- table by hashing on the local name. Each entry in the table is the head of
	-- a chain of `XM_XPATH_NAME_ENTRY' objects representing names that have the same hash code.
	--
	-- Each `XM_XPATH_NAME_ENTRY' represents a distinct name (same URI and local name). It contains
	-- the local name as a string, plus an `INTEGER' (should be `INTEGER_16' when all compilers support this)
	--  representing the URI (as an offset into the array uris).
	--
	-- The fingerprint of a name consists of the hash slot number concatenated with
	-- the depth of the entry down the chain of hash synonyms.
	--
	-- A name_code contains the fingerprint in the bottom 20 bits. It also contains
	-- an 8-bit prefix index. This distinguishes the prefix used, among all the
	-- prefixes that have been used with this namespace URI. If the prefix index is
	-- zero, the prefix is null. Otherwise, it indexes an space-separated list of
	-- prefix Strings associated with the namespace URI.

inherit

	XM_XPATH_STANDARD_NAMESPACES

	EXCEPTIONS
	
creation
	make

feature -- Initialization

	make is
			-- Establish invariant
		do
			create document_number_map.make_map (10)
			create hash_slots.make (0, 1023)
			
			create prefixes.make (0, 99)
			create uris.make (0, 99)
			create prefixes_for_uri.make (0, 99)

			prefixes.put ("", Null_prefix_index)
			uris.put (Null_uri, Null_prefix_index)
			prefixes_for_uri.put ("", Null_prefix_index)

			prefixes.put ("xml", Xml_prefix_index)
			uris.put (Xml_uri, Xml_prefix_index)
			prefixes_for_uri.put ("xml ", Xml_prefix_index)

			prefixes.put ("xsl", Xslt_prefix_index)
			uris.put (Xslt_uri, Xslt_prefix_index)			
			prefixes_for_uri.put ("xsl ", Xslt_prefix_index)
			
			prefixes_used := 3
			uris_used := 3
		end
	
feature -- Access

	namespace_code (xml_prefix: STRING; uri: STRING): INTEGER is
			-- Return existing namespace code for a namespace prefix/URI pair, or -1 if not present
		require
			uri_not_void: uri /= Void
		local
			prefix_code, uri_code: INTEGER -- should be INTEGER_16
			key: STRING
		do
			prefix_code := code_for_prefix (xml_prefix)
			if prefix_code < 0 then
				Result := -1
			else
				uri_code := code_for_uri (uri)
				if uri_code < 0 then
					Result := -1
				else
					Result := (prefix_code |<< 16) + uri_code
						check
							positive_result: Result >= 0
						end
					if prefix_code /= 0 then
						-- Ensure the prefix is in the list of prefixes used with this URI
						create key.make_from_string (xml_prefix)
						key.extend (' ')						
						if prefixes_for_uri.item (uri_code).substring_index (key, 1) = 0 then
							-- prefix is not in the list
							Result := -1
						end
					end
				end
			end
		ensure
			valid_result: Result > -2
		end

	code_for_uri (uri: STRING): INTEGER is -- should be INTEGER_16
			-- Uri code for a given `uri';
			-- -1 if not present in the name pool
		require
			uri_not_void: uri /= Void
		local
			counter: INTEGER
			found: BOOLEAN
		do
			from
				counter := 0
			until
				counter = uris_used or found = True
			loop
				if uris.item (counter).is_equal (uri) then
					Result := counter
					found := True
				end
			end
			if not found then Result := -1 end
		ensure
			valid_result: Result > -2
		end

	code_for_prefix (xml_prefix: STRING): INTEGER is -- should be INTEGER_16
			-- Prefix code for a given `xml_prefix';
			-- -1 if not found
		require
			xml_prefix_not_void: xml_prefix /= Void
		local
			counter: INTEGER
			found: BOOLEAN
		do
			from
				counter := 0
			until
				counter = prefixes_used or found = True
			loop
				if prefixes.item (counter).is_equal (xml_prefix) then
					Result := counter
					found := True
				end
			end
			if not found then Result := -1 end
		ensure
			valid_result: Result > -2
		end

	suggest_prefix_for_uri (uri: STRING): STRING is
			-- Suggest a prefix for a given `uri';
			-- If there are several, it's undefined which one is returned.;
			-- If there are no prefixes registered for this `uri', return `Void'
		require
			uri_not_void: uri /= Void
		local
			uri_code: INTEGER -- should be INTEGER_16
			index: INTEGER
			possible_prefixes: STRING
		do
			uri_code := code_for_uri (uri)
			if uri_code = -1 then
				Result := Void
			else
				possible_prefixes := prefixes_for_uri.item (uri_code)
				index := possible_prefixes.index_of (' ', 1)
				if index = 0 then
					Result := Void
				else
						check
							not_just_a_blank: index > 1
						end
					Result := possible_prefixes.substring (1, index - 1)
				end
			end
		end

	prefix_with_index (uri_code: INTEGER; index: INTEGER): STRING is
			-- Get a prefix among all the prefixes used with a given URI, given its index
		require
			valid_code: uri_code >= 0 and uri_code <= 32000
			valid_index: index >= 0 and index < 255
		local
			the_prefixes, this_prefix: STRING
			counter, blank, last_blank, length_of_prefixes: INTEGER
			found: BOOLEAN
		do
			if index = 0 then
				Result := ""
			else
				from
					the_prefixes := prefixes_for_uri.item (uri_code)
					counter := 1
					last_blank := 1
					length_of_prefixes := the_prefixes.count
				invariant
					Result /= Void implies found = True and counter = index
				variant
					index - counter
				until
					found = True
				loop
					blank := the_prefixes.index_of (' ', last_blank)
					if blank = 0 then
						found := True -- no more prefixes
							check
								void_result: Result = Void
							end
					else
						this_prefix := the_prefixes.substring (last_blank, blank + 1)
						last_blank := blank + 1 -- position AFTER the last blank
						if last_blank >  length_of_prefixes then found := True end
						if counter = index then
							found := True
							Result := this_prefix
						end
						if found = False then counter := counter + 1 end
					end
				end
			end
		end

feature -- Element change

	allocate_document_number (doc: XM_XPATH_TINY_DOCUMENT): INTEGER is
			--	Add a document to the pool, and allocate a document number
			-- WARNING - this code is not thread safe
		require
			document_not_void: doc /= Void
		do
			if document_number_map.has (doc) then
				Result := document_number_map.item (doc)
			else
				Result := document_number_map.count + 1
				document_number_map.put (Result, doc)
			end
		ensure
			positive_result: Result > 0
		end

	allocate_namespace_code (xml_prefix: STRING; uri: STRING): INTEGER is
			--	Allocate the namespace code for a namespace prefix/URI pair
			-- WARNING - this code is not thread safe
		require
			prefix_not_void: xml_prefix /= Void
			uri_not_void: uri /= Void
		local
			prefix_code, uri_code: INTEGER -- should be INTEGER_16
			key: STRING
		do
			prefix_code := allocate_code_for_prefix (xml_prefix)
			uri_code := allocate_code_for_uri (uri)

			if prefix_code /= 0 then -- i.e. a non-null prefix
				-- Ensure the prefix is in the list of prefixes used with this URI
				create key.make_from_string (xml_prefix)
				key.extend (' ')
				if prefixes_for_uri.item (uri_code).substring_index (key, 1) = 0 then
					-- prefix is not in the list
					prefixes_for_uri.item (uri_code).append (key)
				end
			end
			Result := (prefix_code |<< 16) + uri_code
		end

	allocate_code_for_uri (uri: STRING): INTEGER is -- should be INTEGER_16
			-- Allocate the uri code for a given URI
			-- WARNING - this code is not thread safe
		require
			uri_not_void: uri /= Void
		local
			counter: INTEGER
			found: BOOLEAN
		do
			from
				counter := 0
			until
				counter = uris_used or found = True
			loop
				if uris.item (counter).is_equal (uri) then
					Result := counter
					found := True
				end
			end
			if not found then
				if uris_used >= 32000 then
					raise ("Too many namespace URIs")
				end
				uris.enter (uri, uris_used)
				uris_used := uris_used + 1 -- not sure about all this - does ARRAY grow automatically?
				Result := uris_used
			end
		ensure
			valid_uri_code: Result >= 0 and Result <= 32000
		end

	allocate_code_for_prefix (xml_prefix: STRING): INTEGER is -- should be INTEGER_16
			-- Allocate the uri code for a given `xml_prefix'
			-- WARNING - this code is not thread safe
		require
			prefix_not_void: xml_prefix /= Void
		local
			counter: INTEGER
			found: BOOLEAN
		do
			from
				counter := 0
			until
				counter = prefixes_used or found = True
			loop
				if prefixes.item (counter).is_equal (xml_prefix) then
					Result := counter
					found := True
				end
			end
			if not found then
				if prefixes_used >= 32000 then
					raise ("Too many namespace prefixes")
				end
				prefixes.enter (xml_prefix, prefixes_used)
				prefixes_used := prefixes_used + 1 -- not sure about all this - does ARRAY grow automatically?
				Result := prefixes_used
			end
		ensure
			valid_prefix_code: Result >= 0 and Result <= 32000
		end

	allocate_name (xml_prefix: STRING; uri: STRING; local_name: STRING): INTEGER is
			-- Allocate a name from the pool, or a new Name if there is not a matching one there
		require
			prefix_not_void: xml_prefix /= Void
			uri_not_void: uri /= Void
			local_name_not_void: local_name /= Void
		local
			uri_code: INTEGER -- should be INTEGER_16
		do
			uri_code := allocate_code_for_uri (uri)
				check
					valid_uri_code:  uri_code >= 0 and uri_code <= 32000
				end
			Result := allocate_name_using_uri_code (xml_prefix, uri_code, local_name)
		ensure
			valid_name_code: Result > 0 and Result <= 0xfffff
		end

	allocate_name_using_uri_code (xml_prefix: STRING; uri_code: INTEGER; local_name: STRING): INTEGER is
			-- Allocate a name from the pool, or a new Name if there is not a matching one there
		require
			prefix_not_void: xml_prefix /= Void
			valid_uri_code:  uri_code >= 0 and uri_code <= 32000
			local_name_not_void: local_name /= Void
		local
			hash_code, depth, the_prefix_index: INTEGER
			key: STRING
			the_name_entry, next, new_entry: XM_XPATH_NAME_ENTRY
			finished: BOOLEAN
		do
			depth := 0
			hash_code := (local_name.hash_code & 0x7fffffff) \\ 1023
				check
					valid_hash_code: hash_code >= 0 and hash_code < 1024
				end
			the_prefix_index := prefix_index (uri_code, xml_prefix)
				check
					valid_prefix_index: the_prefix_index > -2 and the_prefix_index < 255
				end
			if the_prefix_index < 0 then
				create key.make_from_string (xml_prefix)
				key.extend (' ')
				prefixes_for_uri.item (uri_code).append (key)
				the_prefix_index := prefix_index (uri_code, xml_prefix)
					check
						valid_prefix_index2: the_prefix_index > 0 and the_prefix_index < 255
					end		
			end
			if hash_slots.item (hash_code) = Void then
				create the_name_entry.make (uri_code, local_name)
				hash_slots.put (the_name_entry, hash_code)
			else
				the_name_entry := hash_slots.item (hash_code)
				from
				until
					finished = True
				loop
					if the_name_entry.local_name.is_equal (local_name) and the_name_entry.uri_code = uri_code then
						finished := True
					else
						next := the_name_entry.next
						depth := depth + 1
						if depth > 1023 then
							raise ("The XPath name pool is full")
						end
						if next = Void then
							create new_entry.make (uri_code, local_name)
							the_name_entry.set_next (new_entry)
							finished := True
						else
							the_name_entry := next
						end
					end
				end
			end
			Result := (the_prefix_index |<< 20) + (depth |<< 10) + hash_code
		ensure
			valid_name_code: Result > 0 and Result <= 0xfffffff -- 28 bits = 8-bit prefix-index + 20-bit fingerprint
		end
			
feature {NONE} -- Implementation

	name_entry (name_code: INTEGER): XM_XPATH_NAME_ENTRY is
			-- Name entry corresponding to `name_code'
		require
			positive_name_code: name_code >= 0
		local
			hash_code, depth, counter: INTEGER
			found: BOOLEAN
			entry: XM_XPATH_NAME_ENTRY
		do
			hash_code := name_code & 0x3ff
			depth := (name_code |>> 10) & 0x3ff
			entry := hash_slots.item (hash_code)
			from
				counter := 1
			variant
				depth - counter
			until
				counter = depth or found = True
			loop
				if entry = Void then
					found := True
				else
					entry := entry.next
				end
			end
			Result := entry
		end

	prefix_index (uri_code: INTEGER; xml_prefix: STRING): INTEGER is
			-- Index of a prefix among all the prefixes used with a given URI
		require
			prefix_not_void: xml_prefix /= Void
			valid_uri_code:  uri_code >= 0 and uri_code <= 32000
		local
			the_prefixes: STRING
			count, counter, blank, last_blank: INTEGER
			found: BOOLEAN
		do
			-- look for quick wins
			if xml_prefix.is_equal ("") then
				Result := 0
			else
				the_prefixes := prefixes_for_uri.item (uri_code)
				count := the_prefixes.count
				if count = xml_prefix.count + 1 and then the_prefixes.item (count).is_equal (' ')
					and then the_prefixes.substring (1, count).is_equal (xml_prefix) then -- sole prefix
					Result := 1
				else
					from
						counter := 1
						Result := -1 -- Not found
						last_blank := 1
					until
						found = True
					loop
						blank := the_prefixes.index_of (' ', last_blank)
						if blank = 0 then
							Result := -1
							found := True
						elseif the_prefixes.substring (last_blank, blank + 1).is_equal (xml_prefix) then
							Result := counter
							found := True
						elseif counter = 255 then
							raise ("Too many prefixes for one namespace URI")
						else
							counter := counter + 1
						end
						last_blank := blank + 1 -- position AFTER the last blank
					end
				end
			end
		ensure
			valid_result: Result > -2 and Result < 255
		end
	
	default_pool: XM_XPATH_SHARED_NAME_POOL is
			-- The default singular instance of an `XM_XPATH_NAME_POOL';
			--  used unless the user deliberately wants to manage name pools himself
		once
			create Result.make
		ensure
			default_pool_not_void: Result /= Void
		end

	document_number_map: DS_HASH_TABLE [INTEGER, XM_XPATH_TINY_DOCUMENT] -- TODO - ought to be DS_WEAK_HASH_TABLE, if/when one exists
			-- Maps documents to document numbers
	
	hash_slots: ARRAY [XM_XPATH_NAME_ENTRY]
			-- Fixed size hash table
	
	prefixes: ARRAY [STRING]
			-- The XML prefixes in use
	
	prefixes_used: INTEGER
			-- Highest number XML prefix in use

	uris: ARRAY [STRING]
			-- The URIs in use
	
	prefixes_for_uri: ARRAY [STRING]
			-- The XML prefixes in use for a given URI
	
	uris_used: INTEGER
			-- Highest number uri in use
	
invariant
	
	document_map_not_void: document_number_map /= Void
	fixed_hash_slots: hash_slots /= Void and then hash_slots.capacity = 1024
	prefixes_not_void: prefixes /= Void
	prefixes_used: prefixes_used >= 3
	uris_not_void: uris /= Void
	prefixes_for_uri_not_void: prefixes_for_uri /= Void
	uris_used: uris_used >= 3
	
end

	
