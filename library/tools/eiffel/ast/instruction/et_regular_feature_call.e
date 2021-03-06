note

	description:

		"Eiffel regular feature calls"

	library: "Gobo Eiffel Tools Library"
	copyright: "Copyright (c) 1999-2014, Eric Bezault and others"
	license: "MIT License"
	date: "$Date$"
	revision: "$Revision$"

deferred class ET_REGULAR_FEATURE_CALL

inherit

	ET_FEATURE_CALL
		redefine
			parenthesis_call
		end

	ET_QUALIFIED_CALL
		rename
			make as make_qualified_call
		undefine
			process, arguments_count
		redefine
			reset, position, first_leaf
		end

feature {NONE} -- Initialization

	make (a_target: like target; a_name: like qualified_name; args: like arguments)
			-- Create a new feature call.
		require
			a_name_not_void: a_name /= Void
		do
			target := a_target
			make_qualified_call (a_name, args)
		ensure
			target_set: target = a_target
			name_set: qualified_name = a_name
			arguments_set: arguments = args
		end

feature -- Initialization

	reset
			-- Reset call as it was when it was last parsed.
		do
			Precursor
			parenthesis_call := Void
			if target /= Void then
				target.reset
			end
		end

feature -- Access

	target: ET_EXPRESSION
			-- Target

	parenthesis_call: detachable like Current
			-- <Precursor>

	position: ET_POSITION
			-- Position of first character of
			-- current node in source code
		do
			if target /= Void then
				Result := target.position
			else
				Result := qualified_name.position
			end
		end

	first_leaf: ET_AST_LEAF
			-- First leaf node in current node
		do
			if target /= Void then
				Result := target.first_leaf
			else
				Result := qualified_name.first_leaf
			end
		end

feature -- Setting

	set_name (a_name: like name)
			-- Set `name' to `a_name'.
		require
			a_name_not_void: a_name /= Void
		do
			qualified_name := a_name
		ensure
			name_set: name = a_name
		end

	set_target (a_target: like target)
			-- Set `target' to `a_target'.
		do
			target := a_target
		ensure
			target_set: target = a_target
		end

	set_arguments (args: like arguments)
			-- Set `arguments' to `args'.
		do
			arguments := args
		ensure
			arguments_set: arguments = args
		end

	set_parenthesis_call (a_target: ET_EXPRESSION; a_name: ET_PARENTHESIS_SYMBOL; a_arguments: ET_ACTUAL_ARGUMENT_LIST)
			-- Set `parenthesis_call' with `a_target', `a_name' and `a_arguments'.
		require
			a_target_not_void: a_target /= Void
			a_name_not_void: a_name /= Void
			a_arguments_not_void: a_arguments /= Void
			a_arguments_not_empty: a_arguments.count > 0
		deferred
		ensure
			parenthesis_call_set: attached parenthesis_call as l_parenthesis_call
			target_set: l_parenthesis_call.target = a_target
			name_set: l_parenthesis_call.name = a_name
			arguments_set: l_parenthesis_call.arguments = a_arguments
		end

end
