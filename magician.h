#include "player.h"
#include <string>
#include <iostream>

class Magician : public Player {
public:
    Magician(string nickname);

    void attack() {
        cout << nickname << "님이 마법으로 공격합니다!" << endl;
    }
};