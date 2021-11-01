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

/**
 * Class that manages the rooms in the maze
 * and the rogue’s location.
 */
class Maze{
public:
    /**
     * Constructor that takes a validated ifstream
     * to read in maze information from a .txt file.
     */
    Maze(std::ifstream &fin);
    /**
     * Destructor that deletes the array of rooms
     * that it creates. 
     */
    ~Maze();
    /**
     * returns true if its array of rooms
     * contains a room with a matching roomName.
     */
    bool hasRoom(int roomName);
    /**
     * Returns the room with the specified name.
     */
    Room* getRoom(int roomName);
    /**
     * Returns the starting room represented by an int
     * in the game configuration file.
     */
    int getStartingRoom();
private:
    /**
     * Uses an ifstream to parse in the numRooms,
     * set room connections, and read in item info.
     */
    void parseMazeFile(std::ifstream &fin);
    /**
     * Iterates through all of the rooms to set
     * their names.
     */
    void setRoomNames();
    /**
     * Uses an ifstream to parse in all
     * of the room connection info.
     */
    void loadRoomConnections(std::ifstream &fin);
    /**
     * Uses an ifstream to parse in all
     * of the item info.
     */
    void loadItems(std::ifstream &fin);
    /**
     * Return true if the the specified name atleast 0,
     * and smaller than the number of rooms in the maze.
     */
    bool isValidRoomName(int roomName);
    /**
     * Number to subract from an int encoded as
     * a char to convert it to the correct int.
     */
    static constexpr int UNICODE_CONVERSION = 48;
    int numRooms;
    int startingRoom;
    Room *rooms;
};
#endif