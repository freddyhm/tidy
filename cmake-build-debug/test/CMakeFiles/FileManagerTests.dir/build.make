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
include test/CMakeFiles/FileManagerTests.dir/depend.make

# Include the progress variables for this target.
include test/CMakeFiles/FileManagerTests.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/FileManagerTests.dir/flags.make

test/CMakeFiles/FileManagerTests.dir/FileManagerTests.cpp.o: test/CMakeFiles/FileManagerTests.dir/flags.make
test/CMakeFiles/FileManagerTests.dir/FileManagerTests.cpp.o: ../test/FileManagerTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fhm-capra/Desktop/Projects/Tidy/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/FileManagerTests.dir/FileManagerTests.cpp.o"
	cd /home/fhm-capra/Desktop/Projects/Tidy/cmake-build-debug/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FileManagerTests.dir/FileManagerTests.cpp.o -c /home/fhm-capra/Desktop/Projects/Tidy/test/FileManagerTests.cpp

test/CMakeFiles/FileManagerTests.dir/FileManagerTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FileManagerTests.dir/FileManagerTests.cpp.i"
	cd /home/fhm-capra/Desktop/Projects/Tidy/cmake-build-debug/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fhm-capra/Desktop/Projects/Tidy/test/FileManagerTests.cpp > CMakeFiles/FileManagerTests.dir/FileManagerTests.cpp.i

test/CMakeFiles/FileManagerTests.dir/FileManagerTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FileManagerTests.dir/FileManagerTests.cpp.s"
	cd /home/fhm-capra/Desktop/Projects/Tidy/cmake-build-debug/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fhm-capra/Desktop/Projects/Tidy/test/FileManagerTests.cpp -o CMakeFiles/FileManagerTests.dir/FileManagerTests.cpp.s

test/CMakeFiles/FileManagerTests.dir/FileTests.cpp.o: test/CMakeFiles/FileManagerTests.dir/flags.make
test/CMakeFiles/FileManagerTests.dir/FileTests.cpp.o: ../test/FileTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fhm-capra/Desktop/Projects/Tidy/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object test/CMakeFiles/FileManagerTests.dir/FileTests.cpp.o"
	cd /home/fhm-capra/Desktop/Projects/Tidy/cmake-build-debug/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FileManagerTests.dir/FileTests.cpp.o -c /home/fhm-capra/Desktop/Projects/Tidy/test/FileTests.cpp

test/CMakeFiles/FileManagerTests.dir/FileTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FileManagerTests.dir/FileTests.cpp.i"
	cd /home/fhm-capra/Desktop/Projects/Tidy/cmake-build-debug/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fhm-capra/Desktop/Projects/Tidy/test/FileTests.cpp > CMakeFiles/FileManagerTests.dir/FileTests.cpp.i

test/CMakeFiles/FileManagerTests.dir/FileTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FileManagerTests.dir/FileTests.cpp.s"
	cd /home/fhm-capra/Desktop/Projects/Tidy/cmake-build-debug/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fhm-capra/Desktop/Projects/Tidy/test/FileTests.cpp -o CMakeFiles/FileManagerTests.dir/FileTests.cpp.s

# Object files for target FileManagerTests
FileManagerTests_OBJECTS = \
"CMakeFiles/FileManagerTests.dir/FileManagerTests.cpp.o" \
"CMakeFiles/FileManagerTests.dir/FileTests.cpp.o"

# External object files for target FileManagerTests
FileManagerTests_EXTERNAL_OBJECTS =

test/FileManagerTests: test/CMakeFiles/FileManagerTests.dir/FileManagerTests.cpp.o
test/FileManagerTests: test/CMakeFiles/FileManagerTests.dir/FileTests.cpp.o
test/FileManagerTests: test/CMakeFiles/FileManagerTests.dir/build.make
test/FileManagerTests: lib/libgtestd.a
test/FileManagerTests: lib/libgmock_maind.a
test/FileManagerTests: lib/libgmockd.a
test/FileManagerTests: lib/libgtestd.a
test/FileManagerTests: test/CMakeFiles/FileManagerTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/fhm-capra/Desktop/Projects/Tidy/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable FileManagerTests"
	cd /home/fhm-capra/Desktop/Projects/Tidy/cmake-build-debug/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FileManagerTests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/FileManagerTests.dir/build: test/FileManagerTests

.PHONY : test/CMakeFiles/FileManagerTests.dir/build

test/CMakeFiles/FileManagerTests.dir/clean:
	cd /home/fhm-capra/Desktop/Projects/Tidy/cmake-build-debug/test && $(CMAKE_COMMAND) -P CMakeFiles/FileManagerTests.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/FileManagerTests.dir/clean

test/CMakeFiles/FileManagerTests.dir/depend:
	cd /home/fhm-capra/Desktop/Projects/Tidy/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fhm-capra/Desktop/Projects/Tidy /home/fhm-capra/Desktop/Projects/Tidy/test /home/fhm-capra/Desktop/Projects/Tidy/cmake-build-debug /home/fhm-capra/Desktop/Projects/Tidy/cmake-build-debug/test /home/fhm-capra/Desktop/Projects/Tidy/cmake-build-debug/test/CMakeFiles/FileManagerTests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/FileManagerTests.dir/depend

