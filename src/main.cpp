#include <iostream>
#include <memory>

#include "Entity.h"
#include "Predator.h"
#include "Prey.h"

using namespace std;

int main(){
    cout<<"Simulation Starting..."<<endl;

    unique_ptr<Entity> e1=make_unique<Predator>("Predator 1");
    unique_ptr<Entity> e2=make_unique<Prey>("Prey 1");

    e1->update(1.0);
    e2->update(1.0);
    
    cout<<"Simulation shutdown."<<endl;

    return 0;
}