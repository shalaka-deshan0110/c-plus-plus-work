#include <iostream>
#include "Person.h"
#include "Weapon.h"
#include "Soldier.h"

using namespace std;

int main(){
    // Person* p; 
    // p= new Person();

    // p->Crawl();
    // p->Run();
    // p->Stand();
    // p->Walk();

    // Weapon* w;
    // w = new Weapon();
    // w->fire();
    // w->reload();

    Soldier* s;
    s = new Soldier();
    s->Crawl();
    s->Run();
    s->Stand();
    s->Walk();
    s->fire();
    s->attack();

    return 0;
};
