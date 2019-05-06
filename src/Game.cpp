#include "Game.h"
#include"Player.h"
#include <iostream>
#include <string>
Game::Game()
{
    _player = Player::getPlayer();
}

void Game::play()
{
    string new_name = _player->play();
    cout << "New name for player: " << new_name << endl;
    _player->setName(new_name);
}
Game::~Game()
{
    //dtor
}
