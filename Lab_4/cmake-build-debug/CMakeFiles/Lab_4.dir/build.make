# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /home/settnozz/clion-2016.3.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/settnozz/clion-2016.3.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/settnozz/CLionProjects/OOP_Cpp/Lab_4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/settnozz/CLionProjects/OOP_Cpp/Lab_4/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Lab_4.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Lab_4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Lab_4.dir/flags.make

CMakeFiles/Lab_4.dir/main.cpp.o: CMakeFiles/Lab_4.dir/flags.make
CMakeFiles/Lab_4.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/settnozz/CLionProjects/OOP_Cpp/Lab_4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Lab_4.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Lab_4.dir/main.cpp.o -c /home/settnozz/CLionProjects/OOP_Cpp/Lab_4/main.cpp

CMakeFiles/Lab_4.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lab_4.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/settnozz/CLionProjects/OOP_Cpp/Lab_4/main.cpp > CMakeFiles/Lab_4.dir/main.cpp.i

CMakeFiles/Lab_4.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lab_4.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/settnozz/CLionProjects/OOP_Cpp/Lab_4/main.cpp -o CMakeFiles/Lab_4.dir/main.cpp.s

CMakeFiles/Lab_4.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Lab_4.dir/main.cpp.o.requires

CMakeFiles/Lab_4.dir/main.cpp.o.provides: CMakeFiles/Lab_4.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Lab_4.dir/build.make CMakeFiles/Lab_4.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Lab_4.dir/main.cpp.o.provides

CMakeFiles/Lab_4.dir/main.cpp.o.provides.build: CMakeFiles/Lab_4.dir/main.cpp.o


CMakeFiles/Lab_4.dir/Angle_on_plane.cpp.o: CMakeFiles/Lab_4.dir/flags.make
CMakeFiles/Lab_4.dir/Angle_on_plane.cpp.o: ../Angle_on_plane.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/settnozz/CLionProjects/OOP_Cpp/Lab_4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Lab_4.dir/Angle_on_plane.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Lab_4.dir/Angle_on_plane.cpp.o -c /home/settnozz/CLionProjects/OOP_Cpp/Lab_4/Angle_on_plane.cpp

CMakeFiles/Lab_4.dir/Angle_on_plane.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lab_4.dir/Angle_on_plane.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/settnozz/CLionProjects/OOP_Cpp/Lab_4/Angle_on_plane.cpp > CMakeFiles/Lab_4.dir/Angle_on_plane.cpp.i

CMakeFiles/Lab_4.dir/Angle_on_plane.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lab_4.dir/Angle_on_plane.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/settnozz/CLionProjects/OOP_Cpp/Lab_4/Angle_on_plane.cpp -o CMakeFiles/Lab_4.dir/Angle_on_plane.cpp.s

CMakeFiles/Lab_4.dir/Angle_on_plane.cpp.o.requires:

.PHONY : CMakeFiles/Lab_4.dir/Angle_on_plane.cpp.o.requires

CMakeFiles/Lab_4.dir/Angle_on_plane.cpp.o.provides: CMakeFiles/Lab_4.dir/Angle_on_plane.cpp.o.requires
	$(MAKE) -f CMakeFiles/Lab_4.dir/build.make CMakeFiles/Lab_4.dir/Angle_on_plane.cpp.o.provides.build
.PHONY : CMakeFiles/Lab_4.dir/Angle_on_plane.cpp.o.provides

CMakeFiles/Lab_4.dir/Angle_on_plane.cpp.o.provides.build: CMakeFiles/Lab_4.dir/Angle_on_plane.cpp.o


# Object files for target Lab_4
Lab_4_OBJECTS = \
"CMakeFiles/Lab_4.dir/main.cpp.o" \
"CMakeFiles/Lab_4.dir/Angle_on_plane.cpp.o"

# External object files for target Lab_4
Lab_4_EXTERNAL_OBJECTS =

Lab_4: CMakeFiles/Lab_4.dir/main.cpp.o
Lab_4: CMakeFiles/Lab_4.dir/Angle_on_plane.cpp.o
Lab_4: CMakeFiles/Lab_4.dir/build.make
Lab_4: CMakeFiles/Lab_4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/settnozz/CLionProjects/OOP_Cpp/Lab_4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Lab_4"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Lab_4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Lab_4.dir/build: Lab_4

.PHONY : CMakeFiles/Lab_4.dir/build

CMakeFiles/Lab_4.dir/requires: CMakeFiles/Lab_4.dir/main.cpp.o.requires
CMakeFiles/Lab_4.dir/requires: CMakeFiles/Lab_4.dir/Angle_on_plane.cpp.o.requires

.PHONY : CMakeFiles/Lab_4.dir/requires

CMakeFiles/Lab_4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Lab_4.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Lab_4.dir/clean

CMakeFiles/Lab_4.dir/depend:
	cd /home/settnozz/CLionProjects/OOP_Cpp/Lab_4/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/settnozz/CLionProjects/OOP_Cpp/Lab_4 /home/settnozz/CLionProjects/OOP_Cpp/Lab_4 /home/settnozz/CLionProjects/OOP_Cpp/Lab_4/cmake-build-debug /home/settnozz/CLionProjects/OOP_Cpp/Lab_4/cmake-build-debug /home/settnozz/CLionProjects/OOP_Cpp/Lab_4/cmake-build-debug/CMakeFiles/Lab_4.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Lab_4.dir/depend
