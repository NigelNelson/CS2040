//
// Course: CS 2040
// Assignment: Lab 4, 2021
// Date: 3/31/21
// Author: Nigel Nelson
//
// pool.cpp: implements the class Pool
//
//

#include "pool.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

Pool::Pool() {
  numNames = 0;
}

void Pool::add(string name) {
    names[numNames] = name;
    numNames++;
}

void Pool::readNames(){
    string name;
    cin >> name;
    while (cin && name != "END"){
        if(!full()){
            add(name);
            cin >> name;
        } else{
            cin >> name;
        }
    }
}

bool Pool::empty(){
    return this->numNames <= 0;
}

void Pool::printMatches(Pool *pool){
    for(int i = 0; i < numNames; i++){
        pool->printMatches(names[i]);
    }
}

void Pool::printMatches(string name){
    for(int i = 0; i < numNames; i++){
        if(names[i] != name){
            if(isMatchingPair(name, names[i])){
                printSingleMatch(name, names[i]);
            }
        }
    }
}

bool Pool::isMatchingPair(string name1, string name2){
    bool isMatch = false;
    for(unsigned int i = 0; i < name1.length(); i++){
        for(unsigned int j = 0; j < name2.length(); j++){
            if(name1[i] != '_'){
                if(name1[i] == name2[j]){
                    isMatch = true;
                }
            }
        }
    }
    return isMatch;
}

bool Pool::full(){
    return this->numNames >= MAXNAMES;
}

void Pool::printSingleMatch(string name1, string name2){
    cout << "A perfect match for " << name1 << ": " << name2 << endl;
}