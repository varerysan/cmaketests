# cmaketests
Tests with various settings of CMake.
Some test using ideas from "Modern CMake for modular design" by Mathieu Ropert

ToDo
1. Install GTest for Windows
1. Test creating dll for Windows
1. Test static and dynamic libraries
1. Add Param to turn off creating tests.

# How to build
Build for Debug x86:
cmake ../core -G "Visual Studio 15 2017" -DDEBUG=1
cmake --build . --config Debug

Build for Release x86:
cmake ../core -G "Visual Studio 15 2017" -DRELEASE=1
cmake --build . --config Release

Build for Debug x64:
cmake ../core -G "Visual Studio 15 2017 Win64" -DDEBUG=1
cmake --build . --config Debug

Build for Release x64:
cmake ../core -G "Visual Studio 15 2017 Win64" -DRELEASE=1
cmake --build . --config Release


=========================
# Some markdown tests
*Italic*
[link to Yandex](https://yandex.ru)

**Bold text**
1. Item1
    1. Subitem 1
    1. Subitem 2
1. Item2
    1. Test
    1. Test y2

