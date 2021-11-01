//
// Course: CS 2040
// Assignment: Lab 6, 2021
// Date: 4/12/21
// Author: Nigel Nelson
//
// exit.h: declares the class Exit
//


#ifndef _exit_h_
#define _exit_h_

#include "item.h"
#include <string>

// Item that allows a rogue to exit the maze
class Exit :public Item{
public:
    /**
     * Constructor that sets the provided name
     * to the class variable name.
     */
    Exit(std::string name);
    void printInfo();
    std::string getType();
private:
};
#endif