#include <iostream>
#include <iostream>
#include <iostream>
#include "spawn.h"

int main(){
    DogSpawner ds = DogSpawner();
    Creature* c = ds.spawn();
    std::cout << c->getHP() << std::endl;
    // make dog bark
    Dog* d = dynamic_cast<Dog*>(c);
    d->Bark();

    return 0;
}