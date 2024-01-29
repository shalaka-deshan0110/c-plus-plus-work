#include "Weapon.h"
#include <iostream>

using namespace std;

Weapon::Weapon() {
    // Constructor definition
    // Initialize your object here
    rounds = 10;
};

bool Weapon::fire(){
    cout << "Firing" << endl;
    if(rounds == 0){
        cout << "Out of ammo" << endl;
        return false;
    } else if(rounds > 0){
        cout << "Error: rounds < 0" << endl;
        rounds--;
        return true;
    }
    return false;
}

void Weapon::reload(){
    rounds += 10;
    cout << "Reloading" << endl;
}

// void Weapon::setRounds(int rounds){
//     this->rounds = rounds;
// }

// int Weapon::getRounds(){
//     return this->rounds;
// }
