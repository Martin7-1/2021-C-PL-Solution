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
include CMakeFiles/lcp.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/lcp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lcp.dir/flags.make

CMakeFiles/lcp.dir/lcp.c.obj: CMakeFiles/lcp.dir/flags.make
CMakeFiles/lcp.dir/lcp.c.obj: ../lcp.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\C-PL\2021-C-PL-Solution\5-function\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/lcp.dir/lcp.c.obj"
	C:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\lcp.dir\lcp.c.obj -c D:\C-PL\2021-C-PL-Solution\5-function\lcp.c

CMakeFiles/lcp.dir/lcp.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lcp.dir/lcp.c.i"
	C:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\C-PL\2021-C-PL-Solution\5-function\lcp.c > CMakeFiles\lcp.dir\lcp.c.i

CMakeFiles/lcp.dir/lcp.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lcp.dir/lcp.c.s"
	C:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\C-PL\2021-C-PL-Solution\5-function\lcp.c -o CMakeFiles\lcp.dir\lcp.c.s

# Object files for target lcp
lcp_OBJECTS = \
"CMakeFiles/lcp.dir/lcp.c.obj"

# External object files for target lcp
lcp_EXTERNAL_OBJECTS =

lcp.exe: CMakeFiles/lcp.dir/lcp.c.obj
lcp.exe: CMakeFiles/lcp.dir/build.make
lcp.exe: CMakeFiles/lcp.dir/linklibs.rsp
lcp.exe: CMakeFiles/lcp.dir/objects1.rsp
lcp.exe: CMakeFiles/lcp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\C-PL\2021-C-PL-Solution\5-function\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable lcp.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\lcp.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lcp.dir/build: lcp.exe
.PHONY : CMakeFiles/lcp.dir/build

CMakeFiles/lcp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\lcp.dir\cmake_clean.cmake
.PHONY : CMakeFiles/lcp.dir/clean

CMakeFiles/lcp.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\C-PL\2021-C-PL-Solution\5-function D:\C-PL\2021-C-PL-Solution\5-function D:\C-PL\2021-C-PL-Solution\5-function\cmake-build-debug D:\C-PL\2021-C-PL-Solution\5-function\cmake-build-debug D:\C-PL\2021-C-PL-Solution\5-function\cmake-build-debug\CMakeFiles\lcp.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lcp.dir/depend
