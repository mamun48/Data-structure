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
CMAKE_SOURCE_DIR = D:\LinkListOperation

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\LinkListOperation\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/LinkListOperation.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/LinkListOperation.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LinkListOperation.dir/flags.make

CMakeFiles/LinkListOperation.dir/main.cpp.obj: CMakeFiles/LinkListOperation.dir/flags.make
CMakeFiles/LinkListOperation.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\LinkListOperation\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/LinkListOperation.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\LinkListOperation.dir\main.cpp.obj -c D:\LinkListOperation\main.cpp

CMakeFiles/LinkListOperation.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LinkListOperation.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\LinkListOperation\main.cpp > CMakeFiles\LinkListOperation.dir\main.cpp.i

CMakeFiles/LinkListOperation.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LinkListOperation.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\LinkListOperation\main.cpp -o CMakeFiles\LinkListOperation.dir\main.cpp.s

# Object files for target LinkListOperation
LinkListOperation_OBJECTS = \
"CMakeFiles/LinkListOperation.dir/main.cpp.obj"

# External object files for target LinkListOperation
LinkListOperation_EXTERNAL_OBJECTS =

LinkListOperation.exe: CMakeFiles/LinkListOperation.dir/main.cpp.obj
LinkListOperation.exe: CMakeFiles/LinkListOperation.dir/build.make
LinkListOperation.exe: CMakeFiles/LinkListOperation.dir/linklibs.rsp
LinkListOperation.exe: CMakeFiles/LinkListOperation.dir/objects1.rsp
LinkListOperation.exe: CMakeFiles/LinkListOperation.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\LinkListOperation\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable LinkListOperation.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\LinkListOperation.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LinkListOperation.dir/build: LinkListOperation.exe

.PHONY : CMakeFiles/LinkListOperation.dir/build

CMakeFiles/LinkListOperation.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\LinkListOperation.dir\cmake_clean.cmake
.PHONY : CMakeFiles/LinkListOperation.dir/clean

CMakeFiles/LinkListOperation.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\LinkListOperation D:\LinkListOperation D:\LinkListOperation\cmake-build-debug D:\LinkListOperation\cmake-build-debug D:\LinkListOperation\cmake-build-debug\CMakeFiles\LinkListOperation.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/LinkListOperation.dir/depend

