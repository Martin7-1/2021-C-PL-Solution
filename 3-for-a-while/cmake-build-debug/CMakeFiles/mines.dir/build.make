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
CMAKE_SOURCE_DIR = D:\C-PL\2021-C-PL-Solution\3-for-a-while

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\C-PL\2021-C-PL-Solution\3-for-a-while\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/mines.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/mines.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mines.dir/flags.make

CMakeFiles/mines.dir/mines.c.obj: CMakeFiles/mines.dir/flags.make
CMakeFiles/mines.dir/mines.c.obj: ../mines.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\C-PL\2021-C-PL-Solution\3-for-a-while\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/mines.dir/mines.c.obj"
	C:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\mines.dir\mines.c.obj -c D:\C-PL\2021-C-PL-Solution\3-for-a-while\mines.c

CMakeFiles/mines.dir/mines.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/mines.dir/mines.c.i"
	C:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\C-PL\2021-C-PL-Solution\3-for-a-while\mines.c > CMakeFiles\mines.dir\mines.c.i

CMakeFiles/mines.dir/mines.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/mines.dir/mines.c.s"
	C:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\C-PL\2021-C-PL-Solution\3-for-a-while\mines.c -o CMakeFiles\mines.dir\mines.c.s

# Object files for target mines
mines_OBJECTS = \
"CMakeFiles/mines.dir/mines.c.obj"

# External object files for target mines
mines_EXTERNAL_OBJECTS =

mines.exe: CMakeFiles/mines.dir/mines.c.obj
mines.exe: CMakeFiles/mines.dir/build.make
mines.exe: CMakeFiles/mines.dir/linklibs.rsp
mines.exe: CMakeFiles/mines.dir/objects1.rsp
mines.exe: CMakeFiles/mines.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\C-PL\2021-C-PL-Solution\3-for-a-while\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable mines.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\mines.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mines.dir/build: mines.exe
.PHONY : CMakeFiles/mines.dir/build

CMakeFiles/mines.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\mines.dir\cmake_clean.cmake
.PHONY : CMakeFiles/mines.dir/clean

CMakeFiles/mines.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\C-PL\2021-C-PL-Solution\3-for-a-while D:\C-PL\2021-C-PL-Solution\3-for-a-while D:\C-PL\2021-C-PL-Solution\3-for-a-while\cmake-build-debug D:\C-PL\2021-C-PL-Solution\3-for-a-while\cmake-build-debug D:\C-PL\2021-C-PL-Solution\3-for-a-while\cmake-build-debug\CMakeFiles\mines.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/mines.dir/depend
