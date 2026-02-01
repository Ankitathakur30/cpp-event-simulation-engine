#ifndef WORLD_H
#define WORLD_H
using namespace std;

#include <vector>
#include <memory>

class Entity;
class World{
    private:
        vector<unique_ptr<Entity>>entities;
        int tick=0;
    public:
    
        void addEntity(unique_ptr<Entity>entity);
        void run(int ticks);
};
#endif