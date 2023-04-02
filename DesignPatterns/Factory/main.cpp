#include <iostream>
#include "spawn.h"

int main(){
    DogSpawner ds;
    Creature* creature[] = {nullptr};
    creature[0] = ds.spawn();
    Dog* dog = dynamic_cast<Dog*>(creature[0]);
    if (dog) {
        dog->Bark();
    }
    return 0;
}