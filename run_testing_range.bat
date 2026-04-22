
@echo off

gcc testing.c -I .inc -o prog\prog.exe ^
.\.src\coloring.c ^
.\.src\file.c ^
.\.src\interface.c ^
.\.src\product.c ^
.\.src\report.c ^
.\.src\system.c ^
.\.src\time_handler.c ^
.\.src\transaction.c ^
.\.src\utils.c 

IF %ERRORLEVEL% NEQ 0 pause & exit /b

cd prog
prog.exe
cd ..

@echo on
