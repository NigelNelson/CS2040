//
// Course: CS 2040
// Assignment: Lab 6, 2021
// Date: 4/12/21
// Author: Nigel Nelson
//
// key.h: declares the class Key
//


#ifndef _key_h_
#define _key_h_

#include "item.h"
#include <string>

/**
 * Class that represents a key to exit the maze.
 */
class Key :public Item{
public:
    /**
     * Constructor that sets the provided name
     * to the class variable name.
     */
    Key(std::string name);
    /**
     * Prints the name of the item and "key".
     */
    void printInfo();
    /**
     * Returns "key".
     */
    std::string getType();
};
#endif