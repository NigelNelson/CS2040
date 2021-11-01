//
// Course: CS 2040
// Assignment: Lab 6, 2021
// Date: 4/12/21
// Author: Nigel Nelson
//
// rogue.cpp: defines the class methods of Rogue
//


#include "rogue.h"
#include <iostream>
#include <string>
using namespace std;


Rogue::Rogue(int startRoom){
    this->currentRoom = startRoom;
    bag = new Bag();
}

void Rogue::setRoom(int room){
    this->currentRoom = room;
}

bool unlock(){
   bool 
}
