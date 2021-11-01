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

void Collection::addItem(std::string itemType, std::string itemName){
    if(numItems > MAX_ITEMS){
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
        items[numItems] = item;
        numItems++;
    }
}

bool Collection::hasItem(std::string itemType){
    bool hasItem = false;
    for(int i = 0; i < numItems; i++){
        if(items[i].getName() == itemType){
            hasItem = true;
        }
    }
    return hasItem;
}