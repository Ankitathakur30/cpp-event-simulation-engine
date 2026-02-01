#include "world.h"
#include "Entity.h"
#include <iostream>
using namespace std;

void World::addEntity(unique_ptr<Entity>entity){
    entities.push_back(move(entity));
};

void World::run(int ticks){
    cout<<"\n--- Simulation Start ---\n";
    for(int i=0;i<=ticks;i++){
        tick++;
        cout<<"\n[World] Tick "<<i<<endl;
        
        for(auto& e:entities){
            e->update();
        };
    };
    cout<<"\n--- Simulation End ---\n";
}