
// soldier.h
#ifndef SOLDIER_H
#define SOLDIER_H

#include "Person.h"
#include "Weapon.h"


class Soldier: public Person, public Weapon {
    // Weapon::rounds = 10;
public:
    Soldier();
    void attack();
    void Crawl();
    void Run();
    void Stand();
    void Walk();
    void fire();    
};

#endif