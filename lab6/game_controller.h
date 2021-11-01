//
// Course: CS 2040
// Assignment: Lab 6, 2021
// Date: 4/12/21
// Author: Nigel Nelson
//
// game_controller.h: declares the class GameController
//


#ifndef _game_controller_h_
#define _game_controller_h_

#include <string>
class Maze;

/**
 * Class that is responsible for running the Rogue by
 * getting input files and user input, and outputting
 * the results, all through the console. Stores a
 * reference to a Maze instance that represents the
 * current state of the game.
 */
class GameController {
public:
    /**
     * Constructor that requires no
     * parameters
     */
    GameController();
    /**
     * Continues to update the player on
     * the status of the game and takes input
     * until the game is won or the player
     * quits
     */
    void playGame();
private:
    /**
     * Returns true if the provided fileName
     * exists and can be opened.
     */
    bool canOpenFile(std::string fileName);
    /**
     * If possible, performs the command
     * specified as a parameter, returns
     * false if the player exits.
     */
    bool enactInput(std::string command);
    /**
     * Returns a word in uppercase form.
     */
    std::string toUpper(std::string word);
    /**
     * Moves the rogue to the specified direction,
     * otherwise explains that it can't move that
     * direction.
     */
    void moveRoom();
    /**
     * Prompts and recieves the user's commands
     */
    bool getInput();
    /**
     * Prompts the user for a file until a valid
     * file is given, then returns that file name.
     */
    std::string getFile();
    /**
     * Outputs to the user the current state of the game.
     */
    void updatePlayer();
    int currentRoom;
    Maze *maze;
};
#endif