# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\stackLinklist

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\stackLinklist\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/stackLinklist.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/stackLinklist.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/stackLinklist.dir/flags.make

CMakeFiles/stackLinklist.dir/main.cpp.obj: CMakeFiles/stackLinklist.dir/flags.make
CMakeFiles/stackLinklist.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\stackLinklist\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/stackLinklist.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\stackLinklist.dir\main.cpp.obj -c D:\stackLinklist\main.cpp

CMakeFiles/stackLinklist.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stackLinklist.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\stackLinklist\main.cpp > CMakeFiles\stackLinklist.dir\main.cpp.i

CMakeFiles/stackLinklist.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stackLinklist.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\stackLinklist\main.cpp -o CMakeFiles\stackLinklist.dir\main.cpp.s

# Object files for target stackLinklist
stackLinklist_OBJECTS = \
"CMakeFiles/stackLinklist.dir/main.cpp.obj"

# External object files for target stackLinklist
stackLinklist_EXTERNAL_OBJECTS =

stackLinklist.exe: CMakeFiles/stackLinklist.dir/main.cpp.obj
stackLinklist.exe: CMakeFiles/stackLinklist.dir/build.make
stackLinklist.exe: CMakeFiles/stackLinklist.dir/linklibs.rsp
stackLinklist.exe: CMakeFiles/stackLinklist.dir/objects1.rsp
stackLinklist.exe: CMakeFiles/stackLinklist.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\stackLinklist\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable stackLinklist.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\stackLinklist.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/stackLinklist.dir/build: stackLinklist.exe

.PHONY : CMakeFiles/stackLinklist.dir/build

CMakeFiles/stackLinklist.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\stackLinklist.dir\cmake_clean.cmake
.PHONY : CMakeFiles/stackLinklist.dir/clean

CMakeFiles/stackLinklist.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\stackLinklist D:\stackLinklist D:\stackLinklist\cmake-build-debug D:\stackLinklist\cmake-build-debug D:\stackLinklist\cmake-build-debug\CMakeFiles\stackLinklist.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/stackLinklist.dir/depend
