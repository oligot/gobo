indexing

	description:

		"Absolute temporal notion"

	library: "Gobo Eiffel Time Library"
	copyright: "Copyright (c) 2000, Eric Bezault and others"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date$"
	revision: "$Revision$"

deferred class DT_ABSOLUTE_TIME

inherit

	ANY -- Needed for SE 2.1b1.

	COMPARABLE
		undefine
			is_equal
		end

	HASHABLE

feature -- Access

	infix "-" (other: like Current): like duration is
			-- Duration between `other' and `Current'
		require
			other_not_void: other /= Void
		do
			Result := duration (other)
		ensure
			duration_not_void: Result /= Void
			definition: (other + Result).is_equal (Current)
		end

	infix "+" (a_duration: like duration): like Current is
			-- Addition of `a_duration' to `Current'
			-- (Create a new object at each call.)
		require
			a_duration_not_void: a_duration /= Void
		do
			Result := clone (Current)
			Result.add_duration (a_duration)
		ensure
			addition_not_void: Result /= Void
		end

	duration (other: like Current): DT_DURATION is
			-- Duration between `other' and `Current'
		require
			other_not_void: other /= Void
		deferred
		ensure
			duration_not_void: Result /= Void
			definition: (other + Result).is_equal (Current)
		end

feature -- Element change

	add_duration (a_duration: like duration) is
			-- Add `a_duration' to `Current'.
		require
			a_duration_not_void: a_duration /= Void
		deferred
		end

end
