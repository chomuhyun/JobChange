#include "player.h"
#include <string>
#include <iostream>

class Thief : public Player {
public:
    Thief(string nickname);

    void attack() {
        cout << nickname << "���� �ܰ����� �����մϴ�!" << endl;
    }
};