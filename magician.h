#include "player.h"
#include <string>
#include <iostream>

class Magician : public Player {
public:
    Magician(string nickname);

    void attack() {
        cout << nickname << "���� �������� �����մϴ�!" << endl;
    }
};