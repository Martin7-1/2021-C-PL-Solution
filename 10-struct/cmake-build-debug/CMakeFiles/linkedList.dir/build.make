# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = "D:\CLion 2021.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2021.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\C-PL\2021-C-PL-Solution\10-struct

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\C-PL\2021-C-PL-Solution\10-struct\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/linkedList.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/linkedList.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/linkedList.dir/flags.make

CMakeFiles/linkedList.dir/linkedList.c.obj: CMakeFiles/linkedList.dir/flags.make
CMakeFiles/linkedList.dir/linkedList.c.obj: ../linkedList.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\C-PL\2021-C-PL-Solution\10-struct\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/linkedList.dir/linkedList.c.obj"
	C:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\linkedList.dir\linkedList.c.obj -c D:\C-PL\2021-C-PL-Solution\10-struct\linkedList.c

CMakeFiles/linkedList.dir/linkedList.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/linkedList.dir/linkedList.c.i"
	C:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\C-PL\2021-C-PL-Solution\10-struct\linkedList.c > CMakeFiles\linkedList.dir\linkedList.c.i

CMakeFiles/linkedList.dir/linkedList.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/linkedList.dir/linkedList.c.s"
	C:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\C-PL\2021-C-PL-Solution\10-struct\linkedList.c -o CMakeFiles\linkedList.dir\linkedList.c.s

# Object files for target linkedList
linkedList_OBJECTS = \
"CMakeFiles/linkedList.dir/linkedList.c.obj"

# External object files for target linkedList
linkedList_EXTERNAL_OBJECTS =

linkedList.exe: CMakeFiles/linkedList.dir/linkedList.c.obj
linkedList.exe: CMakeFiles/linkedList.dir/build.make
linkedList.exe: CMakeFiles/linkedList.dir/linklibs.rsp
linkedList.exe: CMakeFiles/linkedList.dir/objects1.rsp
linkedList.exe: CMakeFiles/linkedList.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\C-PL\2021-C-PL-Solution\10-struct\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable linkedList.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\linkedList.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/linkedList.dir/build: linkedList.exe
.PHONY : CMakeFiles/linkedList.dir/build

CMakeFiles/linkedList.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\linkedList.dir\cmake_clean.cmake
.PHONY : CMakeFiles/linkedList.dir/clean

CMakeFiles/linkedList.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\C-PL\2021-C-PL-Solution\10-struct D:\C-PL\2021-C-PL-Solution\10-struct D:\C-PL\2021-C-PL-Solution\10-struct\cmake-build-debug D:\C-PL\2021-C-PL-Solution\10-struct\cmake-build-debug D:\C-PL\2021-C-PL-Solution\10-struct\cmake-build-debug\CMakeFiles\linkedList.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/linkedList.dir/depend
