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
CMAKE_SOURCE_DIR = D:\C-PL\2021-C-PL-Solution\5-function

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\C-PL\2021-C-PL-Solution\5-function\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/radix.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/radix.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/radix.dir/flags.make

CMakeFiles/radix.dir/radix.c.obj: CMakeFiles/radix.dir/flags.make
CMakeFiles/radix.dir/radix.c.obj: ../radix.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\C-PL\2021-C-PL-Solution\5-function\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/radix.dir/radix.c.obj"
	C:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\radix.dir\radix.c.obj -c D:\C-PL\2021-C-PL-Solution\5-function\radix.c

CMakeFiles/radix.dir/radix.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/radix.dir/radix.c.i"
	C:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\C-PL\2021-C-PL-Solution\5-function\radix.c > CMakeFiles\radix.dir\radix.c.i

CMakeFiles/radix.dir/radix.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/radix.dir/radix.c.s"
	C:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\C-PL\2021-C-PL-Solution\5-function\radix.c -o CMakeFiles\radix.dir\radix.c.s

# Object files for target radix
radix_OBJECTS = \
"CMakeFiles/radix.dir/radix.c.obj"

# External object files for target radix
radix_EXTERNAL_OBJECTS =

radix.exe: CMakeFiles/radix.dir/radix.c.obj
radix.exe: CMakeFiles/radix.dir/build.make
radix.exe: CMakeFiles/radix.dir/linklibs.rsp
radix.exe: CMakeFiles/radix.dir/objects1.rsp
radix.exe: CMakeFiles/radix.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\C-PL\2021-C-PL-Solution\5-function\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable radix.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\radix.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/radix.dir/build: radix.exe
.PHONY : CMakeFiles/radix.dir/build

CMakeFiles/radix.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\radix.dir\cmake_clean.cmake
.PHONY : CMakeFiles/radix.dir/clean

CMakeFiles/radix.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\C-PL\2021-C-PL-Solution\5-function D:\C-PL\2021-C-PL-Solution\5-function D:\C-PL\2021-C-PL-Solution\5-function\cmake-build-debug D:\C-PL\2021-C-PL-Solution\5-function\cmake-build-debug D:\C-PL\2021-C-PL-Solution\5-function\cmake-build-debug\CMakeFiles\radix.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/radix.dir/depend

