# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2023.2.2\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2023.2.2\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\MyFiles\MyProjects\Regex-To-DFA\Regex-To-DFA

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\MyFiles\MyProjects\Regex-To-DFA\Regex-To-DFA\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Regex_To_DFA.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Regex_To_DFA.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Regex_To_DFA.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Regex_To_DFA.dir/flags.make

CMakeFiles/Regex_To_DFA.dir/build.cpp.obj: CMakeFiles/Regex_To_DFA.dir/flags.make
CMakeFiles/Regex_To_DFA.dir/build.cpp.obj: C:/MyFiles/MyProjects/Regex-To-DFA/Regex-To-DFA/build.cpp
CMakeFiles/Regex_To_DFA.dir/build.cpp.obj: CMakeFiles/Regex_To_DFA.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\MyFiles\MyProjects\Regex-To-DFA\Regex-To-DFA\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Regex_To_DFA.dir/build.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Regex_To_DFA.dir/build.cpp.obj -MF CMakeFiles\Regex_To_DFA.dir\build.cpp.obj.d -o CMakeFiles\Regex_To_DFA.dir\build.cpp.obj -c C:\MyFiles\MyProjects\Regex-To-DFA\Regex-To-DFA\build.cpp

CMakeFiles/Regex_To_DFA.dir/build.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Regex_To_DFA.dir/build.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\MyFiles\MyProjects\Regex-To-DFA\Regex-To-DFA\build.cpp > CMakeFiles\Regex_To_DFA.dir\build.cpp.i

CMakeFiles/Regex_To_DFA.dir/build.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Regex_To_DFA.dir/build.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\MyFiles\MyProjects\Regex-To-DFA\Regex-To-DFA\build.cpp -o CMakeFiles\Regex_To_DFA.dir\build.cpp.s

# Object files for target Regex_To_DFA
Regex_To_DFA_OBJECTS = \
"CMakeFiles/Regex_To_DFA.dir/build.cpp.obj"

# External object files for target Regex_To_DFA
Regex_To_DFA_EXTERNAL_OBJECTS =

Regex_To_DFA.exe: CMakeFiles/Regex_To_DFA.dir/build.cpp.obj
Regex_To_DFA.exe: CMakeFiles/Regex_To_DFA.dir/build.make
Regex_To_DFA.exe: CMakeFiles/Regex_To_DFA.dir/linkLibs.rsp
Regex_To_DFA.exe: CMakeFiles/Regex_To_DFA.dir/objects1.rsp
Regex_To_DFA.exe: CMakeFiles/Regex_To_DFA.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\MyFiles\MyProjects\Regex-To-DFA\Regex-To-DFA\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Regex_To_DFA.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Regex_To_DFA.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Regex_To_DFA.dir/build: Regex_To_DFA.exe
.PHONY : CMakeFiles/Regex_To_DFA.dir/build

CMakeFiles/Regex_To_DFA.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Regex_To_DFA.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Regex_To_DFA.dir/clean

CMakeFiles/Regex_To_DFA.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\MyFiles\MyProjects\Regex-To-DFA\Regex-To-DFA C:\MyFiles\MyProjects\Regex-To-DFA\Regex-To-DFA C:\MyFiles\MyProjects\Regex-To-DFA\Regex-To-DFA\cmake-build-debug C:\MyFiles\MyProjects\Regex-To-DFA\Regex-To-DFA\cmake-build-debug C:\MyFiles\MyProjects\Regex-To-DFA\Regex-To-DFA\cmake-build-debug\CMakeFiles\Regex_To_DFA.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Regex_To_DFA.dir/depend
