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
CMAKE_SOURCE_DIR = /Users/leemiles/Spring2020-CS180/Lab9-StudentGrades

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/leemiles/Spring2020-CS180/Lab9-StudentGrades/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Lab9_StudentGrades.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Lab9_StudentGrades.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Lab9_StudentGrades.dir/flags.make

CMakeFiles/Lab9_StudentGrades.dir/Grades.cpp.o: CMakeFiles/Lab9_StudentGrades.dir/flags.make
CMakeFiles/Lab9_StudentGrades.dir/Grades.cpp.o: ../Grades.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/leemiles/Spring2020-CS180/Lab9-StudentGrades/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Lab9_StudentGrades.dir/Grades.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Lab9_StudentGrades.dir/Grades.cpp.o -c /Users/leemiles/Spring2020-CS180/Lab9-StudentGrades/Grades.cpp

CMakeFiles/Lab9_StudentGrades.dir/Grades.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lab9_StudentGrades.dir/Grades.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/leemiles/Spring2020-CS180/Lab9-StudentGrades/Grades.cpp > CMakeFiles/Lab9_StudentGrades.dir/Grades.cpp.i

CMakeFiles/Lab9_StudentGrades.dir/Grades.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lab9_StudentGrades.dir/Grades.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/leemiles/Spring2020-CS180/Lab9-StudentGrades/Grades.cpp -o CMakeFiles/Lab9_StudentGrades.dir/Grades.cpp.s

# Object files for target Lab9_StudentGrades
Lab9_StudentGrades_OBJECTS = \
"CMakeFiles/Lab9_StudentGrades.dir/Grades.cpp.o"

# External object files for target Lab9_StudentGrades
Lab9_StudentGrades_EXTERNAL_OBJECTS =

Lab9_StudentGrades: CMakeFiles/Lab9_StudentGrades.dir/Grades.cpp.o
Lab9_StudentGrades: CMakeFiles/Lab9_StudentGrades.dir/build.make
Lab9_StudentGrades: CMakeFiles/Lab9_StudentGrades.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/leemiles/Spring2020-CS180/Lab9-StudentGrades/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Lab9_StudentGrades"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Lab9_StudentGrades.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Lab9_StudentGrades.dir/build: Lab9_StudentGrades

.PHONY : CMakeFiles/Lab9_StudentGrades.dir/build

CMakeFiles/Lab9_StudentGrades.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Lab9_StudentGrades.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Lab9_StudentGrades.dir/clean

CMakeFiles/Lab9_StudentGrades.dir/depend:
	cd /Users/leemiles/Spring2020-CS180/Lab9-StudentGrades/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/leemiles/Spring2020-CS180/Lab9-StudentGrades /Users/leemiles/Spring2020-CS180/Lab9-StudentGrades /Users/leemiles/Spring2020-CS180/Lab9-StudentGrades/cmake-build-debug /Users/leemiles/Spring2020-CS180/Lab9-StudentGrades/cmake-build-debug /Users/leemiles/Spring2020-CS180/Lab9-StudentGrades/cmake-build-debug/CMakeFiles/Lab9_StudentGrades.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Lab9_StudentGrades.dir/depend

