# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/dimafilipenko/CLionProjects/lb3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/dimafilipenko/CLionProjects/lb3

# Include any dependencies generated for this target.
include CMakeFiles/CMake_Demo_Mac.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CMake_Demo_Mac.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CMake_Demo_Mac.dir/flags.make

CMakeFiles/CMake_Demo_Mac.dir/main.cpp.o: CMakeFiles/CMake_Demo_Mac.dir/flags.make
CMakeFiles/CMake_Demo_Mac.dir/main.cpp.o: main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dimafilipenko/CLionProjects/lb3/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CMake_Demo_Mac.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CMake_Demo_Mac.dir/main.cpp.o -c /Users/dimafilipenko/CLionProjects/lb3/main.cpp

CMakeFiles/CMake_Demo_Mac.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CMake_Demo_Mac.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/dimafilipenko/CLionProjects/lb3/main.cpp > CMakeFiles/CMake_Demo_Mac.dir/main.cpp.i

CMakeFiles/CMake_Demo_Mac.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CMake_Demo_Mac.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/dimafilipenko/CLionProjects/lb3/main.cpp -o CMakeFiles/CMake_Demo_Mac.dir/main.cpp.s

CMakeFiles/CMake_Demo_Mac.dir/system.cpp.o: CMakeFiles/CMake_Demo_Mac.dir/flags.make
CMakeFiles/CMake_Demo_Mac.dir/system.cpp.o: system.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dimafilipenko/CLionProjects/lb3/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/CMake_Demo_Mac.dir/system.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CMake_Demo_Mac.dir/system.cpp.o -c /Users/dimafilipenko/CLionProjects/lb3/system.cpp

CMakeFiles/CMake_Demo_Mac.dir/system.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CMake_Demo_Mac.dir/system.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/dimafilipenko/CLionProjects/lb3/system.cpp > CMakeFiles/CMake_Demo_Mac.dir/system.cpp.i

CMakeFiles/CMake_Demo_Mac.dir/system.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CMake_Demo_Mac.dir/system.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/dimafilipenko/CLionProjects/lb3/system.cpp -o CMakeFiles/CMake_Demo_Mac.dir/system.cpp.s

# Object files for target CMake_Demo_Mac
CMake_Demo_Mac_OBJECTS = \
"CMakeFiles/CMake_Demo_Mac.dir/main.cpp.o" \
"CMakeFiles/CMake_Demo_Mac.dir/system.cpp.o"

# External object files for target CMake_Demo_Mac
CMake_Demo_Mac_EXTERNAL_OBJECTS =

CMake_Demo_Mac: CMakeFiles/CMake_Demo_Mac.dir/main.cpp.o
CMake_Demo_Mac: CMakeFiles/CMake_Demo_Mac.dir/system.cpp.o
CMake_Demo_Mac: CMakeFiles/CMake_Demo_Mac.dir/build.make
CMake_Demo_Mac: CMakeFiles/CMake_Demo_Mac.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/dimafilipenko/CLionProjects/lb3/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable CMake_Demo_Mac"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CMake_Demo_Mac.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CMake_Demo_Mac.dir/build: CMake_Demo_Mac

.PHONY : CMakeFiles/CMake_Demo_Mac.dir/build

CMakeFiles/CMake_Demo_Mac.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CMake_Demo_Mac.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CMake_Demo_Mac.dir/clean

CMakeFiles/CMake_Demo_Mac.dir/depend:
	cd /Users/dimafilipenko/CLionProjects/lb3 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/dimafilipenko/CLionProjects/lb3 /Users/dimafilipenko/CLionProjects/lb3 /Users/dimafilipenko/CLionProjects/lb3 /Users/dimafilipenko/CLionProjects/lb3 /Users/dimafilipenko/CLionProjects/lb3/CMakeFiles/CMake_Demo_Mac.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CMake_Demo_Mac.dir/depend
