-- system:     "Gobo Eiffel Time Library Tester"
-- compiler:   "ISE Eiffel"
-- author:     "Eric Bezault <ericb@gobosoft.com>"
-- copyright:  "Copyright (c) 2000, Eric Bezault and others"
-- license:    "Eiffel Forum Freeware License v1 (see forum.txt)"
-- date:       "$Date$"
-- revision:   "$Revision$"

system

	xtime

root

	XTIME: "make"

default

	console_application (yes);
	--debug (yes);
#ifdef ASSERTION
	assertion (all);
#else
	--assertion (all);
#endif
	--precompiled ("$EIFFEL4/precomp/spec/$PLATFORM/base")

cluster

	dt_testgen:			"TESTGEN";
	dt_tester:			"$GOBO/test/time";

#include "${GOBO}/library/time/ise.ace"

#include "${GOBO}/library/test/ise-skl.ace"

#include "${GOBO}/library/kernel/ise.ace"

#include "${GOBO}/library/structure/ise.ace"

#include "${GOBO}/library/utility/ise.ace"

		-- EiffelBase
	all base:			"$EIFFEL4/library/base"
		exclude
			"desc"; "table_eiffel3"
		end

end
