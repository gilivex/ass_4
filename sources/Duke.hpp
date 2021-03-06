#pragma once
#include <iostream>
#include <string>
#include "Player.hpp"

using namespace std;
using namespace coup;

namespace coup
{
    class Duke : public Player
    {
    public:
        Duke(Game &game, string name): Player(game,name,"Duke"){};
        ~Duke(){};
        Duke& tax();
        Duke& block(Player &p1);
    };
}