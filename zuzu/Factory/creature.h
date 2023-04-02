#pragma once
#include <iostream>
struct Creature {
    virtual ~Creature() {}
    int getHP() { return HitPoints; }
    protected:
    int HitPoints = 0;
};

struct Dog : public Creature {
    Dog() { HitPoints = 3; }
    void Bark() { std::cout << "arf!!!\n"; };
};