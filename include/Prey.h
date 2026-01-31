#pragma once
#include "Entity.h"
using namespace std;

class Prey:public Entity{
    public:
        Prey(const string& name);
        void update(double dt) override;
};