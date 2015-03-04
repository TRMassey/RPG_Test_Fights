#include "Dice.h"
#include "Creature.h"
#include "Barbarian.h"
#include "Shadow.h"
#include "Goblin.h"
#include "BlueM.h"
#include "Reptile.h"
#include<iostream>
#include<string>
#include<vector>

int displayMenu();
void fight(Creature* one, Creature* two, std::vector<int> &oneWin, std::vector<int> &twoWin, int &game);
void statistics(std::string player, std::vector<int> &oneWin, std::vector<int> &twoWin);

int main()
{
	Barbarian* b1 = new Barbarian;
	Barbarian* b2 = new Barbarian;
	Shadow* s1 = new Shadow;
	Shadow* s2 = new Shadow;
	Reptile* r1 = new Reptile;
	Reptile* r2 = new Reptile;
	BlueM* bl1 = new BlueM;
	BlueM* bl2 = new BlueM;
	Goblin* g1 = new Goblin;
	Goblin* g2 = new Goblin;	
	int menuChoice;
	int prevMenu;
	int game;
	std::string moveOn;
	std::vector<int> oneWin;
	std::vector<int> twoWin;

	game = 0;
	prevMenu = 0;
	std::cout << "\n" <<std::endl;
	menuChoice = displayMenu();

	while(menuChoice != 16)
	{
		switch(menuChoice)
		{
			case 1:		
					if(prevMenu != menuChoice){
						oneWin.clear();
						twoWin.clear();}
					std::cout << "Barbarian vs. Barbarian" << std::endl;
					fight(b1, b2, oneWin, twoWin, game);
					prevMenu = menuChoice;
					std::cout << "Please hit any key to return to menu";
					std::getline(std::cin, moveOn);
					delete b1;
					delete b2;
					b1 = new Barbarian;
					b2 = new Barbarian;
					menuChoice = displayMenu();
					break;

			case 2:		if(prevMenu != menuChoice){
						oneWin.clear();
						twoWin.clear();}
					std::cout << "Shadow vs. Shadow" << std::endl;
					fight(s1, s2, oneWin, twoWin, game);
					prevMenu = menuChoice;
					std::cout << "Please hit any key to return to menu";
					std::getline(std::cin, moveOn);
					delete s1;
					delete s2;
					s1 = new Shadow;
					s2 = new Shadow;
					menuChoice = displayMenu();
					break;

			case 3:		if(prevMenu != menuChoice){
						oneWin.clear();
						twoWin.clear();}
					std::cout << "Reptile Men vs. Reptile Men" << std::endl;
					fight(r1, r2, oneWin, twoWin, game);
					prevMenu = menuChoice;
					std::cout << "Please hit any key to return to menu";
					std::getline(std::cin, moveOn);
					delete r1;
					delete r2;
					r1 = new Reptile;
					r2 = new Reptile;
					menuChoice = displayMenu();
					break;

			case 4:		if(prevMenu != menuChoice){
						oneWin.clear();
						twoWin.clear();}
					std::cout << "Blue Men vs. Blue Men" << std::endl;
					fight(bl1, bl2, oneWin, twoWin, game);
					prevMenu = menuChoice;
					std::cout << "Please hit any key to return to menu";
					std::getline(std::cin, moveOn);
					bl1 = new BlueM;
					bl2 = new BlueM;
					menuChoice = displayMenu();
					break;
	
			case 5 :	if(prevMenu != menuChoice){
						oneWin.clear();
						twoWin.clear();}
					std::cout << "Goblin vs. Goblin" << std::endl;
					fight(g1, g2, oneWin, twoWin, game);
					prevMenu = menuChoice;
					std::cout << "Please hit any key to return to menu";
					std::getline(std::cin, moveOn);
					delete g1;
					delete g2;
					g1 = new Goblin;
					g2 = new Goblin;
					menuChoice = displayMenu();
					break;
	
			case 6	:	if(prevMenu != menuChoice){
						oneWin.clear();
						twoWin.clear();}
					std::cout << "Barbarian vs. Shadow" << std::endl;
					fight(b1, s2, oneWin, twoWin, game);
					prevMenu = menuChoice;
					std::cout << "Please hit any key to return to menu";
					std::getline(std::cin, moveOn);
					delete b1;
					delete s2;
					b1 = new Barbarian;
					s2 = new Shadow;
					menuChoice = displayMenu();
					break;

			case 7	:	if(prevMenu != menuChoice){
						oneWin.clear();
						twoWin.clear();}
					std::cout << "Barbarian vs. Reptile Men" << std::endl;
					fight(b1, r2, oneWin, twoWin, game);
					prevMenu = menuChoice;
					std::cout << "Please hit any key to return to menu";
					std::getline(std::cin, moveOn);
					delete b1;
					delete r2;
					b1 = new Barbarian;
					r2 = new Reptile;
					menuChoice = displayMenu();
					break;

			case 8	:	if(prevMenu != menuChoice){
						oneWin.clear();
						twoWin.clear();}
					std::cout << "Barbarian vs. Blue Men" << std::endl;
					fight(b1, bl2, oneWin, twoWin, game);
					prevMenu = menuChoice;
					std::cout << "Please hit any key to return to menu";
					std::getline(std::cin, moveOn);
					delete b1;
					delete bl2;
					b1 = new Barbarian;
					bl2 = new BlueM;
					menuChoice = displayMenu();
					break;
	
			case 9	:	if(prevMenu != menuChoice){
						oneWin.clear();
						twoWin.clear();}
					std::cout << "Barbarian vs. Goblin" << std::endl;
					fight(b1, g2, oneWin, twoWin, game);
					prevMenu = menuChoice;
					std::cout << "Please hit any key to return to menu";
					std::getline(std::cin, moveOn);
					delete b1;
					delete g2;
					b1 = new Barbarian;
					g2 = new Goblin;
					menuChoice = displayMenu();
					break;

			case 10	:	if(prevMenu != menuChoice){
						oneWin.clear();
						twoWin.clear();}
					std::cout << "Shadow vs. Reptile" << std::endl;
					fight(s1, r2, oneWin, twoWin, game);
					prevMenu = menuChoice;
					std::cout << "Please hit any key to return to menu";
					std::getline(std::cin, moveOn);
					delete s1;
					delete r2;
					s1 = new Shadow;
					r2 = new Reptile;
					menuChoice = displayMenu();
					break;

			case 11	:	if(prevMenu != menuChoice){
						oneWin.clear();
						twoWin.clear();}
					std::cout << "Shadow vs. Blue Men" << std::endl;
					fight(s1, bl2, oneWin, twoWin, game);
					prevMenu = menuChoice;
					std::cout << "Please hit any key to return to menu";
					std::getline(std::cin, moveOn);
					delete s1;
					delete bl2;
					s1 = new Shadow;
					bl2 = new BlueM;
					menuChoice = displayMenu();
					break;

			case 12	:	if(prevMenu != menuChoice){
						oneWin.clear();
						twoWin.clear();}
					std::cout << "Shadow vs. Goblin" << std::endl;
					fight(s1, g2, oneWin, twoWin, game);
					prevMenu = menuChoice;
					std::cout << "Please hit any key to return to menu";
					std::getline(std::cin, moveOn);
					delete s1;
					delete g2;
					s1 = new Shadow;
					g2 = new Goblin;
					menuChoice = displayMenu();
					break;

			case 13	:	if(prevMenu != menuChoice){
						oneWin.clear();
						twoWin.clear();}
					std::cout << "Blue Men vs. Goblin" << std::endl;
					fight(bl1, g2, oneWin, twoWin, game);
					prevMenu = menuChoice;
					std::cout << "Please hit any key to return to menu";
					std::getline(std::cin, moveOn);
					delete bl1;
					delete g2;
					bl1 = new BlueM;
					g2 = new Goblin;
					menuChoice = displayMenu();
					break;

			case 14	:	if(prevMenu != menuChoice){
						oneWin.clear();
						twoWin.clear();}
					std::cout << "Blue Men vs. Reptile" << std::endl;
					fight(bl1, r2, oneWin, twoWin, game);
					prevMenu = menuChoice;
					std::cout << "Please hit any key to return to menu";
					std::getline(std::cin, moveOn);
					delete bl1;
					delete r2;
					bl1 = new BlueM;
					r2 = new Reptile;
					menuChoice = displayMenu();
					break;

			case 15	:	if(prevMenu != menuChoice){
						oneWin.clear();
						twoWin.clear();}
					std::cout << "Goblin vs. Reptile" << std::endl;
					fight(g1, r2, oneWin, twoWin, game);
					prevMenu = menuChoice;
					std::cout << "Please hit any key to return to menu";
					std::getline(std::cin, moveOn);
					delete g1;
					delete r2;
					g1 = new Goblin;
					r2 = new Reptile;
					menuChoice = displayMenu();
					break;

			case 16 :	return 0;
		}
	}
}

/*******************************************************************
 * int displayMenu()
 *
 * Purpose: Displays the menu options for the user to pick from
 * Entry: Within the function, receives user input for menu choice
 * Exit: Returns the user's choice so it may be used in main for the
 * switch
 * *****************************************************************/
int displayMenu()
{
	int choice;
	std::string option;

	std::cout << "\n" << std::endl;
	std::cout << "Please select from the following options: " << std::endl;
	std::cout << "1. Test Barbarian vs. Barbarian " << std::endl;
	std::cout << "2. Test Shadow vs. Shadow " <<std::endl;
	std::cout << "3. Test Reptile vs. Reptile " << std::endl;
	std::cout << "4. Test Blue Men vs. Blue Men " << std::endl;
	std::cout << "5. Test Goblin vs. Goblin " << std::endl;
	std::cout << "6. Test Barabarian vs. Shadow " << std::endl;
	std::cout << "7. Test Barbarian vs. Reptile " << std::endl;
	std::cout << "8. Test Barbarian vs. Blue Men " << std::endl;
	std::cout << "9. Test Barbarian vs. Goblin " << std::endl;
	std::cout << "10. Test Shadow vs. Reptile " << std::endl;
	std::cout << "11. Test Shadow vs. Blue Men " << std::endl;
	std::cout << "12. Test Shadow. vs. Goblin " << std::endl;
	std::cout << "13. Test Blue Men vs. Goblin " << std::endl;
	std::cout << "14. Test Blue Men vs. Reptile " << std::endl;
	std::cout << "15. Test Goblin vs. Reptile " << std::endl;
	std:: cout << "16. Quit " << std::endl;

	std::cout << "\n" << "Selection: ";
	std::getline(std::cin, option);
	choice = atoi(option.c_str());
	
	while(choice < 1 || choice > 16)
	{
		std::cout << "Error. Please enter a valid choice: " << std::endl;
		choice = displayMenu();
	}

	std::cout << "\n" << std::endl;

return choice;
}





