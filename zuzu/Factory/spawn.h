#pragma once
#include "creature.h"

struct Spawner {
    virtual Creature* spawn() = 0;
};

struct DogSpawner : public Spawner {
    Creature* spawn() { return new Dog(); }
};
