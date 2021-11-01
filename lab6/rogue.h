//
// Course: CS 2040
// Assignment: Lab 6, 2021
// Date: 4/12/21
// Author: Nigel Nelson
//
// rogue.h: declares the class Rogue
//


#ifndef _rogue_h_
#define _rogue_h_

#include <string>

class Bag;

/**
 * Class that contains information about
 * the game player and the player’s bag.
 */
class Rogue{
public:
    /**
     * Constructor that creates a Rogue with
     * a starting Room.
     */
    Rogue(int startRoom);
    /**
     * Sets the room of the Rogue.
     */
    void setRoom(int room);
    bool unlock();
private:
    int currentRoom;
    Bag* bag;
};
#endif