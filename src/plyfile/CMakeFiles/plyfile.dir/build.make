# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/svrvr/PureOpencv/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/svrvr/PureOpencv/src

# Include any dependencies generated for this target.
include plyfile/CMakeFiles/plyfile.dir/depend.make

# Include the progress variables for this target.
include plyfile/CMakeFiles/plyfile.dir/progress.make

# Include the compile flags for this target's objects.
include plyfile/CMakeFiles/plyfile.dir/flags.make

plyfile/CMakeFiles/plyfile.dir/test.cpp.o: plyfile/CMakeFiles/plyfile.dir/flags.make
plyfile/CMakeFiles/plyfile.dir/test.cpp.o: plyfile/test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/svrvr/PureOpencv/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object plyfile/CMakeFiles/plyfile.dir/test.cpp.o"
	cd /home/svrvr/PureOpencv/src/plyfile && /usr/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/plyfile.dir/test.cpp.o -c /home/svrvr/PureOpencv/src/plyfile/test.cpp

plyfile/CMakeFiles/plyfile.dir/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/plyfile.dir/test.cpp.i"
	cd /home/svrvr/PureOpencv/src/plyfile && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/svrvr/PureOpencv/src/plyfile/test.cpp > CMakeFiles/plyfile.dir/test.cpp.i

plyfile/CMakeFiles/plyfile.dir/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/plyfile.dir/test.cpp.s"
	cd /home/svrvr/PureOpencv/src/plyfile && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/svrvr/PureOpencv/src/plyfile/test.cpp -o CMakeFiles/plyfile.dir/test.cpp.s

plyfile/CMakeFiles/plyfile.dir/test.cpp.o.requires:

.PHONY : plyfile/CMakeFiles/plyfile.dir/test.cpp.o.requires

plyfile/CMakeFiles/plyfile.dir/test.cpp.o.provides: plyfile/CMakeFiles/plyfile.dir/test.cpp.o.requires
	$(MAKE) -f plyfile/CMakeFiles/plyfile.dir/build.make plyfile/CMakeFiles/plyfile.dir/test.cpp.o.provides.build
.PHONY : plyfile/CMakeFiles/plyfile.dir/test.cpp.o.provides

plyfile/CMakeFiles/plyfile.dir/test.cpp.o.provides.build: plyfile/CMakeFiles/plyfile.dir/test.cpp.o


plyfile/CMakeFiles/plyfile.dir/plyfile.cpp.o: plyfile/CMakeFiles/plyfile.dir/flags.make
plyfile/CMakeFiles/plyfile.dir/plyfile.cpp.o: plyfile/plyfile.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/svrvr/PureOpencv/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object plyfile/CMakeFiles/plyfile.dir/plyfile.cpp.o"
	cd /home/svrvr/PureOpencv/src/plyfile && /usr/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/plyfile.dir/plyfile.cpp.o -c /home/svrvr/PureOpencv/src/plyfile/plyfile.cpp

plyfile/CMakeFiles/plyfile.dir/plyfile.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/plyfile.dir/plyfile.cpp.i"
	cd /home/svrvr/PureOpencv/src/plyfile && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/svrvr/PureOpencv/src/plyfile/plyfile.cpp > CMakeFiles/plyfile.dir/plyfile.cpp.i

plyfile/CMakeFiles/plyfile.dir/plyfile.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/plyfile.dir/plyfile.cpp.s"
	cd /home/svrvr/PureOpencv/src/plyfile && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/svrvr/PureOpencv/src/plyfile/plyfile.cpp -o CMakeFiles/plyfile.dir/plyfile.cpp.s

plyfile/CMakeFiles/plyfile.dir/plyfile.cpp.o.requires:

.PHONY : plyfile/CMakeFiles/plyfile.dir/plyfile.cpp.o.requires

plyfile/CMakeFiles/plyfile.dir/plyfile.cpp.o.provides: plyfile/CMakeFiles/plyfile.dir/plyfile.cpp.o.requires
	$(MAKE) -f plyfile/CMakeFiles/plyfile.dir/build.make plyfile/CMakeFiles/plyfile.dir/plyfile.cpp.o.provides.build
.PHONY : plyfile/CMakeFiles/plyfile.dir/plyfile.cpp.o.provides

plyfile/CMakeFiles/plyfile.dir/plyfile.cpp.o.provides.build: plyfile/CMakeFiles/plyfile.dir/plyfile.cpp.o


plyfile/CMakeFiles/plyfile.dir/table_math.cpp.o: plyfile/CMakeFiles/plyfile.dir/flags.make
plyfile/CMakeFiles/plyfile.dir/table_math.cpp.o: plyfile/table_math.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/svrvr/PureOpencv/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object plyfile/CMakeFiles/plyfile.dir/table_math.cpp.o"
	cd /home/svrvr/PureOpencv/src/plyfile && /usr/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/plyfile.dir/table_math.cpp.o -c /home/svrvr/PureOpencv/src/plyfile/table_math.cpp

plyfile/CMakeFiles/plyfile.dir/table_math.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/plyfile.dir/table_math.cpp.i"
	cd /home/svrvr/PureOpencv/src/plyfile && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/svrvr/PureOpencv/src/plyfile/table_math.cpp > CMakeFiles/plyfile.dir/table_math.cpp.i

plyfile/CMakeFiles/plyfile.dir/table_math.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/plyfile.dir/table_math.cpp.s"
	cd /home/svrvr/PureOpencv/src/plyfile && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/svrvr/PureOpencv/src/plyfile/table_math.cpp -o CMakeFiles/plyfile.dir/table_math.cpp.s

plyfile/CMakeFiles/plyfile.dir/table_math.cpp.o.requires:

.PHONY : plyfile/CMakeFiles/plyfile.dir/table_math.cpp.o.requires

plyfile/CMakeFiles/plyfile.dir/table_math.cpp.o.provides: plyfile/CMakeFiles/plyfile.dir/table_math.cpp.o.requires
	$(MAKE) -f plyfile/CMakeFiles/plyfile.dir/build.make plyfile/CMakeFiles/plyfile.dir/table_math.cpp.o.provides.build
.PHONY : plyfile/CMakeFiles/plyfile.dir/table_math.cpp.o.provides

plyfile/CMakeFiles/plyfile.dir/table_math.cpp.o.provides.build: plyfile/CMakeFiles/plyfile.dir/table_math.cpp.o


# Object files for target plyfile
plyfile_OBJECTS = \
"CMakeFiles/plyfile.dir/test.cpp.o" \
"CMakeFiles/plyfile.dir/plyfile.cpp.o" \
"CMakeFiles/plyfile.dir/table_math.cpp.o"

# External object files for target plyfile
plyfile_EXTERNAL_OBJECTS =

plyfile/plyfile: plyfile/CMakeFiles/plyfile.dir/test.cpp.o
plyfile/plyfile: plyfile/CMakeFiles/plyfile.dir/plyfile.cpp.o
plyfile/plyfile: plyfile/CMakeFiles/plyfile.dir/table_math.cpp.o
plyfile/plyfile: plyfile/CMakeFiles/plyfile.dir/build.make
plyfile/plyfile: plyfile/CMakeFiles/plyfile.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/svrvr/PureOpencv/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable plyfile"
	cd /home/svrvr/PureOpencv/src/plyfile && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/plyfile.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plyfile/CMakeFiles/plyfile.dir/build: plyfile/plyfile

.PHONY : plyfile/CMakeFiles/plyfile.dir/build

plyfile/CMakeFiles/plyfile.dir/requires: plyfile/CMakeFiles/plyfile.dir/test.cpp.o.requires
plyfile/CMakeFiles/plyfile.dir/requires: plyfile/CMakeFiles/plyfile.dir/plyfile.cpp.o.requires
plyfile/CMakeFiles/plyfile.dir/requires: plyfile/CMakeFiles/plyfile.dir/table_math.cpp.o.requires

.PHONY : plyfile/CMakeFiles/plyfile.dir/requires

plyfile/CMakeFiles/plyfile.dir/clean:
	cd /home/svrvr/PureOpencv/src/plyfile && $(CMAKE_COMMAND) -P CMakeFiles/plyfile.dir/cmake_clean.cmake
.PHONY : plyfile/CMakeFiles/plyfile.dir/clean

plyfile/CMakeFiles/plyfile.dir/depend:
	cd /home/svrvr/PureOpencv/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/svrvr/PureOpencv/src /home/svrvr/PureOpencv/src/plyfile /home/svrvr/PureOpencv/src /home/svrvr/PureOpencv/src/plyfile /home/svrvr/PureOpencv/src/plyfile/CMakeFiles/plyfile.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plyfile/CMakeFiles/plyfile.dir/depend
