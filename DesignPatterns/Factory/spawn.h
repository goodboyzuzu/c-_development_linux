#pragma once
#include "creature.h"
#include <vector>

class Spawner {
public:
  virtual ~Spawner() {}
  virtual Creature* spawn() = 0; 
};

class DogSpawner : public Spawner {
public:
  Creature* spawn() { return new Dog(); }
};