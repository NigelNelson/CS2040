//
// Course: CS 2040
// Assignment: Lab 6, 2021
// Date: 4/12/21
// Author: Nigel Nelson
//
// treasure.h: declares the class Treasure
//


#ifndef _treasure_h_
#define _treasure_h_

#include "item.h"
#include <string>

/**
 * Class that inherits from item:
 * represents a collectable treasure
 */
class Treasure :public Item{
public:
    /**
     * Constructor that sets the provided name
     * to the class variable name.
     */
    Treasure(std::string name);
    void printInfo();
    std::string getType();
private:
};
#endif