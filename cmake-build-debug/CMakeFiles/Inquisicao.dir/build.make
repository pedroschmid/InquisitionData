# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = "E:\Softwares\Jetbrains\CLion 2019.2.5\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "E:\Softwares\Jetbrains\CLion 2019.2.5\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\pedro\OneDrive\Files\Dev\C\Projects\Inquisicao

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\pedro\OneDrive\Files\Dev\C\Projects\Inquisicao\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Inquisicao.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Inquisicao.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Inquisicao.dir/flags.make

CMakeFiles/Inquisicao.dir/main.c.obj: CMakeFiles/Inquisicao.dir/flags.make
CMakeFiles/Inquisicao.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\pedro\OneDrive\Files\Dev\C\Projects\Inquisicao\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Inquisicao.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Inquisicao.dir\main.c.obj   -c C:\Users\pedro\OneDrive\Files\Dev\C\Projects\Inquisicao\main.c

CMakeFiles/Inquisicao.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Inquisicao.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\pedro\OneDrive\Files\Dev\C\Projects\Inquisicao\main.c > CMakeFiles\Inquisicao.dir\main.c.i

CMakeFiles/Inquisicao.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Inquisicao.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\pedro\OneDrive\Files\Dev\C\Projects\Inquisicao\main.c -o CMakeFiles\Inquisicao.dir\main.c.s

# Object files for target Inquisicao
Inquisicao_OBJECTS = \
"CMakeFiles/Inquisicao.dir/main.c.obj"

# External object files for target Inquisicao
Inquisicao_EXTERNAL_OBJECTS =

Inquisicao.exe: CMakeFiles/Inquisicao.dir/main.c.obj
Inquisicao.exe: CMakeFiles/Inquisicao.dir/build.make
Inquisicao.exe: CMakeFiles/Inquisicao.dir/linklibs.rsp
Inquisicao.exe: CMakeFiles/Inquisicao.dir/objects1.rsp
Inquisicao.exe: CMakeFiles/Inquisicao.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\pedro\OneDrive\Files\Dev\C\Projects\Inquisicao\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Inquisicao.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Inquisicao.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Inquisicao.dir/build: Inquisicao.exe

.PHONY : CMakeFiles/Inquisicao.dir/build

CMakeFiles/Inquisicao.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Inquisicao.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Inquisicao.dir/clean

CMakeFiles/Inquisicao.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\pedro\OneDrive\Files\Dev\C\Projects\Inquisicao C:\Users\pedro\OneDrive\Files\Dev\C\Projects\Inquisicao C:\Users\pedro\OneDrive\Files\Dev\C\Projects\Inquisicao\cmake-build-debug C:\Users\pedro\OneDrive\Files\Dev\C\Projects\Inquisicao\cmake-build-debug C:\Users\pedro\OneDrive\Files\Dev\C\Projects\Inquisicao\cmake-build-debug\CMakeFiles\Inquisicao.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Inquisicao.dir/depend

