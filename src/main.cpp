#include <memory>
#include "world.h"
#include "predator.h"
#include "Prey.h"

using namespace std;

int main(){
    World World;

    World.addEntity(make_unique<Predator>("Predator#1"));
    World.addEntity(make_unique<Prey>("Prey#1"));
    World.run(3);

    return 0;
}