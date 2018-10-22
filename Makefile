# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_SOURCE_DIR = /home/xb5/Project/NNet-assistant

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/xb5/Project/NNet-assistant

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/usr/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# Special rule for the target test
test:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running tests..."
	/usr/bin/ctest --force-new-ctest-process $(ARGS)
.PHONY : test

# Special rule for the target test
test/fast: test

.PHONY : test/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/xb5/Project/NNet-assistant/CMakeFiles /home/xb5/Project/NNet-assistant/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/xb5/Project/NNet-assistant/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named AutoUnitTests

# Build rule for target.
AutoUnitTests: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 AutoUnitTests
.PHONY : AutoUnitTests

# fast build rule for target.
AutoUnitTests/fast:
	$(MAKE) -f CMakeFiles/AutoUnitTests.dir/build.make CMakeFiles/AutoUnitTests.dir/build
.PHONY : AutoUnitTests/fast

#=============================================================================
# Target rules for targets named proj_obj.o

# Build rule for target.
proj_obj.o: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 proj_obj.o
.PHONY : proj_obj.o

# fast build rule for target.
proj_obj.o/fast:
	$(MAKE) -f CMakeFiles/proj_obj.o.dir/build.make CMakeFiles/proj_obj.o.dir/build
.PHONY : proj_obj.o/fast

#=============================================================================
# Target rules for targets named main.out

# Build rule for target.
main.out: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 main.out
.PHONY : main.out

# fast build rule for target.
main.out/fast:
	$(MAKE) -f CMakeFiles/main.out.dir/build.make CMakeFiles/main.out.dir/build
.PHONY : main.out/fast

#=============================================================================
# Target rules for targets named test_output

# Build rule for target.
test_output: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 test_output
.PHONY : test_output

# fast build rule for target.
test_output/fast:
	$(MAKE) -f CMakeFiles/test_output.dir/build.make CMakeFiles/test_output.dir/build
.PHONY : test_output/fast

AutoUnitTests.o: AutoUnitTests.cpp.o

.PHONY : AutoUnitTests.o

# target to build an object file
AutoUnitTests.cpp.o:
	$(MAKE) -f CMakeFiles/AutoUnitTests.dir/build.make CMakeFiles/AutoUnitTests.dir/AutoUnitTests.cpp.o
.PHONY : AutoUnitTests.cpp.o

AutoUnitTests.i: AutoUnitTests.cpp.i

.PHONY : AutoUnitTests.i

# target to preprocess a source file
AutoUnitTests.cpp.i:
	$(MAKE) -f CMakeFiles/AutoUnitTests.dir/build.make CMakeFiles/AutoUnitTests.dir/AutoUnitTests.cpp.i
.PHONY : AutoUnitTests.cpp.i

AutoUnitTests.s: AutoUnitTests.cpp.s

.PHONY : AutoUnitTests.s

# target to generate assembly for a file
AutoUnitTests.cpp.s:
	$(MAKE) -f CMakeFiles/AutoUnitTests.dir/build.make CMakeFiles/AutoUnitTests.dir/AutoUnitTests.cpp.s
.PHONY : AutoUnitTests.cpp.s

src/tig.o: src/tig.cpp.o

.PHONY : src/tig.o

# target to build an object file
src/tig.cpp.o:
	$(MAKE) -f CMakeFiles/proj_obj.o.dir/build.make CMakeFiles/proj_obj.o.dir/src/tig.cpp.o
	$(MAKE) -f CMakeFiles/main.out.dir/build.make CMakeFiles/main.out.dir/src/tig.cpp.o
.PHONY : src/tig.cpp.o

src/tig.i: src/tig.cpp.i

.PHONY : src/tig.i

# target to preprocess a source file
src/tig.cpp.i:
	$(MAKE) -f CMakeFiles/proj_obj.o.dir/build.make CMakeFiles/proj_obj.o.dir/src/tig.cpp.i
	$(MAKE) -f CMakeFiles/main.out.dir/build.make CMakeFiles/main.out.dir/src/tig.cpp.i
.PHONY : src/tig.cpp.i

src/tig.s: src/tig.cpp.s

.PHONY : src/tig.s

# target to generate assembly for a file
src/tig.cpp.s:
	$(MAKE) -f CMakeFiles/proj_obj.o.dir/build.make CMakeFiles/proj_obj.o.dir/src/tig.cpp.s
	$(MAKE) -f CMakeFiles/main.out.dir/build.make CMakeFiles/main.out.dir/src/tig.cpp.s
.PHONY : src/tig.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... edit_cache"
	@echo "... test"
	@echo "... AutoUnitTests"
	@echo "... proj_obj.o"
	@echo "... main.out"
	@echo "... test_output"
	@echo "... AutoUnitTests.o"
	@echo "... AutoUnitTests.i"
	@echo "... AutoUnitTests.s"
	@echo "... src/tig.o"
	@echo "... src/tig.i"
	@echo "... src/tig.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

