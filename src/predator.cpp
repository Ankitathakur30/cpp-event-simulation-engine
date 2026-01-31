#include <iostream>
#include "Predator.h"
using namespace std;

Predator::Predator(const string& name):Entity(name){};

void Predator::update(double dt){
    cout<<"Predator is hunting.."<<endl;
};