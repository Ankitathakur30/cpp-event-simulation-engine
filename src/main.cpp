#include <iostream>
#include "Entity.h"
using namespace std;

int main(){
    cout<<"Simulation Started..."<<endl;

    Entity e("TestEntity");
    cout<<"Entity created: "<<e.getName()<<endl;
    cout<<"Simulation shutdown."<<endl;

    return 0;
}