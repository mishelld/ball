#include "Game.hpp"
#include <string>
#pragma once
using namespace std;
namespace coup{
    class Game;
    class Player
    {   
    public:
    Player(Game &game,string name,double chance,int numbergroup);
    string name;
    double chance;
    int numbergroup;
    int slim;
    int wins;
    int loses;
    int gain;
    int lose;
    int sequence;

    vector <bool> winsequence;
   // vector <pair<int, int>> vs;
    //right - winner , left -loser

    void getp();
    void bestteams(int max);

    };
}