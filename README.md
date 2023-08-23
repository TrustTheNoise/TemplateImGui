# TemplateImGui

## Base
This is a template for projects on ImGui, it includes everything you need to launch a window in the ImGui directory, configured main and in the src/lib directory is App.cpp to edit the ImGui window itself.
In src/lib you can add your additional files by adding them to src/lib/CMakeLists.txt.

The src/src/lib ImGui/ directories contain CMakeLists.txt . In src/ is the main CMakeLists.txt . in ImGui, it collects everything.cpp into one imgui library and provides this library src/CMakeLists.txt . In src/lib, it collects all user .cpp files into the MyApp library, which it provides src/CMakeLists.txt .
That is, you basically need to change in src / lib, adding new ones.cpp or me App.cpp . Also, when creating a new .cpp file in src/lib, you need to add to the MyApp library in src/lib/CMakeLists.txt .

## Build
The directory with the assembly is src/ the main one is located there CMakeLists.txt . Usually a build directory is created for the build.
With each build via cmake, write `cmake -G Ninja <path to src/>` in the folder where you want to build the project

## What you need
For a successful build, you need MinGW, opengl (although it is usually included in MinGW), and install glfw3 on linux.
