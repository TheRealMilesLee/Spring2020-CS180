# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = "/Users/leemiles/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/193.6911.21/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/leemiles/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/193.6911.21/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/leemiles/Spring2020-CS180/Lab12-Arrays

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/leemiles/Spring2020-CS180/Lab12-Arrays/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Lab12_Arrays.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Lab12_Arrays.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Lab12_Arrays.dir/flags.make

CMakeFiles/Lab12_Arrays.dir/Parallel_Array.cpp.o: CMakeFiles/Lab12_Arrays.dir/flags.make
CMakeFiles/Lab12_Arrays.dir/Parallel_Array.cpp.o: ../Parallel_Array.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/leemiles/Spring2020-CS180/Lab12-Arrays/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Lab12_Arrays.dir/Parallel_Array.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Lab12_Arrays.dir/Parallel_Array.cpp.o -c /Users/leemiles/Spring2020-CS180/Lab12-Arrays/Parallel_Array.cpp

CMakeFiles/Lab12_Arrays.dir/Parallel_Array.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lab12_Arrays.dir/Parallel_Array.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/leemiles/Spring2020-CS180/Lab12-Arrays/Parallel_Array.cpp > CMakeFiles/Lab12_Arrays.dir/Parallel_Array.cpp.i

CMakeFiles/Lab12_Arrays.dir/Parallel_Array.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lab12_Arrays.dir/Parallel_Array.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/leemiles/Spring2020-CS180/Lab12-Arrays/Parallel_Array.cpp -o CMakeFiles/Lab12_Arrays.dir/Parallel_Array.cpp.s

# Object files for target Lab12_Arrays
Lab12_Arrays_OBJECTS = \
"CMakeFiles/Lab12_Arrays.dir/Parallel_Array.cpp.o"

# External object files for target Lab12_Arrays
Lab12_Arrays_EXTERNAL_OBJECTS =

Lab12_Arrays: CMakeFiles/Lab12_Arrays.dir/Parallel_Array.cpp.o
Lab12_Arrays: CMakeFiles/Lab12_Arrays.dir/build.make
Lab12_Arrays: CMakeFiles/Lab12_Arrays.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/leemiles/Spring2020-CS180/Lab12-Arrays/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Lab12_Arrays"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Lab12_Arrays.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Lab12_Arrays.dir/build: Lab12_Arrays

.PHONY : CMakeFiles/Lab12_Arrays.dir/build

CMakeFiles/Lab12_Arrays.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Lab12_Arrays.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Lab12_Arrays.dir/clean

CMakeFiles/Lab12_Arrays.dir/depend:
	cd /Users/leemiles/Spring2020-CS180/Lab12-Arrays/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/leemiles/Spring2020-CS180/Lab12-Arrays /Users/leemiles/Spring2020-CS180/Lab12-Arrays /Users/leemiles/Spring2020-CS180/Lab12-Arrays/cmake-build-debug /Users/leemiles/Spring2020-CS180/Lab12-Arrays/cmake-build-debug /Users/leemiles/Spring2020-CS180/Lab12-Arrays/cmake-build-debug/CMakeFiles/Lab12_Arrays.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Lab12_Arrays.dir/depend

