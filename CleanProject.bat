@echo off
:: Set the path to the Unreal Engine editor executable
SET "UE4EDITOR_PATH=D:\Epic Games\UE_5.3\Engine\Binaries\Win64\UnrealEditor.exe"
SET "UAT_PATH=D:\Epic Games\UE_5.3\Engine\Build\BatchFiles\RunUAT.bat"

:: Automatically set the project path to the current directory
SET "PROJECT_PATH=%cd%\MyProject.uproject"

:: Display a message indicating the start of the compilation process
echo Compiling Blueprints in Unreal Engine project located at "%PROJECT_PATH%"...

:: Run Unreal Engine Automation Tool (UAT) in command-line mode to resave and compile blueprints
call "%UAT_PATH%" BuildCookRun -project="%PROJECT_PATH%" -noP4 -clientconfig=Development -serverconfig=Development -clean

:: Wait for the user to press a key before closing
echo Compilation complete. Press any key to exit...
pause