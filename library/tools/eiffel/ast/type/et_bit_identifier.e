indexing

	description:

		"Eiffel 'BIT identifier' types"

	library: "Gobo Eiffel Tools Library"
	copyright: "Copyright (c) 2001-2002, Eric Bezault and others"
	license: "Eiffel Forum License v1 (see forum.txt)"
	date: "$Date$"
	revision: "$Revision$"

class ET_BIT_IDENTIFIER

inherit

	ET_TYPE
		redefine
			resolved_identifier_types
		end

creation

	make

feature {NONE} -- Initialization

	make (a_bit: like bit_keyword; a_name: like name) is
			-- Create a new 'BIT identifier' type.
		require
			a_bit_not_void: a_bit /= Void
			a_name_not_void: a_name /= Void
		do
			bit_keyword := a_bit
			name := a_name
		ensure
			bit_keyword_set: bit_keyword = a_bit
			name_set: name = a_name
		end

feature -- Access

	bit_keyword: ET_TOKEN
			-- 'BIT' keyword

	name: ET_IDENTIFIER
			-- Name of the feature associated with
			-- current type and which is supposed
			-- to be an integer constant attribute

	position: ET_POSITION is
			-- Position of first character of
			-- current node in source code
		do
			Result := bit_keyword.position
		end

	break: ET_BREAK is
			-- Break which appears just after current node
		do
			Result := name.break
		end

feature -- Status report

	same_syntactical_type (other: ET_TYPE): BOOLEAN is
			-- Are current type and `other' syntactically
			-- the same type (e.g. do not try to resolve
			-- anchored types)?
		do
			-- Result := False
		end

feature -- Validity

	check_parent_validity (an_heir: ET_CLASS): BOOLEAN is
			-- Check whether current type is valid when
			-- it appears in parent clause of `an_heir'.
			-- Report errors if not valid.
		do
			Result := False
			an_heir.error_handler.report_vhpr3_bit_name_error (an_heir, Current)
		end

	check_constraint_validity (a_formal: ET_FORMAL_GENERIC_PARAMETER; a_class: ET_CLASS;
		a_sorter: DS_TOPOLOGICAL_SORTER [ET_FORMAL_GENERIC_PARAMETER]): BOOLEAN is
			-- Check whether current type is valid when it
			-- appears in a constraint of the formal generic
			-- parameter `a_formal' in class `a_class'.
			-- `a_sorter' is used to find possible cycle in
			-- formal generic parameter declaration.
			-- Report errors if not valid.
		do
			Result := False
			a_class.error_handler.report_vcfg3_bit_name_error (a_class, Current)
		end

feature -- Type processing

	resolved_identifier_types (a_feature: ET_FEATURE; args: ET_FORMAL_ARGUMENTS; a_class: ET_CLASS): ET_TYPE is
			-- Replace any 'like identifier' types that appear in the
			-- implementation of `a_feature in class `a_class' by
			-- the corresponding 'like feature' or 'like argument'.
			-- Also resolve 'BIT identifier' types. Set
			-- `a_class.has_flatten_error' to true if an error occurs.
			-- (Warning: this is a side-effect function.)
		local
			features: DS_HASH_TABLE [ET_FEATURE, ET_FEATURE_NAME]
			other_feature: ET_FEATURE
			a_constant_attribute: ET_CONSTANT_ATTRIBUTE
			a_constant: ET_INTEGER_CONSTANT
		do
			features := a_class.named_features
			features.search (name)
			if features.found then
				other_feature := features.found_item
				a_constant_attribute ?= other_feature
				if a_constant_attribute /= Void then
					a_constant ?= a_constant_attribute.constant
				end
				if a_constant /= Void then
					!ET_BIT_FEATURE! Result.make (bit_keyword, a_constant, name, other_feature.first_seed)
				else
-- TODO: not an integer constant.
					Result := Current
				end
			else
-- TODO:
print (a_class.name.name)
print (".")
print (a_feature.name.name)
print (": unknown identifier in 'BIT ")
print (name.name)
print ("'%N")
				Result := Current
			end
		end

feature -- Conversion

	base_type (a_feature: ET_FEATURE; a_type: ET_CLASS_TYPE): ET_TYPE is
			-- Type, in the context of `a_feature' in `a_type',
			-- only made up of class names and generic formal parameters
			-- when `a_type' in a generic type not fully derived
			-- (Definition of base type in ETL2 p. 198)
		do
-- TODO:
-- Error already reported by `resolved_identifier_types'.
print (a_type.base_class.name.name)
print (": unknown identifier in 'BIT ")
print (name.name)
print ("'%N")
			Result := Current
		end

feature -- Duplication

	deep_cloned_type: like Current is
			-- Recursively cloned type
		do
			Result := Current
		end

feature -- Output

	append_to_string (a_string: STRING) is
			-- Append textual representation of
			-- current type to `a_string'.
		do
			a_string.append_string (bit_space)
			a_string.append_string (name.name)
		end

feature {NONE} -- Constants

	bit_space: STRING is "BIT "
			-- Eiffel keywords

invariant

	bit_keyword_not_void: bit_keyword /= Void
	name_not_void: name /= Void

end -- class ET_BIT_IDENTIFIER
