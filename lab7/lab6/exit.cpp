//
// Course: CS 2040
// Assignment: Lab 6, 2021
// Date: 4/12/21
// Author: Nigel Nelson
//
// exit.cpp: defines the class methods of Exit
//


#include "exit.h"
#include <iostream>
#include <string>
using namespace std;

Exit::Exit(std::string name) :Item(name){
    isMovable = false;
}

void Exit::printInfo(){
    cout << name << " - " << "exit" << endl;
}

std::string Exit::getType(){
    return "exit";
}