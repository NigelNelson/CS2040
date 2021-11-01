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
class Rogue;

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
     * parameters.
     */
    GameController();
    /**
     * Destructor that deletes the instances of
     * maze and rogue that were created in the
     * constructor.
     */
    ~GameController();
    /**
     * Continues to update the player on
     * the status of the game and takes input
     * until the game is won or the player
     * quits.
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
     * Prompts and recieves the user's commands.
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
    /**
     * Directs the rogue instance to take a item that
     * is specified from input, and outputs a message according
     * whether the directive was succesful or not.
     */
    void takeItem();
    /**
     * Displays the contents of the rogues bag
     * to the player.
     */
    void showRogueBag();
    /**
     * Attempts to unlock the exit to the maze according to
     * if there is an exit and if the rogue has a key. Prints out
     * statements in regards to if these conditions were met. Returns
     * true if these conditions were met.
     */
    bool rogueUnlockExit();
    /**
     * Checks that the rogue has a teleporters, checks whether the user
     * desired destination room is valid, prints out statements in regards
     * to these conditions, and teleports the rogue if all are true.
     */
    void teleport();
    /**
     * Checks if the rogue has the item, and transfers that item to the current
     * room, and prints out statements mirroring these conditions and funcitions.
     */
    void dropItem();
    /**
     * Prints the corresponding statements to the end of a game, which are
     * customized to the boolean input isWinningGame, which specifies if the
     * player is quitting the game or if the player won.
     */
    void exitGame(bool isWinningGame);
    /**
     * Prints the introductory statement that is echoed after each user directive.
     */
    void printRoomWelcomeMessage();
    /**
     * returns a string of input from the user.
     */
    std::string getStringInput();
    /**
     * Determines if a string is a valid int value.
     */
    bool isValidInt(std::string roomNameString);
    /**
     * Prints the list of valid commands with a short
     * description of each.
     */
    void helpRequest();
    Maze *maze;
    Rogue *rogue;
};
#endif