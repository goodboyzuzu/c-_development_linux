#pragma once
class Creature {
public:
  virtual ~Creature() {};
  virtual Creature* Clone() { return nullptr; };
  int getHP() { return HitPoints; }
  int getSpeed() { return Speed; }
  int getAttack() { return Attack; }
protected:
  int HitPoints = 0;
  int Speed = 0;
  int Attack = 0;
};

#include <iostream>

class Dog : public Creature {
public:
  Dog() { HitPoints = 3; Speed = 3; Attack = 3; }
  void Bark() { std::cout << "arf!!!\n"; };
};