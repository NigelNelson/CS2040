//
// Course: CS 2040
// Assignment: Lab 6, 2021
// Date: 4/12/21
// Author: Nigel Nelson
//
// key.cpp: defines the class methods of Key
//


#include "key.h"
#include <iostream>
#include <string>
using namespace std;

Key::Key(std::string name) : Item(name) {}

void Key::printInfo(){
    cout << name << " - " << "key" << endl;
}

std::string Key::getType(){
    return "key";
}