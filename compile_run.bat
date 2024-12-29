@echo off
:: Check if a file name is provided
if "%1"=="" (
    echo Usage: compile_and_run.bat filename.c
    exit /b 1
)

:: Extract the file name without extension
set "filename=%~n1"

:: Compile the C file
gcc "%1" -o "%filename%"
if errorlevel 1 (
    echo Compilation failed!
    exit /b 1
)

:: Run the compiled program
echo Compilation successful. Running the program...
echo ---------------------------------
"%filename%"
echo ---------------------------------

:: Pause to display output
pause