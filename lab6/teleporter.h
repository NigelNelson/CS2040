//
// Course: CS 2040
// Assignment: Lab 6, 2021
// Date: 4/12/21
// Author: Nigel Nelson
//
// teleporter.h: declares the class Teleporter
//


#ifndef _teleporter_h_
#define _teleporter_h_

#include "item.h"
#include <string>

/**
 * Class that  inherits from item:
 * represents a portable teleporter
 */
class Teleporter :public Item{
public:
    /**
     * Constructor that sets the provided name
     * to the class variable name.
     */
    Teleporter(std::string name);
    void printInfo();
    std::string getType();
private:
};
#endif