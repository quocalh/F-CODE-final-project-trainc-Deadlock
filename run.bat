@echo off

gcc main.c -I .inc -o prog\prog.exe ^
.\.src\coloring.c ^
.\.src\files.c ^
.\.src\hashmap.c ^
.\.src\interface.c ^
.\.src\product.c ^
.\.src\report.c ^
.\.src\system.c ^
.\.src\time.c ^
.\.src\utils.c

IF %ERRORLEVEL% NEQ 0 pause & exit /b

cd prog
prog.exe
cd ..

@echo on
