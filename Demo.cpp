/**
 * Demo program for Coup exercise
 *
 * @author: Tal Zichlinsky
 * @since: 2022-02
 */

#include "Player.hpp"

#include "Game.hpp"

#include <exception>

using namespace coup;

#include <iostream>
#include <stdexcept>
#include <vector>
#include <random>

using namespace std;

int main() {
//with input ////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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
	


    //most
	game_1.schedule();
	game_1.schedule1();
	game_1.schedule2();
	cout <<game_1.ratio() << endl;
	/*
for the team:1
number of wins:5 number of loses:15
for the team:2
number of wins:8 number of loses:10
for the team:3
number of wins:7 number of loses:10
for the team:4
number of wins:10 number of loses:4
for the team:5
number of wins:11 number of loses:7
for the team:6
number of wins:10 number of loses:10
for the team:7
number of wins:10 number of loses:12
for the team:8
number of wins:12 number of loses:11
for the team:9
number of wins:8 number of loses:13
for the team:10
number of wins:7 number of loses:10
for the team:11
number of wins:8 number of loses:11
for the team:12
number of wins:12 number of loses:9
for the team:13
number of wins:10 number of loses:5
for the team:14
number of wins:10 number of loses:14
for the team:15
number of wins:12 number of loses:12
for the team:16
number of wins:9 number of loses:8
for the team:17
number of wins:11 number of loses:8
for the team:18
number of wins:12 number of loses:6
for the team:19
number of wins:17 number of loses:4
for the team:20
number of wins:5 number of loses:15
	*/
cout << game_1.slim() << endl;
/*
or the team:1
number the slim is:80
for the team:2
number the slim is:-286
for the team:3
number the slim is:-213
for the team:4
number the slim is:474
for the team:5
number the slim is:88
for the team:6
number the slim is:203
for the team:7
number the slim is:-350
for the team:8
number the slim is:295
for the team:9
number the slim is:153
for the team:10
number the slim is:-266
for the team:11
number the slim is:-145
for the team:12
number the slim is:898
for the team:13
number the slim is:973
for the team:14
number the slim is:-353
for the team:15
number the slim is:-63
for the team:16
number the slim is:171
for the team:17
number the slim is:714
for the team:18
number the slim is:708
for the team:19
number the slim is:786
for the team:20
number the slim is:-3
*/
cout << 	game_1.seq_wins() << endl;
// the longest seqance of wins is 16
cout <<	game_1.seq_loses() << endl;
//the longest seqance of loses is 16
cout << game_1.bestteams(3) <<endl;
   /*
   the leading teams are: 
13 with 14 wins
12 with 13 wins
9 with 13 wins
   */
cout <<	game_1.worsteams(3) <<endl;
/*
the leading teams are: 
20 with 16 loses
1 with 11 loses
7 with 13 loses

*/
cout <<	game_1.wonoverlose()  <<endl;
//the amount of teams that their slim >0: is 14
cout << game_1.loseoverwon() <<endl;
 //  the amount of teams that their slim <=0: is 7
	//////////////////////////////////////////////////////////// without input /////////////////////////////////////////////////////////////////////////
Game game_2{};

  game_2.schedule();
	game_2.schedule1();
	game_2.schedule2();
  cout << game_2.ratio() << endl;
  cout << game_2.slim() << endl;
  cout << game_2.seq_wins() << endl;
 cout << game_2.seq_loses() << endl;
  cout << game_2.loseoverwon() << endl;
  cout << game_2.wonoverlose()<< endl;
  cout << game_2.bestteams(3)<< endl;
  cout << game_2.worsteams(3) << endl;
//////////////////////////////////////////////////////////////////// with half input ///////////////////////////////////////////////////////////////////////////////////////////
    Game game_3{};

  Player t1(game_3,"1",0.1,1);
	Player t2(game_3,"2",0.4,2);
	Player t3(game_3,"3",0.3,3);
	Player t4(game_3,"4",0.7,4);
	Player t5(game_3,"5",0.6,5);
	Player t6(game_3,"6",0.4,6);
	Player t7(game_3,"7",0.3,7);
	Player t8(game_3,"8",0.7,8);
	Player t92(game_3,"9",0.3,9);

    game_3.schedule();
	game_3.schedule1();
	game_3.schedule2();
	 cout << game_3.ratio() << endl;
  cout << game_3.slim() << endl;
  cout << game_3.seq_wins() << endl;
 cout << game_3.seq_loses() << endl;
  cout << game_3.loseoverwon() << endl;
  cout << game_3.wonoverlose()<< endl;
  cout << game_3.bestteams(3)<< endl;
  cout << game_3.worsteams(3) << endl;


}
