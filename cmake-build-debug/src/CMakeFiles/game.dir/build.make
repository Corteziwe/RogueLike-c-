# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /opt/clion-2018.3.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2018.3.4/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/alex-linux/Документы/Projects/aleksandr-trojan-game

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alex-linux/Документы/Projects/aleksandr-trojan-game/cmake-build-debug

# Include any dependencies generated for this target.
include src/CMakeFiles/game.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/game.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/game.dir/flags.make

src/CMakeFiles/game.dir/game/Editor.cpp.o: src/CMakeFiles/game.dir/flags.make
src/CMakeFiles/game.dir/game/Editor.cpp.o: ../src/game/Editor.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex-linux/Документы/Projects/aleksandr-trojan-game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/game.dir/game/Editor.cpp.o"
	cd /home/alex-linux/Документы/Projects/aleksandr-trojan-game/cmake-build-debug/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/game.dir/game/Editor.cpp.o -c /home/alex-linux/Документы/Projects/aleksandr-trojan-game/src/game/Editor.cpp

src/CMakeFiles/game.dir/game/Editor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/game/Editor.cpp.i"
	cd /home/alex-linux/Документы/Projects/aleksandr-trojan-game/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex-linux/Документы/Projects/aleksandr-trojan-game/src/game/Editor.cpp > CMakeFiles/game.dir/game/Editor.cpp.i

src/CMakeFiles/game.dir/game/Editor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/game/Editor.cpp.s"
	cd /home/alex-linux/Документы/Projects/aleksandr-trojan-game/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex-linux/Документы/Projects/aleksandr-trojan-game/src/game/Editor.cpp -o CMakeFiles/game.dir/game/Editor.cpp.s

src/CMakeFiles/game.dir/game/Engine.cpp.o: src/CMakeFiles/game.dir/flags.make
src/CMakeFiles/game.dir/game/Engine.cpp.o: ../src/game/Engine.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex-linux/Документы/Projects/aleksandr-trojan-game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/game.dir/game/Engine.cpp.o"
	cd /home/alex-linux/Документы/Projects/aleksandr-trojan-game/cmake-build-debug/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/game.dir/game/Engine.cpp.o -c /home/alex-linux/Документы/Projects/aleksandr-trojan-game/src/game/Engine.cpp

src/CMakeFiles/game.dir/game/Engine.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/game/Engine.cpp.i"
	cd /home/alex-linux/Документы/Projects/aleksandr-trojan-game/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex-linux/Документы/Projects/aleksandr-trojan-game/src/game/Engine.cpp > CMakeFiles/game.dir/game/Engine.cpp.i

src/CMakeFiles/game.dir/game/Engine.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/game/Engine.cpp.s"
	cd /home/alex-linux/Документы/Projects/aleksandr-trojan-game/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex-linux/Документы/Projects/aleksandr-trojan-game/src/game/Engine.cpp -o CMakeFiles/game.dir/game/Engine.cpp.s

src/CMakeFiles/game.dir/game/GameObject.cpp.o: src/CMakeFiles/game.dir/flags.make
src/CMakeFiles/game.dir/game/GameObject.cpp.o: ../src/game/GameObject.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex-linux/Документы/Projects/aleksandr-trojan-game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/game.dir/game/GameObject.cpp.o"
	cd /home/alex-linux/Документы/Projects/aleksandr-trojan-game/cmake-build-debug/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/game.dir/game/GameObject.cpp.o -c /home/alex-linux/Документы/Projects/aleksandr-trojan-game/src/game/GameObject.cpp

src/CMakeFiles/game.dir/game/GameObject.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/game/GameObject.cpp.i"
	cd /home/alex-linux/Документы/Projects/aleksandr-trojan-game/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex-linux/Документы/Projects/aleksandr-trojan-game/src/game/GameObject.cpp > CMakeFiles/game.dir/game/GameObject.cpp.i

src/CMakeFiles/game.dir/game/GameObject.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/game/GameObject.cpp.s"
	cd /home/alex-linux/Документы/Projects/aleksandr-trojan-game/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex-linux/Документы/Projects/aleksandr-trojan-game/src/game/GameObject.cpp -o CMakeFiles/game.dir/game/GameObject.cpp.s

src/CMakeFiles/game.dir/game/Level.cpp.o: src/CMakeFiles/game.dir/flags.make
src/CMakeFiles/game.dir/game/Level.cpp.o: ../src/game/Level.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex-linux/Документы/Projects/aleksandr-trojan-game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/CMakeFiles/game.dir/game/Level.cpp.o"
	cd /home/alex-linux/Документы/Projects/aleksandr-trojan-game/cmake-build-debug/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/game.dir/game/Level.cpp.o -c /home/alex-linux/Документы/Projects/aleksandr-trojan-game/src/game/Level.cpp

src/CMakeFiles/game.dir/game/Level.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/game/Level.cpp.i"
	cd /home/alex-linux/Документы/Projects/aleksandr-trojan-game/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex-linux/Документы/Projects/aleksandr-trojan-game/src/game/Level.cpp > CMakeFiles/game.dir/game/Level.cpp.i

src/CMakeFiles/game.dir/game/Level.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/game/Level.cpp.s"
	cd /home/alex-linux/Документы/Projects/aleksandr-trojan-game/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex-linux/Документы/Projects/aleksandr-trojan-game/src/game/Level.cpp -o CMakeFiles/game.dir/game/Level.cpp.s

src/CMakeFiles/game.dir/game/Menu.cpp.o: src/CMakeFiles/game.dir/flags.make
src/CMakeFiles/game.dir/game/Menu.cpp.o: ../src/game/Menu.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex-linux/Документы/Projects/aleksandr-trojan-game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/CMakeFiles/game.dir/game/Menu.cpp.o"
	cd /home/alex-linux/Документы/Projects/aleksandr-trojan-game/cmake-build-debug/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/game.dir/game/Menu.cpp.o -c /home/alex-linux/Документы/Projects/aleksandr-trojan-game/src/game/Menu.cpp

src/CMakeFiles/game.dir/game/Menu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/game/Menu.cpp.i"
	cd /home/alex-linux/Документы/Projects/aleksandr-trojan-game/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex-linux/Документы/Projects/aleksandr-trojan-game/src/game/Menu.cpp > CMakeFiles/game.dir/game/Menu.cpp.i

src/CMakeFiles/game.dir/game/Menu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/game/Menu.cpp.s"
	cd /home/alex-linux/Документы/Projects/aleksandr-trojan-game/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex-linux/Документы/Projects/aleksandr-trojan-game/src/game/Menu.cpp -o CMakeFiles/game.dir/game/Menu.cpp.s

src/CMakeFiles/game.dir/game/Position.cpp.o: src/CMakeFiles/game.dir/flags.make
src/CMakeFiles/game.dir/game/Position.cpp.o: ../src/game/Position.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex-linux/Документы/Projects/aleksandr-trojan-game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/CMakeFiles/game.dir/game/Position.cpp.o"
	cd /home/alex-linux/Документы/Projects/aleksandr-trojan-game/cmake-build-debug/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/game.dir/game/Position.cpp.o -c /home/alex-linux/Документы/Projects/aleksandr-trojan-game/src/game/Position.cpp

src/CMakeFiles/game.dir/game/Position.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/game/Position.cpp.i"
	cd /home/alex-linux/Документы/Projects/aleksandr-trojan-game/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex-linux/Документы/Projects/aleksandr-trojan-game/src/game/Position.cpp > CMakeFiles/game.dir/game/Position.cpp.i

src/CMakeFiles/game.dir/game/Position.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/game/Position.cpp.s"
	cd /home/alex-linux/Документы/Projects/aleksandr-trojan-game/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex-linux/Документы/Projects/aleksandr-trojan-game/src/game/Position.cpp -o CMakeFiles/game.dir/game/Position.cpp.s

src/CMakeFiles/game.dir/game/Systems/CollisionSystem.cpp.o: src/CMakeFiles/game.dir/flags.make
src/CMakeFiles/game.dir/game/Systems/CollisionSystem.cpp.o: ../src/game/Systems/CollisionSystem.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex-linux/Документы/Projects/aleksandr-trojan-game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/CMakeFiles/game.dir/game/Systems/CollisionSystem.cpp.o"
	cd /home/alex-linux/Документы/Projects/aleksandr-trojan-game/cmake-build-debug/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/game.dir/game/Systems/CollisionSystem.cpp.o -c /home/alex-linux/Документы/Projects/aleksandr-trojan-game/src/game/Systems/CollisionSystem.cpp

src/CMakeFiles/game.dir/game/Systems/CollisionSystem.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/game/Systems/CollisionSystem.cpp.i"
	cd /home/alex-linux/Документы/Projects/aleksandr-trojan-game/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex-linux/Документы/Projects/aleksandr-trojan-game/src/game/Systems/CollisionSystem.cpp > CMakeFiles/game.dir/game/Systems/CollisionSystem.cpp.i

src/CMakeFiles/game.dir/game/Systems/CollisionSystem.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/game/Systems/CollisionSystem.cpp.s"
	cd /home/alex-linux/Документы/Projects/aleksandr-trojan-game/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex-linux/Документы/Projects/aleksandr-trojan-game/src/game/Systems/CollisionSystem.cpp -o CMakeFiles/game.dir/game/Systems/CollisionSystem.cpp.s

src/CMakeFiles/game.dir/game/Systems/LevelSystem.cpp.o: src/CMakeFiles/game.dir/flags.make
src/CMakeFiles/game.dir/game/Systems/LevelSystem.cpp.o: ../src/game/Systems/LevelSystem.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex-linux/Документы/Projects/aleksandr-trojan-game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object src/CMakeFiles/game.dir/game/Systems/LevelSystem.cpp.o"
	cd /home/alex-linux/Документы/Projects/aleksandr-trojan-game/cmake-build-debug/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/game.dir/game/Systems/LevelSystem.cpp.o -c /home/alex-linux/Документы/Projects/aleksandr-trojan-game/src/game/Systems/LevelSystem.cpp

src/CMakeFiles/game.dir/game/Systems/LevelSystem.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/game/Systems/LevelSystem.cpp.i"
	cd /home/alex-linux/Документы/Projects/aleksandr-trojan-game/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex-linux/Документы/Projects/aleksandr-trojan-game/src/game/Systems/LevelSystem.cpp > CMakeFiles/game.dir/game/Systems/LevelSystem.cpp.i

src/CMakeFiles/game.dir/game/Systems/LevelSystem.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/game/Systems/LevelSystem.cpp.s"
	cd /home/alex-linux/Документы/Projects/aleksandr-trojan-game/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex-linux/Документы/Projects/aleksandr-trojan-game/src/game/Systems/LevelSystem.cpp -o CMakeFiles/game.dir/game/Systems/LevelSystem.cpp.s

src/CMakeFiles/game.dir/game/Systems/MovementSystem.cpp.o: src/CMakeFiles/game.dir/flags.make
src/CMakeFiles/game.dir/game/Systems/MovementSystem.cpp.o: ../src/game/Systems/MovementSystem.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex-linux/Документы/Projects/aleksandr-trojan-game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object src/CMakeFiles/game.dir/game/Systems/MovementSystem.cpp.o"
	cd /home/alex-linux/Документы/Projects/aleksandr-trojan-game/cmake-build-debug/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/game.dir/game/Systems/MovementSystem.cpp.o -c /home/alex-linux/Документы/Projects/aleksandr-trojan-game/src/game/Systems/MovementSystem.cpp

src/CMakeFiles/game.dir/game/Systems/MovementSystem.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/game/Systems/MovementSystem.cpp.i"
	cd /home/alex-linux/Документы/Projects/aleksandr-trojan-game/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex-linux/Документы/Projects/aleksandr-trojan-game/src/game/Systems/MovementSystem.cpp > CMakeFiles/game.dir/game/Systems/MovementSystem.cpp.i

src/CMakeFiles/game.dir/game/Systems/MovementSystem.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/game/Systems/MovementSystem.cpp.s"
	cd /home/alex-linux/Документы/Projects/aleksandr-trojan-game/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex-linux/Документы/Projects/aleksandr-trojan-game/src/game/Systems/MovementSystem.cpp -o CMakeFiles/game.dir/game/Systems/MovementSystem.cpp.s

src/CMakeFiles/game.dir/game/main.cpp.o: src/CMakeFiles/game.dir/flags.make
src/CMakeFiles/game.dir/game/main.cpp.o: ../src/game/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex-linux/Документы/Projects/aleksandr-trojan-game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object src/CMakeFiles/game.dir/game/main.cpp.o"
	cd /home/alex-linux/Документы/Projects/aleksandr-trojan-game/cmake-build-debug/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/game.dir/game/main.cpp.o -c /home/alex-linux/Документы/Projects/aleksandr-trojan-game/src/game/main.cpp

src/CMakeFiles/game.dir/game/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/game/main.cpp.i"
	cd /home/alex-linux/Документы/Projects/aleksandr-trojan-game/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex-linux/Документы/Projects/aleksandr-trojan-game/src/game/main.cpp > CMakeFiles/game.dir/game/main.cpp.i

src/CMakeFiles/game.dir/game/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/game/main.cpp.s"
	cd /home/alex-linux/Документы/Projects/aleksandr-trojan-game/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex-linux/Документы/Projects/aleksandr-trojan-game/src/game/main.cpp -o CMakeFiles/game.dir/game/main.cpp.s

# Object files for target game
game_OBJECTS = \
"CMakeFiles/game.dir/game/Editor.cpp.o" \
"CMakeFiles/game.dir/game/Engine.cpp.o" \
"CMakeFiles/game.dir/game/GameObject.cpp.o" \
"CMakeFiles/game.dir/game/Level.cpp.o" \
"CMakeFiles/game.dir/game/Menu.cpp.o" \
"CMakeFiles/game.dir/game/Position.cpp.o" \
"CMakeFiles/game.dir/game/Systems/CollisionSystem.cpp.o" \
"CMakeFiles/game.dir/game/Systems/LevelSystem.cpp.o" \
"CMakeFiles/game.dir/game/Systems/MovementSystem.cpp.o" \
"CMakeFiles/game.dir/game/main.cpp.o"

# External object files for target game
game_EXTERNAL_OBJECTS =

src/game: src/CMakeFiles/game.dir/game/Editor.cpp.o
src/game: src/CMakeFiles/game.dir/game/Engine.cpp.o
src/game: src/CMakeFiles/game.dir/game/GameObject.cpp.o
src/game: src/CMakeFiles/game.dir/game/Level.cpp.o
src/game: src/CMakeFiles/game.dir/game/Menu.cpp.o
src/game: src/CMakeFiles/game.dir/game/Position.cpp.o
src/game: src/CMakeFiles/game.dir/game/Systems/CollisionSystem.cpp.o
src/game: src/CMakeFiles/game.dir/game/Systems/LevelSystem.cpp.o
src/game: src/CMakeFiles/game.dir/game/Systems/MovementSystem.cpp.o
src/game: src/CMakeFiles/game.dir/game/main.cpp.o
src/game: src/CMakeFiles/game.dir/build.make
src/game: ../lib/BearLibTerminal/Linux64/libBearLibTerminal.so
src/game: src/CMakeFiles/game.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alex-linux/Документы/Projects/aleksandr-trojan-game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX executable game"
	cd /home/alex-linux/Документы/Projects/aleksandr-trojan-game/cmake-build-debug/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/game.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/game.dir/build: src/game

.PHONY : src/CMakeFiles/game.dir/build

src/CMakeFiles/game.dir/clean:
	cd /home/alex-linux/Документы/Projects/aleksandr-trojan-game/cmake-build-debug/src && $(CMAKE_COMMAND) -P CMakeFiles/game.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/game.dir/clean

src/CMakeFiles/game.dir/depend:
	cd /home/alex-linux/Документы/Projects/aleksandr-trojan-game/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alex-linux/Документы/Projects/aleksandr-trojan-game /home/alex-linux/Документы/Projects/aleksandr-trojan-game/src /home/alex-linux/Документы/Projects/aleksandr-trojan-game/cmake-build-debug /home/alex-linux/Документы/Projects/aleksandr-trojan-game/cmake-build-debug/src /home/alex-linux/Документы/Projects/aleksandr-trojan-game/cmake-build-debug/src/CMakeFiles/game.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/game.dir/depend

