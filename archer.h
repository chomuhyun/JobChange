#include "player.h"
#include <string>
#include <iostream>

class Archer : public Player {
public:
    Archer(string nickname);

    void attack() {
        cout << nickname << "´ÔÀÌ È° ½÷¼­ °ø°ÝÇÕ´Ï´Ù!" << endl;
    }
};