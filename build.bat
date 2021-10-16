echo off

rem copy all dlls to the build folder
rem xcopy /y /f "thirdparty\bin\*" "build\"
rem link and compile the engine itself
g++ -std=c++17 source\main.cpp -o build\x64\release\main.exe 

exit/b 0