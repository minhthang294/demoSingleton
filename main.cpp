#include <iostream>
#include "Player.h"
#include "Game.h"
#include <string>
using namespace std;

void showPlayerInfo()
{
    Player* p = Player::getPlayer();
    cout << "Player name: " << p->getName() << endl;
}

int main()
{
    Game g;
    g.play();
    showPlayerInfo();

    g.play();
    showPlayerInfo();
    return 0;
}
