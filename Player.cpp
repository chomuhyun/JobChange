#include "player.h"
#include <iostream>

Player::Player(string nickname) : nickname(nickname), // Player 클래스 생성자
	level(1), 
	HP(100), 
	MP(50), 
	power(10), 
	defence(5), 
	accuracy(75), 
	speed(10) {}


void Player::printPlayerStatus() {
    cout << "------------------------------------" << endl;
    cout << "* 현재 능력치" << endl;
    cout << "닉네임: " << nickname << endl;
    cout << "직업: " << job_name << endl;
    cout << "Lv. " << level << endl;
    cout << "HP: " << HP << endl;
    cout << "MP: " << MP << endl;
    cout << "공격력: " << power << endl;
    cout << "방어력: " << defence << endl;
    cout << "정확도: " << accuracy << endl;
    cout << "속도: " << speed << endl;
    cout << "------------------------------------" << endl;
}