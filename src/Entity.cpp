#include <iostream>   
#include <string>
#include "Entity.h"

using namespace std;

Entity::Entity(const string & name):
name(name){}

Entity::~Entity(){}

string Entity::getName() const{
    return name;
}