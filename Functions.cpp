#include "Dice.h"
#include "Creature.h"
#include "Reptile.h"
#include "BlueM.h"
#include "Barbarian.h"
#include "Goblin.h"
#include "Shadow.h"

#include<iostream>
#include<string>
#include<vector>


/****************************************************************************
 * void statistics(std::string player, std::vector<int> &oneWin, std::vector<int> & twoWin)
 *
 * Purpose: Keeps track of who wins each match and performs an equation to give the
 * percentage of times each player wins
 * Entry: A string for the player and a vector for each possible winner
 * Exit: Returns vectors by reference
 * ***********************************************************************/
void statistics(std::string player, std::vector<int> &oneWin, std::vector<int> &twoWin)
{
	double total = 0;

	if(player == "one")
		oneWin.push_back(1);
	if(player == "two")
		twoWin.push_back(1);

	total = oneWin.size() + twoWin.size();
	
	if(oneWin.size() == 0)
		std::cout << "\nPlayer Two wins 100 percent of the time." << std::endl;
	if(twoWin.size() == 0)
		std::cout << "\nPlayer One wins 100 percent of the time." << std::endl;
	else{
		std::cout << "\nPlayer One wins: " << (oneWin.size() / total) * 100 << " percent of the time." << std::endl;
		std::cout << "Player Two wins: " << (twoWin.size() / total) * 100 << " percent of the time." << std::endl;}
}



/****************************************************************************
 * void fight(Creature* one, Creature* two,  std::vector<int> &oneWin, std::vector<int> & twoWin, int &game)
 *
 * Purpose: Performs the fight sequence between classes. Changes who is fighting based off both turns and
 * game number. 
 * Entry: Two contestants, two vectors for tracking who wins, and the game number
 * Exit: Returns vectors by reference to the statistic function, and game amount by reference
 * ***********************************************************************/

void fight(Creature* one, Creature* two, std::vector<int> &oneWin, std::vector<int> &twoWin, int &game)
{
	int val;
	int turn = 0;
//	int returned;
	bool over = false;
	bool flagTwo = false;
	bool flag = false;
	std::string player;

	if(game % 2 == 0){
		do{
			if(turn % 2 == 0){
				player = "one";
				std::cout << "\n";
				std::cout << one->getType() << " " << player << " is attacking" << std::endl;
				if(one->getType() == "Goblin" && two->getType() != "Goblin")
					one->attack(flag);
				else
					one->attack();
				two->defense();

// test for a hit and set damage
				if(one->getAttVal() <= two->getDefVal()){
					std::cout << "The attack is a miss!" << std::endl;
					one->setDmg(0);}
				else{
					std::cout << "The attack is successful!" << std::endl;
					if(flagTwo == false)
						val = one->getAttVal() - two->getDefVal();
					else
						val = (one->getAttVal() / 2) - two->getDefVal();
					two->setDmg(val);
					if(two->getDmg() == 0)
						std::cout << "Armor absorbed the attack!" << std::endl;
					else
						std::cout << two->getDmg() << " points of damage!" << std::endl;
					two->setSP();
					if(two->getSP() <= 0 )
						std::cout << "GAME OVER!" << std::endl;
					else
						std::cout << "Only " << two->getSP() << " Strength Points left!" << std::endl;}

// Check for end game
				if(one->getSP() <= 0 || two->getSP() <= 0){
					over = true;
					statistics(player, oneWin, twoWin);}
				turn++;}



			else{
				player = "two";
				std::cout << "\n";
				std::cout << two->getType() << " " << player << " is attacking" << std::endl;
				if(two->getType() == "Goblin" && one->getType() != "Goblin")
					two->attack(flagTwo);
				else
					two->attack();
				one->defense();
// test for a hit and set damage
				if(two->getAttVal() <= one->getDefVal()){
					std::cout << "The attack is a miss!" << std::endl;
					two->setDmg(0);}
				else{
					std::cout << "The attack is successful!" << std::endl;
					if(flag == false)
						val = two->getAttVal() - one->getDefVal();
					else
						val = (two->getAttVal() / 2) - one->getDefVal();
					one->setDmg(val);
					if(one->getDmg() == 0)
						std::cout << "Armor absorbed the attack!" << std::endl;
					else
						std::cout << one->getDmg() << " points of damage!" << std::endl;
					one->setSP();
					if(one->getSP() <= 0 )
						std::cout << "GAME OVER!" << std::endl;
					else
						std::cout << "Only " << one->getSP() << " Strength Points left!" << std::endl;}

// Check for end game
				if(one->getSP() <= 0 || two->getSP() <= 0){
					over = true;
					statistics(player, oneWin, twoWin);}
				turn++;}
		}while(over == false);
		game++;}



	else{
		do{
			if(turn % 2 == 0){
				player = "two";
				std::cout << "\n";
				std::cout << two->getType() << " " << player << " is attacking" << std::endl;
				if(two->getType() == "Goblin" && one->getType() != "Goblin")
					two->attack(flagTwo);
				else
					two->attack();
				one->defense();

// test for a hit and set damage
				if(two->getAttVal() <= one->getDefVal()){
					std::cout << "The attack is a miss!" << std::endl;
					two->setDmg(0);}
				else{
					std::cout << "The attack is successful!" << std::endl;
					if(flag == false)
						val = two->getAttVal() - one->getDefVal();
					else
						val = (two->getAttVal() / 2) - one->getDefVal();
					one->setDmg(val);
					if(one->getDmg() == 0)
						std::cout << "Armor absorbed the attack!" << std::endl;
					else
						std::cout << one->getDmg() << " points of damage!" << std::endl;
					one->setSP();
					if(one->getSP() <= 0 )
						std::cout << "GAME OVER!" << std::endl;
					else
						std::cout << "Only " << one->getSP() << " Strength Points left!" << std::endl;}

// Check for end game
				if(one->getSP() <= 0 || two->getSP() <= 0){
					over = true;
					statistics(player, oneWin, twoWin);}
				turn++;}


			else{
				player = "one";
				std::cout << "\n";
				std::cout << one->getType() << " " << player << " is attacking" << std::endl;
				if(one->getType() == "Goblin" && two->getType() != "Goblin")
					one->attack(flag);
				else
					one->attack();
				two->defense();

// test for a hit and set damage
				if(one->getAttVal() <= two->getDefVal()){
					std::cout << "The attack is a miss!" << std::endl;
					one->setDmg(0);}
				else{
					std::cout << "The attack is successful!" << std::endl;
					if(flagTwo == false)
						val = one->getAttVal() - two->getDefVal();
					else
						val = (one->getAttVal() / 2) - two->getDefVal();
					two->setDmg(val);
					if(two->getDmg() == 0)
						std::cout << "Armor absorbed the attack!" << std::endl;
					else
						std::cout << two->getDmg() << " points of damage!" << std::endl;
					two->setSP();
					if(two->getSP() <= 0 )
						std::cout << "GAME OVER!" << std::endl;
					else
						std::cout << "Only " << two->getSP() << " Strength Points left!" << std::endl;}

// Check for end game
				if(one->getSP() <= 0 || two->getSP() <= 0){
					over = true;
					statistics(player, oneWin, twoWin);}
				turn++;}
	}while(over == false);
	game++;}
}





