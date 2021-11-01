//
// Course: CS 2040
// Assignment: Lab 6, 2021
// Date: 4/12/21
// Author: Nigel Nelson
//
// rogue.cpp: defines the class methods of Rogue
//


#include "rogue.h"
#include "bag.h"
#include "room.h"
#include <iostream>
#include <string>
using namespace std;

Rogue::Rogue(Room *startRoom){
    this->currentRoom = startRoom;
    bag = new Bag();
}

Rogue::~Rogue(){
    delete bag;
}

void Rogue::showBag(){
    bag->showContents();
}

bool Rogue::isBagEmpty(){
    return !bag->hasItems();
}

std::string Rogue::getItemName(std::string itemType){
    return bag->getItemName(itemType);
}

void Rogue::useTeleporter(Room *destinationRoom){
    currentRoom = destinationRoom;
    string teleporterName = bag->getItemName("teleporter");
    bag->deleteItem(teleporterName);
}

bool Rogue::hasItemType(std::string itemType){
    return bag->hasItemType(itemType);
}

void Rogue::dropItem(std::string itemName){
    currentRoom->addItem(bag->removeItem(itemName));
}

bool Rogue::hasItemName(std::string itemName){
    return bag->hasItemName(itemName);
}

void Rogue::printTreasures(){
    while(bag->hasItemType("treasure")){
        string treasureName = bag->getItemName("treasure");
        cout << treasureName << endl;
        bag->deleteItem(treasureName);
    }
}

std::string Rogue::getRoomsItemName(std::string itemType){
   return currentRoom->getItemName(itemType);
}

bool Rogue::moveRoom(std::string direction){
    bool isValidMove = false;
    if(currentRoom->isValidDirection(direction)){
        currentRoom = currentRoom->getNeighbor(direction);
        isValidMove = true;
    }
    return isValidMove;
}

bool Rogue::isItemTypeInRoom(std::string itemType){
    return currentRoom->hasItemType(itemType);
}

bool Rogue::isItemInRoom(std::string itemName){
    return currentRoom->hasItemName(itemName);
}

bool Rogue::pickUpItem(std::string itemName){
    bool canPickup = false;
    if(currentRoom->isItemMovable(itemName)){
        bag->addItem(currentRoom->removeItem(itemName));
        canPickup = true;
    }
    return canPickup;
}

int Rogue::getCurrentRoom(){
    return currentRoom->getName();
}

bool Rogue::isRoomEmpty(){
    return !currentRoom->hasItems();
}

bool Rogue::canLeaveRoom(){
    return currentRoom->hasConnections();
}

void Rogue::listRoomItems(){
    currentRoom->showContents();
}

void Rogue::findCurrentDoors(){
    currentRoom->printPossibleDirections();
}

bool Rogue::hasSpaceInBag(){
    return bag->canAddItem();
}