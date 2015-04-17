# cmake-win-store-app
CMake project of a Windows Store Application

Run the cmake-gui.exe application for Windows

Setup the paths:

Where is the source code: C:/git/cmake-win-store-app

Where to build the binaries: C:/git/build/cmake-win-store-app

Before configuring your project use "Add Entry" button to add the following parameters for Windows Store build

Add Cache Entry

Name: CMAKE_SYSTEM_NAME

Type: STRING

Value: WindowsStore

Name: CMAKE_SYSTEM_VERSION

Type: STRING

Value: 8.1

Press the "Configure" button and then the "Generate" button to generate the Visual Studio solution and project files.
