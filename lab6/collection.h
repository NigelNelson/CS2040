//
// Course: CS 2040
// Assignment: Lab 6, 2021
// Date: 4/12/21
// Author: Nigel Nelson
//
// collection.h: declares the class Collection
//


#ifndef _collection_h_
#define _collection_h_

#include <string>
class Item;

// Class that stores Items
class Collection{
public:
    /**
     * Constructor that requires no
     * parameters
     */
    Collection();
    void addItem(std::string itemType, std::string itemName);
    bool hasItem(std::string itemType);
private:
    /**
     * Max number of items to be stored.
     */
    static constexpr int MAX_ITEMS = 10;
    int numItems;
    Item* items[MAX_ITEMS];
};
#endif