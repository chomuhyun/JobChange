#include "Magician.h"
#include <iostream>

Magician::Magician(string nickname) : Player(nickname)
{
    job_name = "������";
    HP = 180;
    power = 50;
    defence = 15;
    MP = 150;
    accuracy = 50;
    speed = 5;
    }