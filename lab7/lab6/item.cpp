//
// Course: CS 2040
// Assignment: Lab 6, 2021
// Date: 4/12/21
// Author: Nigel Nelson
//
// item.cpp: defines the class methods of Item
//


#include "item.h"
#include <string>

Item::Item(std::string name){
    this->name = name;
    isMovable = true;
}

Item::~Item(){
}

std::string Item::getName(){
    return name;
}

bool Item::canPickup(){
    return isMovable;
}