//
// Course: CS 2040
// Assignment: Lab 6, 2021
// Date: 4/12/21
// Author: Nigel Nelson
//
// item.h: declares the class Item
//


#ifndef _item_h_
#define _item_h_

#include <string>

/**
 * Class that represents an object that
 * can be taken by a rogue and provides
 * utility.
 */
class Item{
public:
    /**
     * Constructor that sets the provided name
     * to the class variable name.
     */
    Item(std::string name);
    std::string getName();
    virtual std::string getType() = 0;
    virtual void printInfo() = 0;
protected:
    std::string name;
    bool isMovable;
};
#endif