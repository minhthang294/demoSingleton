#ifndef GAME_H
#define GAME_H
#include "Player.h"
#include <iostream>
#include <string>
using namespace std;
class Game
{
    public:
        Game();
        void play();
        virtual ~Game();

    protected:

    private:
        Player* _player;
};

#endif // GAME_H
