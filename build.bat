echo off

rem copy all dlls to the build folder
rem xcopy /y /f "thirdparty\bin\*" "build\"
rem link and compile the engine itself
g++ -std=c++17 -I source\include source\main.cpp -o build\x64\release\OpenFinancialPerson.exe 

exit /b 0