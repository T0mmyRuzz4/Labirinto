# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.31

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\cmake-3.31.2-windows-x86_64\bin\cmake.exe

# The command to remove a file.
RM = C:\cmake-3.31.2-windows-x86_64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\tomma\OneDrive - Università degli Studi di Padova\Documenti\GitHub\Labirinto"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\tomma\OneDrive - Università degli Studi di Padova\Documenti\GitHub\Labirinto\build"

# Include any dependencies generated for this target.
include CMakeFiles/RandomRobot.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/RandomRobot.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/RandomRobot.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/RandomRobot.dir/flags.make

CMakeFiles/RandomRobot.dir/codegen:
.PHONY : CMakeFiles/RandomRobot.dir/codegen

CMakeFiles/RandomRobot.dir/src/RandomRobot.cpp.obj: CMakeFiles/RandomRobot.dir/flags.make
CMakeFiles/RandomRobot.dir/src/RandomRobot.cpp.obj: CMakeFiles/RandomRobot.dir/includes_CXX.rsp
CMakeFiles/RandomRobot.dir/src/RandomRobot.cpp.obj: C:/Users/tomma/OneDrive\ -\ Università\ degli\ Studi\ di\ Padova/Documenti/GitHub/Labirinto/src/RandomRobot.cpp
CMakeFiles/RandomRobot.dir/src/RandomRobot.cpp.obj: CMakeFiles/RandomRobot.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\tomma\OneDrive - Università degli Studi di Padova\Documenti\GitHub\Labirinto\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/RandomRobot.dir/src/RandomRobot.cpp.obj"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/RandomRobot.dir/src/RandomRobot.cpp.obj -MF CMakeFiles\RandomRobot.dir\src\RandomRobot.cpp.obj.d -o CMakeFiles\RandomRobot.dir\src\RandomRobot.cpp.obj -c "C:\Users\tomma\OneDrive - Università degli Studi di Padova\Documenti\GitHub\Labirinto\src\RandomRobot.cpp"

CMakeFiles/RandomRobot.dir/src/RandomRobot.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/RandomRobot.dir/src/RandomRobot.cpp.i"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\tomma\OneDrive - Università degli Studi di Padova\Documenti\GitHub\Labirinto\src\RandomRobot.cpp" > CMakeFiles\RandomRobot.dir\src\RandomRobot.cpp.i

CMakeFiles/RandomRobot.dir/src/RandomRobot.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/RandomRobot.dir/src/RandomRobot.cpp.s"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\tomma\OneDrive - Università degli Studi di Padova\Documenti\GitHub\Labirinto\src\RandomRobot.cpp" -o CMakeFiles\RandomRobot.dir\src\RandomRobot.cpp.s

# Object files for target RandomRobot
RandomRobot_OBJECTS = \
"CMakeFiles/RandomRobot.dir/src/RandomRobot.cpp.obj"

# External object files for target RandomRobot
RandomRobot_EXTERNAL_OBJECTS =

libRandomRobot.a: CMakeFiles/RandomRobot.dir/src/RandomRobot.cpp.obj
libRandomRobot.a: CMakeFiles/RandomRobot.dir/build.make
libRandomRobot.a: CMakeFiles/RandomRobot.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="C:\Users\tomma\OneDrive - Università degli Studi di Padova\Documenti\GitHub\Labirinto\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libRandomRobot.a"
	$(CMAKE_COMMAND) -P CMakeFiles\RandomRobot.dir\cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\RandomRobot.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/RandomRobot.dir/build: libRandomRobot.a
.PHONY : CMakeFiles/RandomRobot.dir/build

CMakeFiles/RandomRobot.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\RandomRobot.dir\cmake_clean.cmake
.PHONY : CMakeFiles/RandomRobot.dir/clean

CMakeFiles/RandomRobot.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\tomma\OneDrive - Università degli Studi di Padova\Documenti\GitHub\Labirinto" "C:\Users\tomma\OneDrive - Università degli Studi di Padova\Documenti\GitHub\Labirinto" "C:\Users\tomma\OneDrive - Università degli Studi di Padova\Documenti\GitHub\Labirinto\build" "C:\Users\tomma\OneDrive - Università degli Studi di Padova\Documenti\GitHub\Labirinto\build" "C:\Users\tomma\OneDrive - Università degli Studi di Padova\Documenti\GitHub\Labirinto\build\CMakeFiles\RandomRobot.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/RandomRobot.dir/depend

