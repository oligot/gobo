[Cluster]
Name=Gobo
Category=Data structures
Sources=Gobo.Sources
Bindings=Gobo.Bindings

[Gobo.Sources]
Gobo.Sources.kernel=
Gobo.Sources.kernel.VE=
Gobo.Sources.lexical=
Gobo.Sources.parse=
Gobo.Sources.structure=
Gobo.Sources.test=
Gobo.Sources.time=
Gobo.Sources.tools=
Gobo.Sources.utility.command=
Gobo.Sources.utility.error=
Gobo.Sources.utility.formatter=
Gobo.Sources.utility.support=
Gobo.Sources.utility.VE=

[Gobo.Sources.kernel]
Mask=kernel/*.e

[Gobo.Sources.kernel.VE]
Mask=kernel/spec/ve/*.e

[Gobo.Sources.lexical]
Mask=lexical/*.e
Recursive=True

[Gobo.Sources.parse]
Mask=parse/*.e
Recursive=True

[Gobo.Sources.structure]
Mask=structure/*.e
Recursive=True

[Gobo.Sources.test]
Mask=test/*.e
Recursive=True

[Gobo.Sources.time]
Mask=time/*.e
Recursive=True

[Gobo.Sources.tools]
Mask=tools/*.e
Recursive=True

[Gobo.Sources.utility.command]
Mask=utility/command/*.e
Recursive=True

[Gobo.Sources.utility.error]
Mask=utility/error/*.e
Recursive=True

[Gobo.Sources.utility.formatter]
Mask=utility/formatter/*.e
Recursive=True

[Gobo.Sources.utility.support]
Mask=utility/support/*.e
Recursive=True

[Gobo.Sources.utility.VE]
Mask=utility/spec/ve/*.e



[Gobo.Bindings]
Clusters=Gobo.Clusters

[Gobo.Clusters]
VE.Kernel=
VE.Pool=
VE.gArgs=
VE.WinLib=

[VE.Kernel]
Name=Kernel
Path=$VE_Lib/Kernel

[VE.Pool]
Name=Pool
Path=$VE_LIB/Misc/Pool

[VE.gArgs]
Name=gArgs
Path=$VE_LIB/Tools/gArgs

[VE.WinLib]
Name=WinLib
Path=$VE_LIB/WinLibs/WinLib

