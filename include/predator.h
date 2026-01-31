#pragma once
#include "Entity.h"
using namespace std;

class Predator: public Entity{
public:
    Predator(const string& name);
    void update(double dt) override;
};