#include <iostream>
#include <string>
#include "Game.hpp"
#include "Contessa.hpp"

using namespace std;
using namespace coup;
namespace coup
{
    Contessa &Contessa::block(Player &p1)
    {
        if (!p1.get_in_game())
        {
            throw invalid_argument{"the player is not in the game"};
        }
        if (currGame->getLivePlayers().at(p1.get_turn())->last_action == Actions::coup3 && p1.role() == "Assassin")
        {
            int id = currGame->game_action.at(p1.get_turn())->get_turn();
            currGame->getLivePlayers()[id]->set_in_game(true);
        }
        else {
            throw invalid_argument("cann't block this action");
        }

        return *this;
    }
};