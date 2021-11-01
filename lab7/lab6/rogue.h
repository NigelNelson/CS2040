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
class Room;

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
    Rogue(Room *startRoom);
    /**
     * Destructor that deletes the bag it creates.
     */
    ~Rogue();
    /**
     * returns true if the item is in the currrent room
     * and can be picked up. If these conditions are met,
     * the item is removed from the current room and placed
     * in the rogue's bag.
     */
    bool pickUpItem(std::string itemName);
    /**
     * Removes the item fom the rogues bag
     * and puts it in the current room.
     */
    void dropItem(std::string itemName);
    /**
     * Returns true if the rogues bag contains the
     * specified item name.
     */
    bool hasItemName(std::string itemName);
    /**
     * Prints the contents of the rogue's bag.
     */
    void showBag();
    /**
     * Returns true if there are no items in the
     * rogue's bag.
     */
    bool isBagEmpty();
    /**
     * Returns the name of the item in the rogue's
     * bag that matches the specifed type of item.
     */
    std::string getItemName(std::string itemType);
    /**
     * Relocates the rogue to the specified destination room,
     * and deletes the teleporter item.
     */
    void useTeleporter(Room *destinationRoom);
    /**
     * returns true if an item with a matching name is
     * contained in the rogue's bag.
     */
    bool hasItemType(std::string itemType);
    /**
     * Prints out all of the names of items in the rogues bag
     * that are of treasure type.
     */
    void printTreasures();
    /**
     * Returns true if the number if items is less than 10.
     */
    bool hasSpaceInBag();
    /**
     * If the direction specifies a valid move, the rogue
     * changes its current room to room in the specified
     * direction, returns true if the direction specifies a
     * valid move.
     */
    bool moveRoom(std::string direction);
    /**
     * Returns the name of the item in the room with
     * a matching item type.
     */
    std::string getRoomsItemName(std::string itemType);
    /**
     * Returns true if a specified item type is contained
     * in the current room.
     */
    bool isItemTypeInRoom(std::string itemType);
    /**
     * Returns true if an item with a matching name is
    * contained in the current room. 
     */
    bool isItemInRoom(std::string itemName);
    /**
     * Returns an int representing the name of the
     * current room.
     */
    int getCurrentRoom();
    /**
     * Returns true if there are no items in the current
     * room.
     */
    bool isRoomEmpty();
    /**
     * Returns true if the current room has atleast
     * one connecting room.
     */
    bool canLeaveRoom();
    /**
     * Prints the names of all of the items that are
     * in the current room.
     */
    void listRoomItems();
    /**
     * Prints all of the potential directions that
     * the rogue can move from the current room.
     */
    void findCurrentDoors();
private:
    Room *currentRoom;
    Bag *bag;
};
#endif