#include "warrior.h"
#include <iostream>

Warrior :: Warrior(string nickname) : Player(nickname)
{
    job_name = "ภüป็";
    HP = 230;
    power = 30;
    defence = 50;
    MP = 60;
    accuracy = 50;
    speed = 4;
}