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
using namespace std;


Item::Item(std::string name){
    this->name = name;
}

std::string Item::getName(){
    return name;
}
