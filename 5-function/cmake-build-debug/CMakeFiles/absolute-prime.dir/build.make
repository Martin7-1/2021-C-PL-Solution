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
include CMakeFiles/absolute-prime.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/absolute-prime.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/absolute-prime.dir/flags.make

CMakeFiles/absolute-prime.dir/absolute-prime.c.obj: CMakeFiles/absolute-prime.dir/flags.make
CMakeFiles/absolute-prime.dir/absolute-prime.c.obj: ../absolute-prime.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\C-PL\2021-C-PL-Solution\5-function\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/absolute-prime.dir/absolute-prime.c.obj"
	C:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\absolute-prime.dir\absolute-prime.c.obj -c D:\C-PL\2021-C-PL-Solution\5-function\absolute-prime.c

CMakeFiles/absolute-prime.dir/absolute-prime.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/absolute-prime.dir/absolute-prime.c.i"
	C:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\C-PL\2021-C-PL-Solution\5-function\absolute-prime.c > CMakeFiles\absolute-prime.dir\absolute-prime.c.i

CMakeFiles/absolute-prime.dir/absolute-prime.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/absolute-prime.dir/absolute-prime.c.s"
	C:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\C-PL\2021-C-PL-Solution\5-function\absolute-prime.c -o CMakeFiles\absolute-prime.dir\absolute-prime.c.s

# Object files for target absolute-prime
absolute__prime_OBJECTS = \
"CMakeFiles/absolute-prime.dir/absolute-prime.c.obj"

# External object files for target absolute-prime
absolute__prime_EXTERNAL_OBJECTS =

absolute-prime.exe: CMakeFiles/absolute-prime.dir/absolute-prime.c.obj
absolute-prime.exe: CMakeFiles/absolute-prime.dir/build.make
absolute-prime.exe: CMakeFiles/absolute-prime.dir/linklibs.rsp
absolute-prime.exe: CMakeFiles/absolute-prime.dir/objects1.rsp
absolute-prime.exe: CMakeFiles/absolute-prime.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\C-PL\2021-C-PL-Solution\5-function\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable absolute-prime.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\absolute-prime.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/absolute-prime.dir/build: absolute-prime.exe
.PHONY : CMakeFiles/absolute-prime.dir/build

CMakeFiles/absolute-prime.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\absolute-prime.dir\cmake_clean.cmake
.PHONY : CMakeFiles/absolute-prime.dir/clean

CMakeFiles/absolute-prime.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\C-PL\2021-C-PL-Solution\5-function D:\C-PL\2021-C-PL-Solution\5-function D:\C-PL\2021-C-PL-Solution\5-function\cmake-build-debug D:\C-PL\2021-C-PL-Solution\5-function\cmake-build-debug D:\C-PL\2021-C-PL-Solution\5-function\cmake-build-debug\CMakeFiles\absolute-prime.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/absolute-prime.dir/depend

