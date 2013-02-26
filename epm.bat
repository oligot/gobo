setlocal
set cwd=%cd%

cd %GOBO%\library\kernel
geant install
cd %GOBO%\library\lexical
geant install
cd %GOBO%\library\parse
geant install

cd %cwd%
