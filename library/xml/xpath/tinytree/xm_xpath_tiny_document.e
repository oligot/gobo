indexing

	description:

		"Tiny tree Document nodes"

	library: "Gobo Eiffel XML Library"
	copyright: "Copyright (c) 2003, Colin Adams and others"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date$"
	revision: "$Revision$"

class XM_XPATH_TINY_DOCUMENT
	-- A node in the XML parse tree representing the Document itself
	-- (or equivalently, the root node of the Document).

	-- This structure supports trees whose root is an element node rather than a document node.
	-- The document node still exists, for implementation reasons, but it is not regarded as
	-- part of the tree. The variable root_node identifies the actual root of the tree, which
	-- is the document node by default.
	
inherit

	XM_XPATH_DOCUMENT
		redefine
			node_kind
		end

	XM_XPATH_TINY_COMPOSITE_NODE

	XM_XPATH_STANDARD_NAMESPACES

	XM_XPATH_TYPE

	XM_STRING_MODE

	KL_IMPORTED_STRING_ROUTINES

	KL_SHARED_STANDARD_FILES

	UT_STRING_FORMATTER
	
	HASHABLE
	
creation

	make, make_with_defaults

feature -- Initialization

	make (estimated_node_count: INTEGER; estimated_attribute_count: INTEGER; estimated_namespace_count: INTEGER; estimated_character_count: INTEGER) is
			-- Establish invariant
		require
			positive_node_count: estimated_node_count > 0
			attribute_count: estimated_attribute_count >= 0
			namespace_count: estimated_namespace_count >= 0
			character_count: estimated_character_count >= 0
		do
			root_node := 1
			node_number := 1
			document := Current
			
			create node_kinds.make (1, estimated_node_count)
			create depth.make (1, estimated_node_count)
			create next_sibling_indices.make (1, estimated_node_count)
			create alpha.make (1, estimated_node_count)
			create beta.make (1, estimated_node_count)
			create name_codes.make (1, estimated_node_count)

			create attribute_parents.make (estimated_attribute_count)
			create attribute_codes.make (estimated_attribute_count)
			create attribute_values.make (estimated_attribute_count)

			create namespace_parents.make (estimated_namespace_count)
			create namespace_codes.make (estimated_namespace_count)

			if is_string_mode_ascii then
				create character_buffer.make (estimated_character_count)
			else
				create {UC_UTF8_STRING} character_buffer.make (estimated_character_count)
			end
		end

	make_with_defaults is
			-- Create with default parameter settings
		do
			make (4000, 100, 20, 4000)
		end

feature -- Access

	character_buffer: STRING
			-- The document contents
	
	comment_buffer: STRING
			-- Buffer for comments, created when needed

	name_pool: XM_XPATH_NAME_POOL
			-- Namespace mappings.

	root_node: INTEGER
			-- The actual root of the tree. Normally 1.

	node_kind: STRING is
			-- Kind of node
		do
			if root_node = 1 then
				Result := "document"
			else
				Result := ""
			end
		end

	namespace_code_for_node (a_node_number: INTEGER): INTEGER is
			-- Namespace code for `a_node_number'
		require
			node_number_in_range: is_node_number_valid (a_node_number)
		do
			Result := namespace_codes.item (a_node_number)
		end			

		
	hash_code: INTEGER is
		do
			Result := document_number \\ 7
		end

	name_code_for_node (a_node_number: INTEGER): INTEGER is
			-- Fetch the name code for `a_node_number'
		require
			node_number_in_range: is_node_number_valid (a_node_number)
		do
			Result := name_codes.item (a_node_number)
		end
	
	character_buffer_length: INTEGER is
			-- Length of `character_buffer'
		do
			Result := character_buffer.count
		ensure
			positive_result: Result >= 0
		end
			

	comment_buffer_length: INTEGER is
			-- Length of `comment_buffer'
		do
			if comment_buffer /= Void then
				Result := comment_buffer.count
			else
				Result := 0
			end
		ensure
			positive_result: Result >= 0
		end
			
	unparsed_entity_system_id (entity_name: STRING): STRING is
			-- System identifier of an unparsed external entity
		local
			entity_table_entry: DS_ARRAYED_LIST [STRING]
		do
			if entity_table = Void then
				Result := Void
			elseif not entity_table.has (entity_name) then
				Result := Void
			else
				entity_table_entry := entity_table.item (entity_name)
					check
						entity_present: entity_table_entry /= Void
						-- Because `has' returned `True'.
					end
				Result := entity_table_entry.item (1)
			end
		end

	unparsed_entity_public_id (entity_name: STRING): STRING is
			-- Public identifier of an unparsed external entity
		local
			entity_table_entry: DS_ARRAYED_LIST [STRING]
		do
			if entity_table = Void then
				Result := Void
			elseif not entity_table.has (entity_name) then
				Result := Void
			else
				entity_table_entry := entity_table.item (entity_name)
					check
						entity_present: entity_table_entry /= Void
						-- Because `has' returned `True'.
					end
				Result := entity_table_entry.item (2)
			end
		end

	document_uri: STRING is
			-- Absoulte URI of the source from which the document was constructed
		do
			if system_id_map = Void then
				Result := Void
			else
				Result := system_id_map.system_id (node_number)
			end
		end

	alpha_value (a_node_number: INTEGER): INTEGER is
			-- Alpha value for the node
		require
			node_number_is_valid: is_node_number_valid (a_node_number)
		do
			Result := alpha.item (a_node_number)
		end

	beta_value (a_node_number: INTEGER): INTEGER is
			-- Beta value for the node
		require
			node_number_is_valid: is_node_number_valid (a_node_number)
		do
			Result := beta.item (a_node_number)
		end

	prior_node (a_node_number: INTEGER): INTEGER is
			-- Previous-sibling for `a_node_number'
		require
			node_number_is_valid: is_node_number_valid (a_node_number)
		do
			Result := prior.item (a_node_number)
		end

	attribute_parent (an_index: INTEGER): INTEGER is
			-- Index of parent element
		require
			index_is_valid: an_index <= number_of_attributes
		do
			Result := attribute_parents.item (an_index)
		end

	attribute_name_code  (an_index: INTEGER): INTEGER is
			-- Attribute name code for `an_index'
		require
			index_is_valid: an_index <= number_of_attributes
		do
			Result := attribute_codes.item (an_index)
		end

	retrieve_attribute_node (an_attribute_number: INTEGER): XM_XPATH_TINY_ATTRIBUTE is
			-- Build a flyweight attribute node for `an_attribute_number'
		require
			attribute_number_is_valid: is_attribute_number_valid (an_attribute_number)
		do
			create Result.make (Current, an_attribute_number)
		end

	retrieve_node_kind (a_node_number: INTEGER): INTEGER is
			-- Node kind for the node
		require
			node_number_is_valid: is_node_number_valid (a_node_number)
		do
			Result := node_kinds.item (a_node_number)
		end
	
	attribute_value (an_attribute_number: INTEGER): STRING is
			-- Value of `an_attribute_number'
		require
			attribute_number_is_valid: is_attribute_number_valid (an_attribute_number)
		do
			Result := attribute_values.item (an_attribute_number)
		end

	attribute_annotation (an_attribute_number: INTEGER): INTEGER is
			-- Type annotation of `an_attribute_number'
		require
			attribute_number_is_valid: is_attribute_number_valid (an_attribute_number)
		do
			if attribute_type_codes = Void then
				Result := Untyped_atomic_type
			else
				Result := attribute_type_codes.item (an_attribute_number)
			end
		end

	element_annotation (a_node_number: INTEGER): INTEGER is
			-- Type annotation of `a_node_number'
		require
			node_number_is_valid: is_node_number_valid (a_node_number)
		do
			if element_type_map = Void then
				Result := Untyped_any_type
			elseif element_type_map.has (a_node_number)  then
				Result := element_type_map.item (a_node_number)
			else
				Result := Untyped_any_type
			end
		end

	retrieve_next_sibling (a_node_number: INTEGER): INTEGER is
			-- Next sibling of  `a_node_number'
		require
			node_number_is_valid: is_node_number_valid (a_node_number)
		do
			Result := next_sibling_indices.item (a_node_number)
		end

	retrieve_node (a_node_number: INTEGER): XM_XPATH_TINY_NODE is
			-- Build and retrieve flyweight node for  `a_node_number'
		require
			node_number_is_valid: is_node_number_valid (a_node_number)
		local
			type_of_node: INTEGER
		do
			type_of_node := node_kinds.item (a_node_number)
			inspect
				type_of_node
			when Document_node then
				Result := Current
					check
						This_node: a_node_number = node_number
					end
			when Element_node then
				create {XM_XPATH_TINY_ELEMENT} Result.make (Current, a_node_number)
			when Text_node then
				create {XM_XPATH_TINY_TEXT} Result.make (Current, a_node_number)
			when Comment_node then
				create {XM_XPATH_TINY_COMMENT} Result.make (Current, a_node_number)
			when Processing_instruction_node then
				create {XM_XPATH_TINY_PROCESSING_INSTRUCTION} Result.make (Current, a_node_number)
			end
		ensure
			Node_not_void: Result /= Void
		end

	depth_of (a_node_number: INTEGER): INTEGER is
			-- Depth in tree of `a_node_number'
		require
			node_number_is_valid: is_node_number_valid (a_node_number)
		do
			Result := depth.item (a_node_number)
		end

	all_elements (a_fingerprint: INTEGER): DS_ARRAYED_LIST [XM_XPATH_TINY_ELEMENT] is
			-- An enumeration of all elements with a given name;
			-- This is implemented as a memo function:
			--  the first time it is called for a particular
			--  element type, it remembers the result for next time.
		local
			a_list: DS_ARRAYED_LIST [XM_XPATH_TINY_ELEMENT]
			an_index, stored_name_code, another_fingerprint, top_bits: INTEGER
			an_element: XM_XPATH_TINY_ELEMENT
		do
			if element_list = Void then
				create element_list.make (10)
			end
			if not element_list.has (a_fingerprint) then
				debug ("XPath tiny document")
					print ("All_elements: adding new list for fingerprint ")
					print (a_fingerprint.out)
					print ("%N")
				end
				create a_list.make_default
			else
				a_list := element_list.item (a_fingerprint)
			end

			from
				an_index := 1
			variant
				last_node_added - an_index + 1
			until
				an_index > last_node_added
			loop
				stored_name_code := name_codes.item (an_index)
				top_bits := (stored_name_code // bits_20) * bits_20
				another_fingerprint := stored_name_code - top_bits
				if node_kinds.item (an_index) = Element_node
					and then  another_fingerprint = a_fingerprint then
					an_element ?= retrieve_node (an_index)
						check
							element_not_void: an_element /= Void
						end
					if a_list.is_full then
						a_list.resize (a_list.count * 2)
					end
					a_list.put_last (an_element)
				end
				an_index := an_index + 1
			end
			if element_list.is_full then
				element_list.resize (element_list.count * 2)
			end
			element_list.put (a_list, a_fingerprint)

			Result := a_list
		end
	
	last_node_added: INTEGER
			-- Last node created with `add_node'

feature -- Status report

	is_node_number_valid (a_node_number: INTEGER): BOOLEAN is
			-- Does `a_node_number' represent a valid node?
		do
			Result := a_node_number > 0 and then a_node_number <= last_node_added
		end

	is_attribute_number_valid (an_attribute_number: INTEGER): BOOLEAN is
			-- Does `an_attribute_number' represent a valid attribute?
		do
			Result := an_attribute_number > 0 and then an_attribute_number <= number_of_attributes
		end

	number_of_attributes: INTEGER is
			-- How many attribute nodes are there in `Current'?
		do
			Result := attribute_values.count
		end

	diagnostic_dump is
			-- Produce diagnostic print of main tree arrays
		local
			index: INTEGER
		do
			std.error.put_string ("    node    type   depth    next   alpha    beta    name%N")
			from
				index := 1
			variant
				last_node_added - index + 1
			until
				index > last_node_added
			loop
				std.error.put_string (left_padded_string_out (index.out, 8, ' '))
				std.error.put_string (left_padded_string_out (type_name (node_kinds.item (index)), 8, ' ').substring (1,8))
				std.error.put_string (left_padded_string_out (depth.item (index).out, 8, ' '))
				std.error.put_string (left_padded_string_out (next_sibling_indices.item (index).out, 8, ' '))
				std.error.put_string (left_padded_string_out (alpha.item (index).out, 8, ' '))
				std.error.put_string (left_padded_string_out (beta.item (index).out, 8, ' '))
				std.error.put_string (left_padded_string_out (name_codes.item (index).out, 8, ' '))
				std.error.put_new_line
				index := index + 1
			end
				
		end
		
feature {XM_XPATH_NODE} -- Access

	is_possible_child: BOOLEAN is
			-- Can this node be a child of a document or element node?
		do
			Result := False
		end

feature -- Element change

	add_node (new_node_type: INTEGER; depth_value: INTEGER; alpha_val: INTEGER;  beta_val: INTEGER; new_name_codes: INTEGER) is
			-- Add a node to the document
		require
			valid_node_type: new_node_type = Document_node or new_node_type = Element_node or
				new_node_type = Text_node or new_node_type = Comment_node or new_node_type = Processing_instruction_node
			positive_depth: depth_value > 0
			valid_alpha: alpha_val >= -1
			valid_beta: beta_val >= -1
			valid_name_codes: new_name_codes >= -1
		local
			new_size: INTEGER
		do
			number_of_nodes := number_of_nodes + 1
			if number_of_nodes > node_kinds.count then
				new_size := node_kinds.count * 2
				node_kinds.resize (1, new_size)
				depth.resize (1, new_size)
				alpha.resize (1, new_size)
				beta.resize (1, new_size)
				name_codes.resize (1, new_size)
			end
			node_kinds.put (new_node_type, number_of_nodes)
			depth.put (depth_value, number_of_nodes)
			alpha.put (alpha_val, number_of_nodes)
			beta.put (beta_val, number_of_nodes)
			name_codes.put (new_name_codes, number_of_nodes) 
			set_next_sibling (-1, number_of_nodes) -- safety precaution
			last_node_added := number_of_nodes
			debug ("XPath tiny document")
				print ("Add_node: Node  ")
				print (last_node_added.out)
				print (" of type  ")
				print (type_name (new_node_type))
				print ("%N")
			end
		ensure
			one_more_node: number_of_nodes = old number_of_nodes + 1 and last_node_added = number_of_nodes
			correct_node_kinds: node_kinds.item (number_of_nodes) = new_node_type
			correct_depth: depth.item (number_of_nodes) = depth_value
			correct_alpha: alpha.item (number_of_nodes) = alpha_val
			correct_beta: beta.item (number_of_nodes) = beta_val
			correct_name_codes: name_codes.item (number_of_nodes) = new_name_codes
			no_next_sibling: next_sibling_indices.item (number_of_nodes) = -1
		end
	
	set_next_sibling (next: INTEGER; which_node: INTEGER) is
			-- Set the next sibling of a node
		require
			valid_current_node: which_node > 0
			valid_next_sibling: next >= -1 -- -1 means no next sibling
		do
			debug ("XPath tiny document")
				print ("Set_next_sibling: Node ")
				print (which_node.out)
				print (" set to ")
				print (next.out)
				print ("%N")
			end
			if which_node > next_sibling_indices.count then next_sibling_indices.resize (1, 2 * next_sibling_indices.count) end
			next_sibling_indices.put (next, which_node)
		ensure
			next_sibling_set: next_sibling_indices.item (which_node) = next
		end

	append_characters (characters: STRING) is
			-- Add `characters' to the document's content
		require
			characters_not_void: characters /= Void
		do
			character_buffer := STRING_.appended_string (character_buffer, characters)
		end

	add_namespace (the_parent: INTEGER; ns_code: INTEGER) is
			-- Add a namespace declaration
		local
			new_size: INTEGER
		do
			if namespace_parents.is_full then
				new_size := namespace_parents.count * 2
				namespace_parents.resize (new_size)
				namespace_codes.resize (new_size)
			end
			namespace_parents.put_last (the_parent)
				check
					namespace_codes_not_full: not	namespace_codes.is_full
					-- same size as parent
				end
			namespace_codes.put_last (ns_code)
		end

	add_attribute (the_parent: INTEGER; a_name_code: INTEGER; a_type_code: INTEGER; value: STRING) is
			-- Add an attribute
		local
			new_size, an_index, a_type_code2: INTEGER
		do
			if attribute_parents.capacity < the_parent  then
				new_size := last_node_added.max (attribute_parents.count * 2)
				attribute_parents.resize (new_size)
				attribute_values.resize (new_size)
				attribute_codes.resize (new_size)
			end
			attribute_parents.put_last (the_parent)
			attribute_values.put_last (value)
			attribute_codes.put_last (a_name_code)

			if a_type_code = 0 then
				a_type_code2 := Untyped_atomic_type
			else
				a_type_code2 := a_type_code
			end
			if a_type_code2 /= Untyped_atomic_type then
				if attribute_type_codes = Void then
					create attribute_type_codes.make (1, attribute_parents.count)
					from
						an_index := 1
					variant
						attribute_parents.count - an_index 
					until
						an_index = attribute_parents.count
					loop
						attribute_type_codes.put (Untyped_atomic_type, an_index)
					end
				end
			end
			if attribute_type_codes /= Void then
				if attribute_type_codes.count < the_parent then
					new_size := last_node_added.max (attribute_type_codes.count * 2)
					attribute_type_codes.resize (1, new_size)
				end
				attribute_type_codes.put (a_type_code2, attribute_parents.count)
			end
			
			if alpha.item (the_parent) = -1 then alpha.put (attribute_values.count, the_parent) end

			if a_type_code2 = Id_type then
				-- The attribute is marked as being an ID. But we don't trust it - it
				-- might come from a non-validating parser. Before adding it to the index, we
				-- check that it really is an ID.

				--  TODO
			end
		end

	store_comment (data: STRING) is
			-- Store comment or processing instruction test
		require
			data_not_void: data /= Void
		do
			if comment_buffer = Void then
				if is_string_mode_ascii then
					create comment_buffer.make (data.count)
				else
					create {UC_UTF8_STRING} comment_buffer.make (data.count)
				end
			end
			comment_buffer := STRING_.appended_string (comment_buffer, data)
		ensure
			comment_buffer_created: comment_buffer /= Void
		end
	
		
feature -- Status setting

	set_name_pool (new_pool: XM_XPATH_NAME_POOL) is
			-- Set the name pool used by this builder
		require
			pool_not_void: new_pool /= Void
		do
			name_pool := new_pool
			add_namespace (node_number, name_pool.namespace_code ("xml", Xml_uri))
			name_pool.allocate_document_number (Current)
			document_number := name_pool.document_number (Current)
		ensure
			pool_set: name_pool = new_pool
		end

	ensure_prior_index is
			-- On demand, ensure existence of index for quick access to preceding-sibling nodes
		do
			if prior = Void then make_prior_index end
		ensure
			prior_index_built: prior /= Void
		end
	
	make_prior_index is
			-- On demand, make an index for quick access to preceding-sibling nodes
		local
			prior_index, next_node: INTEGER
		do
			create prior.make (1, last_node_added)
			from
				prior_index := 1
			variant
				last_node_added - prior_index + 1
			until
				prior_index > last_node_added
			loop	
				prior.put (-1, prior_index)
				prior_index := prior_index + 1
			end
			from
				prior_index := 1
			variant
				last_node_added - prior_index + 1
			until
				prior_index > last_node_added
			loop
				next_node := next_sibling_indices.item (prior_index)
				if next_node > prior_index then
					prior.put (prior_index, next_node)
				end
				prior_index := prior_index + 1
			end
		ensure
			prior_index_built: prior /= Void
		end
	
feature {NONE} -- Implementation

	id_table: DS_HASH_TABLE [XM_XPATH_TINY_ELEMENT, STRING]
			-- Mapping of IDs to elements.

	document_number: INTEGER
			-- Uniquely identifies this document.

	element_list: DS_HASH_TABLE [DS_ARRAYED_LIST [XM_XPATH_TINY_ELEMENT], INTEGER]
			-- Lists of elements with the same name.

	uses_namespaces: BOOLEAN
			-- Does this document use namespaces?

	entity_table: DS_HASH_TABLE [DS_ARRAYED_LIST [STRING], STRING]
			-- Maps unparsed entity names to their URI/PUBLIC-ID pairs.

	element_type_map: DS_HASH_TABLE [INTEGER, INTEGER]
			-- Maps Element types to node numbers

	number_of_nodes: INTEGER
			-- Number of nodes excluding attributes and namespaces

			-- The following arrays contain one entry for each node other than attribute
			-- and namespace nodes, arranged in document order

	node_kinds: ARRAY [INTEGER]
			-- Kind of node, e.g. Element, Text, Comment

	depth: ARRAY [INTEGER]
			-- Depth of the node in the hierarchy (document root is level 1, so = the number of ancestors + 1).

	next_sibling_indices: ARRAY[INTEGER]
			-- Node number of the next sibling;
			-- unless it points backwards, in which case it is the node number of the parent

	alpha: ARRAY [INTEGER]
			-- A value that depends on the node kind
			-- For text nodes, it is the offset into the text buffer
			-- For comments and processing instructions, it is the
			--  offset into the comment buffer
			-- For elements, it is the index of the first attribute node, or -1
			--  if this element has no attributes.

	beta: ARRAY [INTEGER]
			-- A value that depends on the node kind
			-- For text nodes, it is the length of the text
			-- For comments and processing instructions, it is
			-- the length of the text
			-- For elements, it is the index of the first namespace node,
			-- or -1 if this element has no namespaces

	name_codes: ARRAY [INTEGER]
			-- Name of the node, as an index into the name pool;
			-- -1 indicates there is no name

	prior: ARRAY [INTEGER]
			-- Index of preceding-siblings
			-- Constructed only when required

			-- The following arrays contain one entry for each attribute

	attribute_parents: DS_ARRAYED_LIST [INTEGER]
			-- Index of the parent element node

	attribute_codes: DS_ARRAYED_LIST [INTEGER]
			-- Name of the node, as an index into the name pool

	attribute_values: DS_ARRAYED_LIST [STRING]
			-- Value of attribute

	attribute_type_codes: ARRAY [INTEGER]
			-- Type annotations
			-- Only created if at least one attribute actually has a type

			-- The following arrays contain one entry for each namespace declaration

	number_of_namespaces: INTEGER

	namespace_parents: DS_ARRAYED_LIST [INTEGER]
			-- Index of the parent element node
		
	namespace_codes: DS_ARRAYED_LIST [INTEGER]
			-- Name of the node, as an index into the name pool
			--  the top half is the prefix code, the bottom half the URI code

	system_id_map: XM_XPATH_SYSTEM_ID_MAP
			-- Maps element sequence numbers to system-ids
			
invariant

	node_kinds_not_void: node_kinds /= Void
	depth_not_void: depth /= Void
	next_sibling_not_void: next_sibling_indices /= Void
	alpha_not_void: alpha /= Void
	beta_not_void: beta /= Void
	name_codes_not_void: name_codes /= Void
	attribute_parents_not_void: attribute_parents /= Void
	attribute_codes_not_void: attribute_codes /= Void
	attribute_values_not_void: attribute_values /= Void
	namespace_parents_not_void: namespace_parents /= Void
	namespace_codes_not_void: namespace_codes /= Void
	positive_node_count: number_of_nodes >= 0
	positive_attribute_count: number_of_attributes >= 0 and number_of_attributes = attribute_values.count
	positive_namespace_count: number_of_namespaces >= 0

end
