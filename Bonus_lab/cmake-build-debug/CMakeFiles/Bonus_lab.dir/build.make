# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\grand\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\201.7846.88\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\grand\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\201.7846.88\bin\cmake\win\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\CS Related\Spring2020-CS180\Bonus_lab"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\CS Related\Spring2020-CS180\Bonus_lab\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Bonus_lab.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Bonus_lab.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Bonus_lab.dir/flags.make

CMakeFiles/Bonus_lab.dir/Bouns_2.cpp.obj: CMakeFiles/Bonus_lab.dir/flags.make
CMakeFiles/Bonus_lab.dir/Bouns_2.cpp.obj: ../Bouns_2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\CS Related\Spring2020-CS180\Bonus_lab\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Bonus_lab.dir/Bouns_2.cpp.obj"
	C:\PROGRA~1\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Bonus_lab.dir\Bouns_2.cpp.obj -c "D:\CS Related\Spring2020-CS180\Bonus_lab\Bouns_2.cpp"

CMakeFiles/Bonus_lab.dir/Bouns_2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Bonus_lab.dir/Bouns_2.cpp.i"
	C:\PROGRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\CS Related\Spring2020-CS180\Bonus_lab\Bouns_2.cpp" > CMakeFiles\Bonus_lab.dir\Bouns_2.cpp.i

CMakeFiles/Bonus_lab.dir/Bouns_2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Bonus_lab.dir/Bouns_2.cpp.s"
	C:\PROGRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\CS Related\Spring2020-CS180\Bonus_lab\Bouns_2.cpp" -o CMakeFiles\Bonus_lab.dir\Bouns_2.cpp.s

# Object files for target Bonus_lab
Bonus_lab_OBJECTS = \
"CMakeFiles/Bonus_lab.dir/Bouns_2.cpp.obj"

# External object files for target Bonus_lab
Bonus_lab_EXTERNAL_OBJECTS =

Bonus_lab.exe: CMakeFiles/Bonus_lab.dir/Bouns_2.cpp.obj
Bonus_lab.exe: CMakeFiles/Bonus_lab.dir/build.make
Bonus_lab.exe: CMakeFiles/Bonus_lab.dir/linklibs.rsp
Bonus_lab.exe: CMakeFiles/Bonus_lab.dir/objects1.rsp
Bonus_lab.exe: CMakeFiles/Bonus_lab.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\CS Related\Spring2020-CS180\Bonus_lab\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Bonus_lab.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Bonus_lab.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Bonus_lab.dir/build: Bonus_lab.exe

.PHONY : CMakeFiles/Bonus_lab.dir/build

CMakeFiles/Bonus_lab.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Bonus_lab.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Bonus_lab.dir/clean

CMakeFiles/Bonus_lab.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\CS Related\Spring2020-CS180\Bonus_lab" "D:\CS Related\Spring2020-CS180\Bonus_lab" "D:\CS Related\Spring2020-CS180\Bonus_lab\cmake-build-debug" "D:\CS Related\Spring2020-CS180\Bonus_lab\cmake-build-debug" "D:\CS Related\Spring2020-CS180\Bonus_lab\cmake-build-debug\CMakeFiles\Bonus_lab.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Bonus_lab.dir/depend

