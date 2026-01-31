#include <iostream>
#include "Prey.h"
using namespace std;

Prey::Prey(const string& name):Entity(name){}

void Prey::update(double dt){
    cout<<"Prey is escaping.."<<endl;
}