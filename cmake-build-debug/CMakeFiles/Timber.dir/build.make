# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /home/bukenya/Downloads/Compressed/clion-2020.1.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/bukenya/Downloads/Compressed/clion-2020.1.1/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/bukenya/CLionProjects/Timber

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/bukenya/CLionProjects/Timber/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Timber.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Timber.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Timber.dir/flags.make

CMakeFiles/Timber.dir/main.cpp.o: CMakeFiles/Timber.dir/flags.make
CMakeFiles/Timber.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bukenya/CLionProjects/Timber/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Timber.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Timber.dir/main.cpp.o -c /home/bukenya/CLionProjects/Timber/main.cpp

CMakeFiles/Timber.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Timber.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bukenya/CLionProjects/Timber/main.cpp > CMakeFiles/Timber.dir/main.cpp.i

CMakeFiles/Timber.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Timber.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bukenya/CLionProjects/Timber/main.cpp -o CMakeFiles/Timber.dir/main.cpp.s

# Object files for target Timber
Timber_OBJECTS = \
"CMakeFiles/Timber.dir/main.cpp.o"

# External object files for target Timber
Timber_EXTERNAL_OBJECTS =

Timber: CMakeFiles/Timber.dir/main.cpp.o
Timber: CMakeFiles/Timber.dir/build.make
Timber: /usr/lib/x86_64-linux-gnu/libsfml-system.so
Timber: /usr/lib/x86_64-linux-gnu/libsfml-window.so
Timber: /usr/lib/x86_64-linux-gnu/libsfml-graphics.so
Timber: /usr/lib/x86_64-linux-gnu/libsfml-network.so
Timber: /usr/lib/x86_64-linux-gnu/libsfml-audio.so
Timber: CMakeFiles/Timber.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/bukenya/CLionProjects/Timber/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Timber"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Timber.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Timber.dir/build: Timber

.PHONY : CMakeFiles/Timber.dir/build

CMakeFiles/Timber.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Timber.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Timber.dir/clean

CMakeFiles/Timber.dir/depend:
	cd /home/bukenya/CLionProjects/Timber/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/bukenya/CLionProjects/Timber /home/bukenya/CLionProjects/Timber /home/bukenya/CLionProjects/Timber/cmake-build-debug /home/bukenya/CLionProjects/Timber/cmake-build-debug /home/bukenya/CLionProjects/Timber/cmake-build-debug/CMakeFiles/Timber.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Timber.dir/depend

