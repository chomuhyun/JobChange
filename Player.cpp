#include "player.h"
#include <iostream>

Player::Player(string nickname) : nickname(nickname), // Player Ŭ���� ������
	level(1), 
	HP(100), 
	MP(50), 
	power(10), 
	defence(5), 
	accuracy(75), 
	speed(10) {}


void Player::printPlayerStatus() {
    cout << "------------------------------------" << endl;
    cout << "* ���� �ɷ�ġ" << endl;
    cout << "�г���: " << nickname << endl;
    cout << "����: " << job_name << endl;
    cout << "Lv. " << level << endl;
    cout << "HP: " << HP << endl;
    cout << "MP: " << MP << endl;
    cout << "���ݷ�: " << power << endl;
    cout << "����: " << defence << endl;
    cout << "��Ȯ��: " << accuracy << endl;
    cout << "�ӵ�: " << speed << endl;
    cout << "------------------------------------" << endl;
}