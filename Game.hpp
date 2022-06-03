#include <iostream>
#include <vector>
#include <stdexcept>
#include <string>
#include <map>

// #include "Player.hpp"
#pragma once
using namespace std;

namespace coup
{
    
    class Player;
    class Game 
    {
    public:

    vector<string> outside();

       string name;
    int wins;
    int loses;
    int gain;
    int lose;
    int sequence;


    map <int,Player*> grop;
    vector <bool> winsequence;
    vector <pair<int, int>> vs;
    vector <Player> vectorofgrops;


    //right - winner , left -loser
    vector <pair<Player*, Player*>> winner_loser;
    double num;
    int numbergroup;
    map <int,int> gro;
   void addgroup(Player *g);
    void schedule();
    void schedule1();
     void schedule2();
     void createrandom();
    string slim();
    string ratio();
    string seq_wins();
    string seq_loses();
    string bestteams(int num);
    string worsteams(int num);
    string wonoverlose();
    string loseoverwon();


    
        
    };
    
} 