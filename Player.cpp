#include "Player.hpp"
#include "Game.hpp"
const int num = 7;

namespace coup{
     
      Player::Player(Game &game,string name,double chance,int numbergroup){
       this->name = move(name);
       this->chance = chance;
       this->numbergroup = numbergroup;
       this->loses = 0;
       this->wins = 0;
       this->slim = 0;
       this->lose = 0;
       this->gain = 0;
      // this->vectorofgrops.push_back(*this);
      game.addgroup(this);
     //  this->grop[chance] = *this;
      

}


        
}