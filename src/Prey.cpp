#include <iostream>
#include "Prey.h"
using namespace std;

Prey::Prey(const string& name):Entity(name){}

void Prey::update(){
    cout<<"Prey "<<name<<" is escaping.."<<endl;
};