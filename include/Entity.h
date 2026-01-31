#pragma once
#include <string>
using namespace std;

class Entity{
    public:
        Entity(const string & name);
        virtual ~Entity();
        virtual void update(double dt)=0;
        string getName() const;
    
    protected:
    string name;
};