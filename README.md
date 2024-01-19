Staresiod

Team Members:
Joey David (ID: 12115771)
Ugo Poupon (ID: 12020982)

Project Repository:
Link to the project repository on Forge

Overview
Staresiod is a survival game where a player controls a spaceship in an asteroid field. The objective is to stay alive as long as possible by destroying asteroids to maximize the score. The player can move on the screen and shoot projectiles to destroy asteroids of varying sizes.

Controls
z: Move forward
q: Turn left
d: Turn right
s: Brake/Reverse
v: Shoot a projectile

Power-ups
Power-ups appear regularly on the field. To activate a power-up, the player must make contact between the spaceship and the power-up. There are four types of power-ups, each with specific functionalities:

Instantly destroy all asteroids on the field at the moment of power-up collection.
Temporarily assign a "drill" mode to the ship's projectiles, making them indestructible and destroying everything they come in contact with.
Temporarily assign an "indestructible" mode to the ship, allowing it to destroy asteroids by touching them during the power-up activation interval.
Temporarily assign a "speed" mode to the ship, making it twice as fast during the power-up activation interval.
Multiplayer Mode
When selecting the game mode in the menu, it is possible to choose multiplayer mode. A competitive mode starts where two ships must achieve a higher score than the opponent. Controls for the second ship (pink) are as follows:

o: Move forward
k: Turn left
l: Turn right
m: Brake/Reverse
p: Shoot a projectile
Compilation/Execution
Executables can be generated or updated with the make command. Three main functionalities are implemented as executables:

bin/jeuSDL: Launch the game with SDL display.
bin/jeuTexte: Launch the game with text display (limited features).
bin/test: Run regression tests for all main classes of the game.

Directory Organization
bin/: Contains the executables.
data/: Contains assets required for SDL mode execution: sprites, textures, animations, etc. Also includes the highscore.txt file, where the highest score achieved in the game is stored and updated.
doc/: Contains Doxygen documentation in doc/html, UML class diagram, Gantt chart, and the oral presentation for the defense.
obj/: Contains object files needed for executable creation.
src/: Contains the game code (.h and .cpp files).
The root directory also contains a makefile and this README.md file.