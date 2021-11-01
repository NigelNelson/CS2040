//
// Course: CS 2040
// Assignment: Lab 6, 2021
// Date: 4/12/21
// Author: Nigel Nelson
//
// room.h: declares the class Room
//


#ifndef _room_h_
#define _room_h_

#include "collection.h"
#include <string>
class Collection;

/**
 * Class that inherits from Collection;
 * represents a room in the maze
 */
class Room :public Collection{
public:
    /**
     * Constructs a Room instance.
     */
    Room();
    /**
     * Returns an int representing the name of
     * a room.
     */
    int getName();
    /**
     * Sets the name of the room to an int.
     */
    void setName(int name);
    /**
     * Adds a room to the connections array that keeps track of
     * what directions correlates to what room.
     */
    void addConnection(Room* room, std::string direction);
    /**
     * Prints to the console all of a roooms connections.
     */
    void printPossibleDirections();
    /**
     * Returns true if the room has a connecting room
     * in the specified direction.
     */
    bool isValidDirection(std::string direction);
    /**
     * Returns the name of the room that is in the
     * specified direction.
     */
    int getNeighbor(std::string direction);
private:
    /**
     * Returns word but in uppercase form.
     */
    std::string toUpper(std::string word);
    /**
     * Converts a string direction to the array
     * integer representation.
     */
    int directionToInt(std::string direction);
    /**
     * Converts an int to the string direction
     * representation.
     */
    std::string intToDirection(int dir);
    /**
     * The max number of connecting rooms there can
     * be.
     */
    static constexpr int MAX_CONNECTIONS = 4;
    int name;
    Room *connections[MAX_CONNECTIONS];
};
#endif