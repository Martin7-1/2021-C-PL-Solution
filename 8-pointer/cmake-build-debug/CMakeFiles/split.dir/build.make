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
CMAKE_SOURCE_DIR = D:\C-PL\2021-C-PL-Solution\8-pointer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\C-PL\2021-C-PL-Solution\8-pointer\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/split.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/split.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/split.dir/flags.make

CMakeFiles/split.dir/split.c.obj: CMakeFiles/split.dir/flags.make
CMakeFiles/split.dir/split.c.obj: ../split.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\C-PL\2021-C-PL-Solution\8-pointer\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/split.dir/split.c.obj"
	C:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\split.dir\split.c.obj -c D:\C-PL\2021-C-PL-Solution\8-pointer\split.c

CMakeFiles/split.dir/split.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/split.dir/split.c.i"
	C:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\C-PL\2021-C-PL-Solution\8-pointer\split.c > CMakeFiles\split.dir\split.c.i

CMakeFiles/split.dir/split.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/split.dir/split.c.s"
	C:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\C-PL\2021-C-PL-Solution\8-pointer\split.c -o CMakeFiles\split.dir\split.c.s

# Object files for target split
split_OBJECTS = \
"CMakeFiles/split.dir/split.c.obj"

# External object files for target split
split_EXTERNAL_OBJECTS =

split.exe: CMakeFiles/split.dir/split.c.obj
split.exe: CMakeFiles/split.dir/build.make
split.exe: CMakeFiles/split.dir/linklibs.rsp
split.exe: CMakeFiles/split.dir/objects1.rsp
split.exe: CMakeFiles/split.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\C-PL\2021-C-PL-Solution\8-pointer\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable split.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\split.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/split.dir/build: split.exe
.PHONY : CMakeFiles/split.dir/build

CMakeFiles/split.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\split.dir\cmake_clean.cmake
.PHONY : CMakeFiles/split.dir/clean

CMakeFiles/split.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\C-PL\2021-C-PL-Solution\8-pointer D:\C-PL\2021-C-PL-Solution\8-pointer D:\C-PL\2021-C-PL-Solution\8-pointer\cmake-build-debug D:\C-PL\2021-C-PL-Solution\8-pointer\cmake-build-debug D:\C-PL\2021-C-PL-Solution\8-pointer\cmake-build-debug\CMakeFiles\split.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/split.dir/depend

