#include "doctest.h"
#include <string>
#include <stdexcept>
#include <iostream>
#include "Player.hpp"

#include "Game.hpp"
using namespace std;
using namespace coup;

	
  

TEST_CASE("with input")
{
  Game game_1{};

  Player team1(game_1,"1",0.1,1);
	Player team2(game_1,"2",0.4,2);
	Player team3(game_1,"3",0.3,3);
	Player team4(game_1,"4",0.7,4);
	Player team5(game_1,"5",0.6,5);
	Player team6(game_1,"6",0.4,6);
	Player team7(game_1,"7",0.3,7);
	Player team8(game_1,"8",0.7,8);
	Player team9(game_1,"9",0.3,9);
	Player team10(game_1,"10",0.4,10);
	Player team11(game_1,"11",0.3,11);
	Player team12(game_1,"12",0.7,12);
	Player team13(game_1,"13",0.9,13);
	Player team14(game_1,"14",0.2,14);
	Player team15(game_1,"15",0.5,15);
	Player team16(game_1,"16",0.6,16);
	Player team17(game_1,"17",0.7,17);
	Player team18(game_1,"18",0.8,18);
	Player team19(game_1,"19",0.9,19);
	Player team20(game_1,"20",0.1,20);

  game_1.schedule();
	game_1.schedule1();
	game_1.schedule2();
  CHECK_NOTHROW(game_1.ratio());
  CHECK_NOTHROW(game_1.slim());
  CHECK_NOTHROW(game_1.seq_wins());
  CHECK_NOTHROW(game_1.seq_loses());
  CHECK_NOTHROW(game_1.loseoverwon());
  CHECK_NOTHROW(game_1.wonoverlose());
  CHECK_NOTHROW(game_1.bestteams(3));
  CHECK_NOTHROW(game_1.worsteams(3));









 }
 TEST_CASE("without input")
{
  Game game_2{};

  game_2.schedule();
	game_2.schedule1();
	game_2.schedule2();
  CHECK_NOTHROW(game_2.ratio());
  CHECK_NOTHROW(game_2.slim());
  CHECK_NOTHROW(game_2.seq_wins());
  CHECK_NOTHROW(game_2.seq_loses());
  CHECK_NOTHROW(game_2.loseoverwon());
  CHECK_NOTHROW(game_2.wonoverlose());
  CHECK_NOTHROW(game_2.bestteams(3));
  CHECK_NOTHROW(game_2.worsteams(3));









 }
 TEST_CASE("with part of the input")
{
    Game game_3{};

  Player team1(game_3,"1",0.1,1);
	Player team2(game_3,"2",0.4,2);
	Player team3(game_3,"3",0.3,3);
	Player team4(game_3,"4",0.7,4);
	Player team5(game_3,"5",0.6,5);
	Player team6(game_3,"6",0.4,6);
	Player team7(game_3,"7",0.3,7);
	Player team8(game_3,"8",0.7,8);
	Player team9(game_3,"9",0.3,9);

  game_3.schedule();
	game_3.schedule1();
	game_3.schedule2();
  CHECK_NOTHROW(game_3.ratio());
  CHECK_NOTHROW(game_3.slim());
  CHECK_NOTHROW(game_3.seq_wins());
  CHECK_NOTHROW(game_3.seq_loses());
  CHECK_NOTHROW(game_3.loseoverwon());
  CHECK_NOTHROW(game_3.wonoverlose());
  CHECK_NOTHROW(game_3.bestteams(3));
  CHECK_NOTHROW(game_3.worsteams(3));









 }



