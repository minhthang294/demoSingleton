#include "Player.h"
#include <iostream>
#include <string>
using namespace std;
Player* Player::_instance = 0;
Player::Player(string name)
{
    _name = name;
}
string Player::getName()
{
    return _name;
}
Player* Player::getPlayer()
{
    if (_instance == 0)
    {
        cout << "Enter player name: ";
        string name;
        cin >> name;
        _instance = new Player(name);
    }
    return _instance;
}

void Player::setName(string name)
{
    _name = name;
}

string Player::play()
{
    cout << "Enter new name: ";
    string new_name;
    cin >> new_name;
    return new_name;
}
Player::~Player()
{
    //dtor
}
