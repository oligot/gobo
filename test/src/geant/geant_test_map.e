indexing

	description:

		"Test features of class GEANT_MAP"

	author:     "Sven Ehrke (sven.ehrke@sven-ehrke.de)"
	copyright:  "Sven Ehrke and others"
	license:    "Eiffel Forum Freeware License v1 (see forum.txt)"
	date:       "$Date$"
	revision:   "$Revision$"

deferred class GEANT_TEST_MAP

inherit

	TS_TEST_CASE
		redefine
			tear_down, set_up
		end

feature -- Test

	test_set_type is
			-- Test feature `set_type'.
		do
			map.set_type (map.Type_attribute_value_identity)
			assert_equal ("set_type1", "identity", map.type)

			map.set_type (map.Type_attribute_value_glob)
			assert_equal ("set_type2", "glob", map.type) 
		end

	test_set_source_pattern is
			-- Test feature `set_source_pattern'.
		do
			map.set_source_pattern ("*.ge")
			assert_equal ("set_source_pattern1", "*.ge", map.source_pattern)

			map.set_source_pattern ("alkj*.ge")
			assert_equal ("set_source_pattern2", "alkj*.ge", map.source_pattern) 
		end

	test_set_target_pattern is
			-- Test feature `set_target_pattern'.
		do
			map.set_target_pattern ("*.e")
			assert_equal ("set_target_pattern1", "*.e", map.target_pattern)

			map.set_target_pattern ("alkj*.e")
			assert_equal ("set_target_pattern2", "alkj*.e", map.target_pattern) 
		end

	test_is_executable is
			-- Test feature `is_executable'.
		do
			assert ("is_executable1", map.is_executable)	-- default type is identity

			map.set_type (map.Type_attribute_value_glob)
			assert ("is_executable2", not map.is_executable)

			map.set_source_pattern ("*.ge")
			assert ("is_executable3", not map.is_executable)

			map.set_target_pattern ("*.e")
			assert ("is_executable3", map.is_executable)
		end

	test_mapped_filename is
			-- Test feature `mapped_filename'.
		local
			a_string: STRING
		do
--			map.project.set_debug_mode (True)
			map.set_type ("glob")
			map.set_source_pattern ("*.ge")
			map.set_target_pattern ("*.e")
			a_string := clone ("foobar")
			assert_equal ("mapped_filename1", "foobar", map.mapped_filename ("foobar")) 

			assert_equal ("mapped_filename2", "foobar.e", map.mapped_filename ("foobar.ge")) 
			assert_not_equal ("mapped_filename3", "foobar.e", map.mapped_filename ("foobar.get")) 
			assert_not_equal ("mapped_filename4", "foobar.e", map.mapped_filename ("foobar.t.ge")) 
			assert_equal ("mapped_filename4", "foobar.t.e", map.mapped_filename ("foobar.t.ge")) 

			assert_equal ("mapped_filename5", "ttt/foobar.e", map.mapped_filename ("ttt/foobar.ge")) 
			assert_equal ("mapped_filename6", "aaa/ttt/foobar.e", map.mapped_filename ("aaa/ttt/foobar.ge")) 
			assert_equal ("mapped_filename7", "aaa\ttt\foobar.e", map.mapped_filename ("aaa\ttt\foobar.ge")) 

			map.set_source_pattern ("bla/*.ge")
			map.set_target_pattern ("bla/*.e")
			assert_equal ("mapped_filename9", "bla/foobar.e", map.mapped_filename ("bla/foobar.ge")) 
		end

feature -- Execution

	set_up is
			-- Setup for a test.
		local
			a_project: GEANT_PROJECT
			a_variables: GEANT_VARIABLES
		do
			!! a_variables.make
			!! a_project.make (a_variables)
			!! map.make (a_project)
		end

	tear_down is
			-- Tear down after a test.
		do
			map := Void
		end

feature {NONE} -- Implementation

	map: GEANT_MAP
		-- Map under test

end -- class GEANT_TEST_MAP
