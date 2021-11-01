//
// Course: CS 2040
// Assignment: Lab 6, 2021
// Date: 4/12/21
// Author: Nigel Nelson
//
// collection.cpp: defines the class methods of Collection
//


#include "collection.h"
#include "key.h"
#include "treasure.h"
#include "teleporter.h"
#include "exit.h"
#include "item.h"
#include <string>
using namespace std;

Collection::Collection(){
    numItems = 0;
}

Collection::~Collection(){
    for(int i = 0; i < numItems; i++){
        delete items[i];
    }
}

void Collection::addNewItem(std::string itemType, std::string itemName){
    if(numItems < MAX_ITEMS){
        items[numItems] = createNewItem(itemType, itemName);
        numItems++;
    }
}

Item* Collection::createNewItem(std::string itemType, std::string itemName){
    Item *item;
    if(itemType == "key"){
        item = new Key(itemName);
    } else if(itemType == "treasure"){
        item = new Treasure(itemName);
    } else if(itemType == "teleporter"){
        item = new Teleporter(itemName);
    } else{
        item = new Exit(itemName);
    }
    return item;
}

void Collection::addItem(Item *item){
    if(numItems < MAX_ITEMS){
        items[numItems] = item;
        numItems++;
    }
}

bool Collection::hasItemType(std::string itemType){
    bool hasItem = false;
    for(int i = 0; i < numItems; i++){
        if(items[i]->getType() == itemType){
            hasItem = true;
        }
    }
    return hasItem;
}

bool Collection::hasItemName(std::string itemName){
    bool hasItem = false;
    for(int i = 0; i < numItems; i++){
        if(items[i]->getName() == itemName){
            hasItem = true;
        }
    }
    return hasItem;
}

Item* Collection::removeItem(std::string itemName){
    Item* desiredItem;
    bool isItemFound = false;
    for(int i = 0; i < numItems; i++){
        if(isItemFound){
            items[i-1] = items[i];
        } else if(items[i]->getName() == itemName){
            desiredItem = items[i];
            isItemFound = true;
        }
    }
    numItems--;
    return desiredItem;
}

bool Collection::hasItems(){
    return numItems > 0;
}

std::string Collection::getItemName(std::string itemType){
    string itemName;
    for(int i = 0; i < numItems; i++){
        if(items[i]->getType() == itemType){
            itemName = items[i]->getName();
        }
    }
    return itemName;
}

std::string Collection::getItemType(std::string itemName){
    return getItem(itemName)->getType();
}

bool Collection::canAddItem(){
    return numItems < MAX_ITEMS;
}

Item* Collection::getItem(std::string itemName){
    Item *item;
    for(int i = 0; i < numItems; i++){
        if(items[i]->getName() == itemName){
            item = items[i];
        }
    }
    return item;
}

bool Collection::isItemMovable(std::string itemName){
    return getItem(itemName)->canPickup();
}