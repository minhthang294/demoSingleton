#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>

using namespace std;
class Player
{
    public:
        virtual ~Player();
        static Player* getPlayer();
        void setName(string name);
        string play();
        string getName();
    protected:
        Player(string name);
    private:
        string _name;
        static Player* _instance;
};

#endif // PLAYER_H
