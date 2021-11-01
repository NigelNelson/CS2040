//
// Course: CS 2040
// Assignment: Lab 6, 2021
// Date: 4/12/21
// Author: Nigel Nelson
//
// maze.h: declares the class Maze
//


#ifndef _maze_h_
#define _maze_h_

#include <iostream>
#include <string>
class Room;
class Rogue;

/**
 * Class that manages the rooms in the maze
 * and the rogue’s location
 */
class Maze{
public:
    /**
     * Constructor that takes a validated ifstream
     * to read in maze information from a .txt file.
     */
    Maze(std::ifstream *fin);
    /**
     * Returns the int representing the name
     * of the current room.
     */
    int getCurrentRoom();
    /**
     * Prints out to the console the avaiable Rooms
     * to move to.
     */
    void findCurrentDoors();
    /**
     * Navigates the Rogue to the specified string direction.
     * Returns true if the Rogue can move that direction.
     */
    bool moveRoom(std::string direction);
    Rogue* getRogue();
    bool unlock();
private:
    /**
     * Uses an ifstream to parse in the numRooms,
     * set room connections, and read in item info.
     */
    void parseMazeFile(std::ifstream *fin);
    /**
     * Returns a rogue instance.
     */
    Rogue* loadRogue(std::ifstream *fin);
    /**
     * Iterates through all of the rooms to set
     * their names.
     */
    void setRoomNames();
    /**
     * Uses an ifstream to parse in all
     * of the room connection info.
     */
    void loadRoomConnections(std::ifstream *fin);
    /**
     * Uses an ifstream to parse in all
     * of the item info.
     */
    void loadItems(std::ifstream *fin);
    /**
     * Number to subract from an int encoded as
     * a char to convert it to the correct int.
     */
    static constexpr int UNICODE_CONVERSION = 48;
    int numRooms;
    int currentRoom;
    Rogue *rogue;
    Room *rooms;
};
#endif