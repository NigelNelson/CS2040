//
// Course: CS 2040
// Assignment: Lab 6, 2021
// Date: 4/12/21
// Author: Nigel Nelson
//
// bag.h: declares the class Bag
//


#ifndef _bag_h_
#define _bag_h_

#include "collection.h"
#include <string>
class Collection;
class Item;

// Class that represents a bag that contains Items.
class Bag :public Collection{
public:
    /**
     * Constructor that requires no
     * parameters.
     */
    Bag();
    /**
     * Iterates all of the items that it contains
     * in order to call each items printInfo() method.
     */
    void showContents();
    /**
     * Uses to the inheritted remove() method to
     * remove and item from its array of item, but then
     * deletes that item to ensure there are no memory leaks
     * This is called to remove items from the maze.
     */
    void deleteItem(std::string itemName);
};
#endif