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
    /**
     * Destructor that is created and labeled as virtual
     * to allow concrete implementations to define their
     * own destructor if neccesary.
     */
    virtual ~Item();
    /**
     * Returns the name of the item.
     */
    std::string getName();
    /**
     * Abstract method that returns the type of item.
     */
    virtual std::string getType() = 0;
    /**
     * Abstract method that prints the name and type of item.
     */
    virtual void printInfo() = 0;
    /**
     * Returns true if the is movable.
     */
    bool canPickup();
protected:
    std::string name;
    bool isMovable;
};
#endif