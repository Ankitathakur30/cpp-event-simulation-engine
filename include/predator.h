#pragma once
#ifndef PREDATOR_H
#define PREDATOR_H
#include "Entity.h"
using namespace std;

class Predator: public Entity{
public:
    Predator(const string& name);
    void update() override;
};
#endif