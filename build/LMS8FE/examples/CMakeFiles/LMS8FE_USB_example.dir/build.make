# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/limenet1/Work/PCIe_5GRadio_3v1/D20221027/LMS8FE_1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/limenet1/Work/PCIe_5GRadio_3v1/D20221027/LMS8FE_1/build

# Include any dependencies generated for this target.
include LMS8FE/examples/CMakeFiles/LMS8FE_USB_example.dir/depend.make

# Include the progress variables for this target.
include LMS8FE/examples/CMakeFiles/LMS8FE_USB_example.dir/progress.make

# Include the compile flags for this target's objects.
include LMS8FE/examples/CMakeFiles/LMS8FE_USB_example.dir/flags.make

LMS8FE/examples/CMakeFiles/LMS8FE_USB_example.dir/LMS8FE_USB_example.cpp.o: LMS8FE/examples/CMakeFiles/LMS8FE_USB_example.dir/flags.make
LMS8FE/examples/CMakeFiles/LMS8FE_USB_example.dir/LMS8FE_USB_example.cpp.o: ../LMS8FE/examples/LMS8FE_USB_example.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/limenet1/Work/PCIe_5GRadio_3v1/D20221027/LMS8FE_1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object LMS8FE/examples/CMakeFiles/LMS8FE_USB_example.dir/LMS8FE_USB_example.cpp.o"
	cd /home/limenet1/Work/PCIe_5GRadio_3v1/D20221027/LMS8FE_1/build/LMS8FE/examples && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LMS8FE_USB_example.dir/LMS8FE_USB_example.cpp.o -c /home/limenet1/Work/PCIe_5GRadio_3v1/D20221027/LMS8FE_1/LMS8FE/examples/LMS8FE_USB_example.cpp

LMS8FE/examples/CMakeFiles/LMS8FE_USB_example.dir/LMS8FE_USB_example.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LMS8FE_USB_example.dir/LMS8FE_USB_example.cpp.i"
	cd /home/limenet1/Work/PCIe_5GRadio_3v1/D20221027/LMS8FE_1/build/LMS8FE/examples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/limenet1/Work/PCIe_5GRadio_3v1/D20221027/LMS8FE_1/LMS8FE/examples/LMS8FE_USB_example.cpp > CMakeFiles/LMS8FE_USB_example.dir/LMS8FE_USB_example.cpp.i

LMS8FE/examples/CMakeFiles/LMS8FE_USB_example.dir/LMS8FE_USB_example.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LMS8FE_USB_example.dir/LMS8FE_USB_example.cpp.s"
	cd /home/limenet1/Work/PCIe_5GRadio_3v1/D20221027/LMS8FE_1/build/LMS8FE/examples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/limenet1/Work/PCIe_5GRadio_3v1/D20221027/LMS8FE_1/LMS8FE/examples/LMS8FE_USB_example.cpp -o CMakeFiles/LMS8FE_USB_example.dir/LMS8FE_USB_example.cpp.s

LMS8FE/examples/CMakeFiles/LMS8FE_USB_example.dir/LMS8FE_USB_example.cpp.o.requires:

.PHONY : LMS8FE/examples/CMakeFiles/LMS8FE_USB_example.dir/LMS8FE_USB_example.cpp.o.requires

LMS8FE/examples/CMakeFiles/LMS8FE_USB_example.dir/LMS8FE_USB_example.cpp.o.provides: LMS8FE/examples/CMakeFiles/LMS8FE_USB_example.dir/LMS8FE_USB_example.cpp.o.requires
	$(MAKE) -f LMS8FE/examples/CMakeFiles/LMS8FE_USB_example.dir/build.make LMS8FE/examples/CMakeFiles/LMS8FE_USB_example.dir/LMS8FE_USB_example.cpp.o.provides.build
.PHONY : LMS8FE/examples/CMakeFiles/LMS8FE_USB_example.dir/LMS8FE_USB_example.cpp.o.provides

LMS8FE/examples/CMakeFiles/LMS8FE_USB_example.dir/LMS8FE_USB_example.cpp.o.provides.build: LMS8FE/examples/CMakeFiles/LMS8FE_USB_example.dir/LMS8FE_USB_example.cpp.o


# Object files for target LMS8FE_USB_example
LMS8FE_USB_example_OBJECTS = \
"CMakeFiles/LMS8FE_USB_example.dir/LMS8FE_USB_example.cpp.o"

# External object files for target LMS8FE_USB_example
LMS8FE_USB_example_EXTERNAL_OBJECTS =

bin/LMS8FE_USB_example: LMS8FE/examples/CMakeFiles/LMS8FE_USB_example.dir/LMS8FE_USB_example.cpp.o
bin/LMS8FE_USB_example: LMS8FE/examples/CMakeFiles/LMS8FE_USB_example.dir/build.make
bin/LMS8FE_USB_example: LMS8FE/libLMS8FEAPI.so
bin/LMS8FE_USB_example: LMS8FE/examples/CMakeFiles/LMS8FE_USB_example.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/limenet1/Work/PCIe_5GRadio_3v1/D20221027/LMS8FE_1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../bin/LMS8FE_USB_example"
	cd /home/limenet1/Work/PCIe_5GRadio_3v1/D20221027/LMS8FE_1/build/LMS8FE/examples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LMS8FE_USB_example.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
LMS8FE/examples/CMakeFiles/LMS8FE_USB_example.dir/build: bin/LMS8FE_USB_example

.PHONY : LMS8FE/examples/CMakeFiles/LMS8FE_USB_example.dir/build

LMS8FE/examples/CMakeFiles/LMS8FE_USB_example.dir/requires: LMS8FE/examples/CMakeFiles/LMS8FE_USB_example.dir/LMS8FE_USB_example.cpp.o.requires

.PHONY : LMS8FE/examples/CMakeFiles/LMS8FE_USB_example.dir/requires

LMS8FE/examples/CMakeFiles/LMS8FE_USB_example.dir/clean:
	cd /home/limenet1/Work/PCIe_5GRadio_3v1/D20221027/LMS8FE_1/build/LMS8FE/examples && $(CMAKE_COMMAND) -P CMakeFiles/LMS8FE_USB_example.dir/cmake_clean.cmake
.PHONY : LMS8FE/examples/CMakeFiles/LMS8FE_USB_example.dir/clean

LMS8FE/examples/CMakeFiles/LMS8FE_USB_example.dir/depend:
	cd /home/limenet1/Work/PCIe_5GRadio_3v1/D20221027/LMS8FE_1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/limenet1/Work/PCIe_5GRadio_3v1/D20221027/LMS8FE_1 /home/limenet1/Work/PCIe_5GRadio_3v1/D20221027/LMS8FE_1/LMS8FE/examples /home/limenet1/Work/PCIe_5GRadio_3v1/D20221027/LMS8FE_1/build /home/limenet1/Work/PCIe_5GRadio_3v1/D20221027/LMS8FE_1/build/LMS8FE/examples /home/limenet1/Work/PCIe_5GRadio_3v1/D20221027/LMS8FE_1/build/LMS8FE/examples/CMakeFiles/LMS8FE_USB_example.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : LMS8FE/examples/CMakeFiles/LMS8FE_USB_example.dir/depend

