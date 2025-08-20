#include "player.h"
#include <string>
#include <iostream>

class Warrior : public Player {
public:
    Warrior(string nickname);
 
    void attack() {
        cout << nickname << "님이 검으로 공격합니다!" << endl;
    }
};