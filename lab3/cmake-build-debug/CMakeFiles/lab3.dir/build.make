# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.29

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2024.2.2\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2024.2.2\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Kubiszon\Studia\Sem4\SysOpy\sysopRepo\lab3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Kubiszon\Studia\Sem4\SysOpy\sysopRepo\lab3\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/lab3.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/lab3.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/lab3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab3.dir/flags.make

CMakeFiles/lab3.dir/flipper.c.obj: CMakeFiles/lab3.dir/flags.make
CMakeFiles/lab3.dir/flipper.c.obj: C:/Kubiszon/Studia/Sem4/SysOpy/sysopRepo/lab3/flipper.c
CMakeFiles/lab3.dir/flipper.c.obj: CMakeFiles/lab3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Kubiszon\Studia\Sem4\SysOpy\sysopRepo\lab3\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/lab3.dir/flipper.c.obj"
	C:\msys64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/lab3.dir/flipper.c.obj -MF CMakeFiles\lab3.dir\flipper.c.obj.d -o CMakeFiles\lab3.dir\flipper.c.obj -c C:\Kubiszon\Studia\Sem4\SysOpy\sysopRepo\lab3\flipper.c

CMakeFiles/lab3.dir/flipper.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/lab3.dir/flipper.c.i"
	C:\msys64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Kubiszon\Studia\Sem4\SysOpy\sysopRepo\lab3\flipper.c > CMakeFiles\lab3.dir\flipper.c.i

CMakeFiles/lab3.dir/flipper.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/lab3.dir/flipper.c.s"
	C:\msys64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Kubiszon\Studia\Sem4\SysOpy\sysopRepo\lab3\flipper.c -o CMakeFiles\lab3.dir\flipper.c.s

# Object files for target lab3
lab3_OBJECTS = \
"CMakeFiles/lab3.dir/flipper.c.obj"

# External object files for target lab3
lab3_EXTERNAL_OBJECTS =

lab3.exe: CMakeFiles/lab3.dir/flipper.c.obj
lab3.exe: CMakeFiles/lab3.dir/build.make
lab3.exe: CMakeFiles/lab3.dir/linkLibs.rsp
lab3.exe: CMakeFiles/lab3.dir/objects1.rsp
lab3.exe: CMakeFiles/lab3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Kubiszon\Studia\Sem4\SysOpy\sysopRepo\lab3\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable lab3.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\lab3.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab3.dir/build: lab3.exe
.PHONY : CMakeFiles/lab3.dir/build

CMakeFiles/lab3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\lab3.dir\cmake_clean.cmake
.PHONY : CMakeFiles/lab3.dir/clean

CMakeFiles/lab3.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Kubiszon\Studia\Sem4\SysOpy\sysopRepo\lab3 C:\Kubiszon\Studia\Sem4\SysOpy\sysopRepo\lab3 C:\Kubiszon\Studia\Sem4\SysOpy\sysopRepo\lab3\cmake-build-debug C:\Kubiszon\Studia\Sem4\SysOpy\sysopRepo\lab3\cmake-build-debug C:\Kubiszon\Studia\Sem4\SysOpy\sysopRepo\lab3\cmake-build-debug\CMakeFiles\lab3.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/lab3.dir/depend

