#include "player.h"
#include <string>
#include <iostream>

class Thief : public Player {
public:
    Thief(string nickname);

    void attack() {
        cout << nickname << "님이 단검으로 공격합니다!" << endl;
    }
};