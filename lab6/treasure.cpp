//
// Course: CS 2040
// Assignment: Lab 6, 2021
// Date: 4/12/21
// Author: Nigel Nelson
//
// treasure.cpp: defines the class methods of Treasure
//


#include "treasure.h"
#include <iostream>
#include <string>
using namespace std;


Treasure::Treasure(std::string name) :Item(name){
    isMovable = true;
}

void Treasure::printInfo(){
    cout << name << " - " << "treasure" << endl;
}