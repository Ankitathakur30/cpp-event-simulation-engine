#pragma once
#include <string>
using namespace std;

class Entity{
    public:
        Entity(const string & name);
        virtual ~Entity();
        string getName() const;
    
    private:
    string name;
};