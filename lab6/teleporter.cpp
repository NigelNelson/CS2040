//
// Course: CS 2040
// Assignment: Lab 6, 2021
// Date: 4/12/21
// Author: Nigel Nelson
//
// teleporter.cpp: defines the class methods Teleporter
//


#include "teleporter.h"
#include <iostream>
#include <string>
using namespace std;


Teleporter::Teleporter(std::string name) : Item(name){
    isMovable = true;
}

void Teleporter::printInfo(){
    cout << name << " - " << "teleporter" << endl;
}