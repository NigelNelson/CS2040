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

// Class that stores Items.
class Collection{
public:
    /**
     * Constructor that requires no
     * parameters.
     */
    Collection();
    /**
     * Destructor that iterates over every item
     * it contains in order to delete it. Declared virtual
     * to allow concrete classses to implement a desctrutor.
     */
    virtual ~Collection();
    /**
     * uses CreateNewItem() to create a new Item, which
     * is then added to its array of items.
     */
    void addNewItem(std::string itemType, std::string itemName);
    /**
     * Creates a new Item according to the type of item and the
     * name of the item.
     */
    Item* createNewItem(std::string itemType, std::string itemName);
    /**
     * Adds an existing item to its array of items.
     */
    void addItem(Item *item);
    /**
     * Returns true if it contains the specified
     * type of item in its array of items.
     */
    bool hasItemType(std::string itemType);
    /**
     * Returns true if it contains the specified
     * item name in its array of items.
     */
    bool hasItemName(std::string itemName);
    /**
     * Removes an item according to the
     * name of the item.
     */
    Item* removeItem(std::string itemName);
    /**
     * Pure virtual function that leaves it up
     * to concrete implementations how they
     * display all of their items.
     */
    virtual void showContents() = 0;
    /**
     * True if the array of items is not empty.
     */
    bool hasItems();
    /**
     * True if there are less than 10 items in the array.
     */
    bool canAddItem();
    /**
     * Returns the item name according to the
     * specified item type
     */
    std::string getItemName(std::string itemType);
    /**
     * Returns the item type according to the
     * specified item name.
     */
    std::string getItemType(std::string itemName);
    /**
     * Returns true if the item can be picked up.
     */
    bool isItemMovable(std::string itemName);
protected:
    /**
     * Max number of items to be stored.
     */
    static constexpr int MAX_ITEMS = 10;
    int numItems;
    Item* items[MAX_ITEMS];
private:
    /**
     * Helper method to get an item according to the
     * item's name
     */
    Item* getItem(std::string itemName);
};
#endif