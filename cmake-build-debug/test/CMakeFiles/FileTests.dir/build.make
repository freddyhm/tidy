# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /opt/clion-2018.2.6/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2018.2.6/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/fhm-capra/Desktop/Projects/Tidy

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/fhm-capra/Desktop/Projects/Tidy/cmake-build-debug

# Include any dependencies generated for this target.
include test/CMakeFiles/FileTests.dir/depend.make

# Include the progress variables for this target.
include test/CMakeFiles/FileTests.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/FileTests.dir/flags.make

test/CMakeFiles/FileTests.dir/FileTests.cpp.o: test/CMakeFiles/FileTests.dir/flags.make
test/CMakeFiles/FileTests.dir/FileTests.cpp.o: ../test/FileTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fhm-capra/Desktop/Projects/Tidy/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/FileTests.dir/FileTests.cpp.o"
	cd /home/fhm-capra/Desktop/Projects/Tidy/cmake-build-debug/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FileTests.dir/FileTests.cpp.o -c /home/fhm-capra/Desktop/Projects/Tidy/test/FileTests.cpp

test/CMakeFiles/FileTests.dir/FileTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FileTests.dir/FileTests.cpp.i"
	cd /home/fhm-capra/Desktop/Projects/Tidy/cmake-build-debug/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fhm-capra/Desktop/Projects/Tidy/test/FileTests.cpp > CMakeFiles/FileTests.dir/FileTests.cpp.i

test/CMakeFiles/FileTests.dir/FileTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FileTests.dir/FileTests.cpp.s"
	cd /home/fhm-capra/Desktop/Projects/Tidy/cmake-build-debug/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fhm-capra/Desktop/Projects/Tidy/test/FileTests.cpp -o CMakeFiles/FileTests.dir/FileTests.cpp.s

# Object files for target FileTests
FileTests_OBJECTS = \
"CMakeFiles/FileTests.dir/FileTests.cpp.o"

# External object files for target FileTests
FileTests_EXTERNAL_OBJECTS =

test/FileTests: test/CMakeFiles/FileTests.dir/FileTests.cpp.o
test/FileTests: test/CMakeFiles/FileTests.dir/build.make
test/FileTests: lib/libgtestd.a
test/FileTests: lib/libgmock_maind.a
test/FileTests: lib/libgmockd.a
test/FileTests: lib/libgtestd.a
test/FileTests: test/CMakeFiles/FileTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/fhm-capra/Desktop/Projects/Tidy/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable FileTests"
	cd /home/fhm-capra/Desktop/Projects/Tidy/cmake-build-debug/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FileTests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/FileTests.dir/build: test/FileTests

.PHONY : test/CMakeFiles/FileTests.dir/build

test/CMakeFiles/FileTests.dir/clean:
	cd /home/fhm-capra/Desktop/Projects/Tidy/cmake-build-debug/test && $(CMAKE_COMMAND) -P CMakeFiles/FileTests.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/FileTests.dir/clean

test/CMakeFiles/FileTests.dir/depend:
	cd /home/fhm-capra/Desktop/Projects/Tidy/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fhm-capra/Desktop/Projects/Tidy /home/fhm-capra/Desktop/Projects/Tidy/test /home/fhm-capra/Desktop/Projects/Tidy/cmake-build-debug /home/fhm-capra/Desktop/Projects/Tidy/cmake-build-debug/test /home/fhm-capra/Desktop/Projects/Tidy/cmake-build-debug/test/CMakeFiles/FileTests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/FileTests.dir/depend

