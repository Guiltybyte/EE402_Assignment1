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
CMAKE_COMMAND = /opt/cmake-3.17.2-Linux-x86_64/bin/cmake

# The command to remove a file.
RM = /opt/cmake-3.17.2-Linux-x86_64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/guilty/ee/402/Assignments/1/code

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/guilty/ee/402/Assignments/1/code/build

# Include any dependencies generated for this target.
include CMakeFiles/yugioh.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/yugioh.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/yugioh.dir/flags.make

CMakeFiles/yugioh.dir/src/EffectMonster.cpp.o: CMakeFiles/yugioh.dir/flags.make
CMakeFiles/yugioh.dir/src/EffectMonster.cpp.o: ../src/EffectMonster.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/guilty/ee/402/Assignments/1/code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/yugioh.dir/src/EffectMonster.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/yugioh.dir/src/EffectMonster.cpp.o -c /home/guilty/ee/402/Assignments/1/code/src/EffectMonster.cpp

CMakeFiles/yugioh.dir/src/EffectMonster.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/yugioh.dir/src/EffectMonster.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/guilty/ee/402/Assignments/1/code/src/EffectMonster.cpp > CMakeFiles/yugioh.dir/src/EffectMonster.cpp.i

CMakeFiles/yugioh.dir/src/EffectMonster.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/yugioh.dir/src/EffectMonster.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/guilty/ee/402/Assignments/1/code/src/EffectMonster.cpp -o CMakeFiles/yugioh.dir/src/EffectMonster.cpp.s

CMakeFiles/yugioh.dir/src/GameLogic.cpp.o: CMakeFiles/yugioh.dir/flags.make
CMakeFiles/yugioh.dir/src/GameLogic.cpp.o: ../src/GameLogic.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/guilty/ee/402/Assignments/1/code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/yugioh.dir/src/GameLogic.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/yugioh.dir/src/GameLogic.cpp.o -c /home/guilty/ee/402/Assignments/1/code/src/GameLogic.cpp

CMakeFiles/yugioh.dir/src/GameLogic.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/yugioh.dir/src/GameLogic.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/guilty/ee/402/Assignments/1/code/src/GameLogic.cpp > CMakeFiles/yugioh.dir/src/GameLogic.cpp.i

CMakeFiles/yugioh.dir/src/GameLogic.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/yugioh.dir/src/GameLogic.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/guilty/ee/402/Assignments/1/code/src/GameLogic.cpp -o CMakeFiles/yugioh.dir/src/GameLogic.cpp.s

CMakeFiles/yugioh.dir/src/MonsterCard.cpp.o: CMakeFiles/yugioh.dir/flags.make
CMakeFiles/yugioh.dir/src/MonsterCard.cpp.o: ../src/MonsterCard.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/guilty/ee/402/Assignments/1/code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/yugioh.dir/src/MonsterCard.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/yugioh.dir/src/MonsterCard.cpp.o -c /home/guilty/ee/402/Assignments/1/code/src/MonsterCard.cpp

CMakeFiles/yugioh.dir/src/MonsterCard.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/yugioh.dir/src/MonsterCard.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/guilty/ee/402/Assignments/1/code/src/MonsterCard.cpp > CMakeFiles/yugioh.dir/src/MonsterCard.cpp.i

CMakeFiles/yugioh.dir/src/MonsterCard.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/yugioh.dir/src/MonsterCard.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/guilty/ee/402/Assignments/1/code/src/MonsterCard.cpp -o CMakeFiles/yugioh.dir/src/MonsterCard.cpp.s

CMakeFiles/yugioh.dir/src/NormalMonster.cpp.o: CMakeFiles/yugioh.dir/flags.make
CMakeFiles/yugioh.dir/src/NormalMonster.cpp.o: ../src/NormalMonster.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/guilty/ee/402/Assignments/1/code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/yugioh.dir/src/NormalMonster.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/yugioh.dir/src/NormalMonster.cpp.o -c /home/guilty/ee/402/Assignments/1/code/src/NormalMonster.cpp

CMakeFiles/yugioh.dir/src/NormalMonster.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/yugioh.dir/src/NormalMonster.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/guilty/ee/402/Assignments/1/code/src/NormalMonster.cpp > CMakeFiles/yugioh.dir/src/NormalMonster.cpp.i

CMakeFiles/yugioh.dir/src/NormalMonster.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/yugioh.dir/src/NormalMonster.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/guilty/ee/402/Assignments/1/code/src/NormalMonster.cpp -o CMakeFiles/yugioh.dir/src/NormalMonster.cpp.s

CMakeFiles/yugioh.dir/src/PendulumMonster.cpp.o: CMakeFiles/yugioh.dir/flags.make
CMakeFiles/yugioh.dir/src/PendulumMonster.cpp.o: ../src/PendulumMonster.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/guilty/ee/402/Assignments/1/code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/yugioh.dir/src/PendulumMonster.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/yugioh.dir/src/PendulumMonster.cpp.o -c /home/guilty/ee/402/Assignments/1/code/src/PendulumMonster.cpp

CMakeFiles/yugioh.dir/src/PendulumMonster.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/yugioh.dir/src/PendulumMonster.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/guilty/ee/402/Assignments/1/code/src/PendulumMonster.cpp > CMakeFiles/yugioh.dir/src/PendulumMonster.cpp.i

CMakeFiles/yugioh.dir/src/PendulumMonster.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/yugioh.dir/src/PendulumMonster.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/guilty/ee/402/Assignments/1/code/src/PendulumMonster.cpp -o CMakeFiles/yugioh.dir/src/PendulumMonster.cpp.s

CMakeFiles/yugioh.dir/src/SpellCard.cpp.o: CMakeFiles/yugioh.dir/flags.make
CMakeFiles/yugioh.dir/src/SpellCard.cpp.o: ../src/SpellCard.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/guilty/ee/402/Assignments/1/code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/yugioh.dir/src/SpellCard.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/yugioh.dir/src/SpellCard.cpp.o -c /home/guilty/ee/402/Assignments/1/code/src/SpellCard.cpp

CMakeFiles/yugioh.dir/src/SpellCard.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/yugioh.dir/src/SpellCard.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/guilty/ee/402/Assignments/1/code/src/SpellCard.cpp > CMakeFiles/yugioh.dir/src/SpellCard.cpp.i

CMakeFiles/yugioh.dir/src/SpellCard.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/yugioh.dir/src/SpellCard.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/guilty/ee/402/Assignments/1/code/src/SpellCard.cpp -o CMakeFiles/yugioh.dir/src/SpellCard.cpp.s

CMakeFiles/yugioh.dir/src/TrapCard.cpp.o: CMakeFiles/yugioh.dir/flags.make
CMakeFiles/yugioh.dir/src/TrapCard.cpp.o: ../src/TrapCard.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/guilty/ee/402/Assignments/1/code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/yugioh.dir/src/TrapCard.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/yugioh.dir/src/TrapCard.cpp.o -c /home/guilty/ee/402/Assignments/1/code/src/TrapCard.cpp

CMakeFiles/yugioh.dir/src/TrapCard.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/yugioh.dir/src/TrapCard.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/guilty/ee/402/Assignments/1/code/src/TrapCard.cpp > CMakeFiles/yugioh.dir/src/TrapCard.cpp.i

CMakeFiles/yugioh.dir/src/TrapCard.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/yugioh.dir/src/TrapCard.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/guilty/ee/402/Assignments/1/code/src/TrapCard.cpp -o CMakeFiles/yugioh.dir/src/TrapCard.cpp.s

# Object files for target yugioh
yugioh_OBJECTS = \
"CMakeFiles/yugioh.dir/src/EffectMonster.cpp.o" \
"CMakeFiles/yugioh.dir/src/GameLogic.cpp.o" \
"CMakeFiles/yugioh.dir/src/MonsterCard.cpp.o" \
"CMakeFiles/yugioh.dir/src/NormalMonster.cpp.o" \
"CMakeFiles/yugioh.dir/src/PendulumMonster.cpp.o" \
"CMakeFiles/yugioh.dir/src/SpellCard.cpp.o" \
"CMakeFiles/yugioh.dir/src/TrapCard.cpp.o"

# External object files for target yugioh
yugioh_EXTERNAL_OBJECTS =

yugioh: CMakeFiles/yugioh.dir/src/EffectMonster.cpp.o
yugioh: CMakeFiles/yugioh.dir/src/GameLogic.cpp.o
yugioh: CMakeFiles/yugioh.dir/src/MonsterCard.cpp.o
yugioh: CMakeFiles/yugioh.dir/src/NormalMonster.cpp.o
yugioh: CMakeFiles/yugioh.dir/src/PendulumMonster.cpp.o
yugioh: CMakeFiles/yugioh.dir/src/SpellCard.cpp.o
yugioh: CMakeFiles/yugioh.dir/src/TrapCard.cpp.o
yugioh: CMakeFiles/yugioh.dir/build.make
yugioh: CMakeFiles/yugioh.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/guilty/ee/402/Assignments/1/code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable yugioh"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/yugioh.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/yugioh.dir/build: yugioh

.PHONY : CMakeFiles/yugioh.dir/build

CMakeFiles/yugioh.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/yugioh.dir/cmake_clean.cmake
.PHONY : CMakeFiles/yugioh.dir/clean

CMakeFiles/yugioh.dir/depend:
	cd /home/guilty/ee/402/Assignments/1/code/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/guilty/ee/402/Assignments/1/code /home/guilty/ee/402/Assignments/1/code /home/guilty/ee/402/Assignments/1/code/build /home/guilty/ee/402/Assignments/1/code/build /home/guilty/ee/402/Assignments/1/code/build/CMakeFiles/yugioh.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/yugioh.dir/depend
