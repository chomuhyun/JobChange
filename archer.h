#include "player.h"
#include <string>
#include <iostream>

class Archer : public Player {
public:
    Archer(string nickname);

    void attack() {
        cout << nickname << "���� Ȱ ���� �����մϴ�!" << endl;
    }
};