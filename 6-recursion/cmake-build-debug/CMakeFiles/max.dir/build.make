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
CMAKE_SOURCE_DIR = D:\C-PL\2021-C-PL-Solution\6-recursion

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\C-PL\2021-C-PL-Solution\6-recursion\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/max.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/max.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/max.dir/flags.make

CMakeFiles/max.dir/max.c.obj: CMakeFiles/max.dir/flags.make
CMakeFiles/max.dir/max.c.obj: ../max.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\C-PL\2021-C-PL-Solution\6-recursion\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/max.dir/max.c.obj"
	C:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\max.dir\max.c.obj -c D:\C-PL\2021-C-PL-Solution\6-recursion\max.c

CMakeFiles/max.dir/max.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/max.dir/max.c.i"
	C:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\C-PL\2021-C-PL-Solution\6-recursion\max.c > CMakeFiles\max.dir\max.c.i

CMakeFiles/max.dir/max.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/max.dir/max.c.s"
	C:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\C-PL\2021-C-PL-Solution\6-recursion\max.c -o CMakeFiles\max.dir\max.c.s

# Object files for target max
max_OBJECTS = \
"CMakeFiles/max.dir/max.c.obj"

# External object files for target max
max_EXTERNAL_OBJECTS =

max.exe: CMakeFiles/max.dir/max.c.obj
max.exe: CMakeFiles/max.dir/build.make
max.exe: CMakeFiles/max.dir/linklibs.rsp
max.exe: CMakeFiles/max.dir/objects1.rsp
max.exe: CMakeFiles/max.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\C-PL\2021-C-PL-Solution\6-recursion\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable max.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\max.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/max.dir/build: max.exe
.PHONY : CMakeFiles/max.dir/build

CMakeFiles/max.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\max.dir\cmake_clean.cmake
.PHONY : CMakeFiles/max.dir/clean

CMakeFiles/max.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\C-PL\2021-C-PL-Solution\6-recursion D:\C-PL\2021-C-PL-Solution\6-recursion D:\C-PL\2021-C-PL-Solution\6-recursion\cmake-build-debug D:\C-PL\2021-C-PL-Solution\6-recursion\cmake-build-debug D:\C-PL\2021-C-PL-Solution\6-recursion\cmake-build-debug\CMakeFiles\max.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/max.dir/depend

