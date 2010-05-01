note

	description:

		"Test features of class CONCAT2"

	copyright: "Copyright (c) 2001, Eric Bezault and others"
	license: "MIT License"
	date: "$Date$"
	revision: "$Revision$"

class TEST_CONCAT2

inherit

	TS_TEST_CASE

create

	make_default

feature -- Test

	test_concat is
			-- Test feature `concat'.
		local
			c: CONCAT2
		do
			create c.make
			assert_equal ("toto", "toto", c.concat ("to", "to"))
			assert_equal ("foobar", "foobar", c.concat ("foo", "bar"))
		end

end
