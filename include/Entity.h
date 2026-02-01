#ifndef ENTITY_H
#define ENTITY_H
#include <string>
using namespace std;

class Entity{
    public:
        Entity(const string & name);
        virtual ~Entity();
        virtual void update()=0;
        string getName() const;
    
    protected:
    string name;
};
#endif