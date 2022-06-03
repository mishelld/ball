#include "Game.hpp"
#include "Player.hpp"
#include <random>

namespace coup{
    const int outside1 = 50;
const int high = 100;
const int home = 55;

    void Game::schedule(){
        vs.clear();
        vectorofgrops.clear();
        winner_loser.clear();
        grop.clear();
        winsequence.clear();
    for(unsigned i = 1;i<=20;i++){
        for(unsigned j = i;j<20;j++){
        vs.push_back(pair<int, int>(i,j+1));
     
        }
        if(vectorofgrops.size()!=20){
                   createrandom();

        }

    }
}
 void Game::schedule1(){
     std::random_device randht; 
      std::random_device randot; 

    std::mt19937 h_t(randht()); 
	    std::mt19937 o_t(randot()); 

    std::uniform_int_distribution<> home_team(home, high); 
	std::uniform_int_distribution<> outside_team(outside1, high); 

    for(unsigned i=0; i<vs.size(); i++)
    {
       int home =  home_team(h_t);
       int outside =  outside_team(o_t);
   
       if(grop[vs[i].first]->chance>grop[vs[i].second]->chance) {
           home +=10;
       }
       else{
           outside+=10;
       }


       if(home>outside){
            winner_loser.push_back(pair<Player*, Player*>(grop[vs[i].first],grop[vs[i].second]));
            grop[vs[i].first]->gain+=home;
            grop[vs[i].second]->lose+=outside;
            grop[vs[i].first]->wins+=1;
            grop[vs[i].first]->winsequence.push_back(true);
            grop[vs[i].second]->loses+=1;
            grop[vs[i].second]->winsequence.push_back(false);

       }
       
       if(home==outside){
            if(grop[vs[i].first]->chance>grop[vs[i].second]->chance) {
        winner_loser.push_back(pair<Player*, Player*>(grop[vs[i].first],grop[vs[i].second]));
         grop[vs[i].first]->gain+=home;
            grop[vs[i].second]->lose+=outside;
           grop[vs[i].first]->wins+=1;
            grop[vs[i].first]->winsequence.push_back(true);
            grop[vs[i].second]->loses+=1;
            grop[vs[i].second]->winsequence.push_back(false);

        
            }


       }

    }
  
      
 }


 void Game::schedule2(){
     std::random_device randht; 
      std::random_device randot; 

    std::mt19937 h_t(randht()); 
	    std::mt19937 o_t(randot()); 

    std::uniform_int_distribution<> home_team(home, high); 
	std::uniform_int_distribution<> outside_team(outside1, high); 

    for(unsigned i=0; i<vs.size(); i++)
    {
       int home =  home_team(h_t);
       int outside =  outside_team(o_t);
   
       if(grop[vs[i].second]->chance>grop[vs[i].first]->chance) {
           home +=10;
       }
       else{
           outside+=10;
       }


       if(home>outside){
            winner_loser.push_back(pair<Player*, Player*>(grop[vs[i].second],grop[vs[i].first]));
            grop[vs[i].second]->gain+=home;
            grop[vs[i].first]->lose+=outside;

            grop[vs[i].second]->wins+=1;
            grop[vs[i].second]->winsequence.push_back(true);

            grop[vs[i].first]->loses+=1;
            grop[vs[i].first]->winsequence.push_back(false);

       }
       
       if(home==outside){
            if(grop[vs[i].second]->chance>grop[vs[i].first]->chance) {
        winner_loser.push_back(pair<Player*, Player*>(grop[vs[i].second],grop[vs[i].first]));
         grop[vs[i].second]->gain+=home;
            grop[vs[i].first]->lose+=outside;
           grop[vs[i].second]->wins+=1;
            grop[vs[i].second]->winsequence.push_back(true);
            grop[vs[i].first]->loses+=1;
            grop[vs[i].first]->winsequence.push_back(false);

        
            }


       }

    }
  
 }

 void Game::createrandom(){
     int i;
    if(vectorofgrops.size()==0){
         i = 1;
     }else{
         i = vectorofgrops.size();
     }
     for(;i<=20;i++){
        string name =  to_string(i);
        double random = (double)rand() / (RAND_MAX + 1.0);
         Player *c = new Player(*this,name,random,i);

     }
 }
 void Game::addgroup(Player *g){
    grop[g->numbergroup] = g;
    vectorofgrops.push_back(*g);

 }
 string Game::slim(){
     string temp;
           for(unsigned int i = 0;i<vectorofgrops.size();i++){
                       string s = to_string( grop[vectorofgrops[i].numbergroup]->gain-grop[vectorofgrops[i].numbergroup]->lose);

        temp+= "for the team:" + vectorofgrops[i].name +"\n" +"number the slim is:" +s +"\n";
           }
           return temp;


 }
 string Game::ratio(){
     string temp;
     for(unsigned int i = 0;i<vectorofgrops.size();i++){
         temp  += "for the team:" + vectorofgrops[i].name +"\n";
        string wins = to_string(grop[vectorofgrops[i].numbergroup]->wins);
         temp+="number of wins:" +wins;
         string loses = to_string(grop[vectorofgrops[i].numbergroup]->loses);
         temp+=" number of loses:" +loses;
         temp+= "\n";
     }
     return temp;
 }
   string Game::seq_wins(){
       int curr =0;
       int max = 0 ;
       int maxgame = 0;
       for(unsigned int i = 0;i<vectorofgrops.size();i++){
           for(unsigned int j = 0;j<grop[vectorofgrops[i].numbergroup]->winsequence.size();j++){
       if(grop[vectorofgrops[i].numbergroup]->winsequence[j]==true){
           curr +=1;

       }else{
           if(curr>max){
               max = curr;
           }
           curr = 0;
       }
 }
 if(max>maxgame){
     maxgame = max;
 }
   }
   string temp;
   string ma = to_string( maxgame);
   temp = "the longest seqance of wins is " +ma;
   return temp;
   }
   string Game::seq_loses(){
       int curr =0;
       int max = 0 ;
       int maxgame = 0;
       for(unsigned int i = 0;i<vectorofgrops.size();i++){
           for(unsigned int j = 0;j<grop[vectorofgrops[i].numbergroup]->winsequence.size();j++){
       if(grop[vectorofgrops[i].numbergroup]->winsequence[j]==false){
           curr +=1;

       }else{
           if(curr>max){
               max = curr;
           }
           curr = 0;
       }
 }
 if(max>maxgame){
     maxgame = max;
 }
   }
    string temp;
   string ma = to_string( maxgame);
   temp ="the longest seqance of loses is " +ma;
   return temp;
   }
   string Game::bestteams(int num){
       vector<Player> temp(vectorofgrops);
      
    for (unsigned i = 0; i < temp.size() - 1; i++){

        for (unsigned j = 0; j < temp.size() - i - 1; j++){
            if (grop[temp[j].numbergroup]->wins > grop[temp[j+1].numbergroup]->wins){
                swap(temp[j], temp[j + 1]);
            }
        }
    }
     
       int k = 0;
       string tem;
       tem += "the leading teams are: \n";
       for(unsigned int i =temp.size()-1;k<num;i--){
        string t = to_string(grop[temp[i].numbergroup]->wins);
        tem+=  grop[temp[i].numbergroup]->name +" with " + t +" wins\n";
        k++;

       }
       return tem;
   }
    string Game::worsteams(int num){
       vector<Player> temp(vectorofgrops);
      
    for (unsigned i = 0; i < temp.size() - 1; i++){

        for (unsigned j = 0; j < temp.size() - i - 1; j++){
            if (grop[temp[j].numbergroup]->wins > grop[temp[j+1].numbergroup]->wins){
                swap(temp[j], temp[j + 1]);
            }
        }
    }
     
       int k = 0;
        string tem;
       tem += "the leading teams are: \n";
       for(unsigned int i =0;k<num;i++){
        string t = to_string(grop[temp[i].numbergroup]->loses);
        tem+=  grop[temp[i].numbergroup]->name +" with " + t +" loses\n" ;

        k++;

       }
       return tem;
   }
    string Game::wonoverlose(){
       int count=0;
    for (unsigned int i = 0; i < vectorofgrops.size(); i++)
    {
      if(grop[vectorofgrops[i].numbergroup]->gain-grop[vectorofgrops[i].numbergroup]->lose >0){
          count+=1;
      }
      
    }
    string y = to_string(count);
    return  "the amount of teams that their slim >0: is " + y +"\n" ;    

    }
    string Game::loseoverwon(){
       int count=0;
    for (unsigned int i = 0; i < vectorofgrops.size(); i++)
    {
      if(grop[vectorofgrops[i].numbergroup]->gain-grop[vectorofgrops[i].numbergroup]->lose <=0){
          count+=1;
      }
      
    }
    string y = to_string(count);
    return  "the amount of teams that their slim <=0: is " + y +"\n" ;    

        

    }

}