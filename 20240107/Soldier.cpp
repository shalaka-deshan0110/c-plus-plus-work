#include "Soldier.h"
#include <iostream>

using namespace std;

Soldier::Soldier() {
    // Constructor definition
    // Initialize your object here
    // rounds = 10;
}

void Soldier::attack(){
    cout << "Attacking" << endl;
}

void Soldier::Crawl(){
    cout << "Crawling" << endl;
}

void Soldier::Run(){
    cout << "Running" << endl;
}

void Soldier::Stand(){
    cout << "Standing" << endl;
}

void Soldier::Walk(){
    cout << "Walking" << endl;
}

void Soldier::fire(){
    cout << "Firing" << endl;
    if(Weapon::rounds == 0){
        cout << "Out of ammo" << endl;
        Weapon::reload();
    } else if(Weapon::rounds > 0){
        cout << "Error: rounds :" << Weapon::rounds << endl;
        Weapon::rounds--;
    }
}