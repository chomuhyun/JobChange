#include "player.h"
#include <string>
#include <iostream>

class Warrior : public Player {
public:
    Warrior(string nickname);
 
    void attack() {
        cout << nickname << "���� ������ �����մϴ�!" << endl;
    }
};