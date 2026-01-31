#include <iostream>   
#include <string>
#include "Entity.h"

Entity::Entity(const string & name):
name(name){}

Entity::~Entity(){}

string Entity::getName() const{
    return name;
}