#include "TopOfTheSauce.h"

int main() {
	std::cout << "  --- The Maze ---\n  ";
	std::cout << "  1. New Game\n";
	std::cout << "  2. Exit    \n";

	std::cin >> Choice;

	switch (Choice) {

	case '1' :
		GameOne();
		break;
	case '2' :
		exit;

	default :
		break;

	}

	return 0;
}

// Orgi - Filled & Empty - Blanck.
void OrgiDrawBoard() {
	std::cout << " -----------------------------------------\n";
	std::cout << " | " << Board[0][0] << " | " << Board[0][1] << " | " << Board[0][2] << " | " << Board[0][3] << " | " << Board[0][4] << " | " << Board[0][5] << " | " << Board[0][6] << " | " << Board[0][7] << " | " << Board[0][8] << " | " << Board[0][9] << " |" << std::endl;
	std::cout << " -----------------------------------------\n";
	std::cout << " | " << Board[1][0] << " | " << Board[1][1] << " | " << Board[1][2] << " | " << Board[1][3] << " | " << Board[1][4] << " | " << Board[1][5] << " | " << Board[1][6] << " | " << Board[1][7] << " | " << Board[1][8] << " | " << Board[1][9] << " |" << std::endl;
	std::cout << " -----------------------------------------\n";
	std::cout << " | " << Board[2][0] << " | " << Board[2][1] << " | " << Board[2][2] << " | " << Board[2][3] << " | " << Board[2][4] << " | " << Board[2][5] << " | " << Board[2][6] << " | " << Board[2][7] << " | " << Board[2][8] << " | " << Board[2][9] << " |" << std::endl;
	std::cout << " -----------------------------------------\n";
	std::cout << " | " << Board[3][0] << " | " << Board[3][1] << " | " << Board[3][2] << " | " << Board[3][3] << " | " << Board[3][4] << " | " << Board[3][5] << " | " << Board[3][6] << " | " << Board[3][7] << " | " << Board[3][8] << " | " << Board[3][9] << " |" << std::endl;
	std::cout << " -----------------------------------------\n";
	std::cout << " | " << Board[4][0] << " | " << Board[4][1] << " | " << Board[4][2] << " | " << Board[4][3] << " | " << Board[4][4] << " | " << Board[4][5] << " | " << Board[4][6] << " | " << Board[4][7] << " | " << Board[4][8] << " | " << Board[4][9] << " |" << std::endl;
	std::cout << " -----------------------------------------\n";
	std::cout << " | " << Board[5][0] << " | " << Board[5][1] << " | " << Board[5][2] << " | " << Board[5][3] << " | " << Board[5][4] << " | " << Board[5][5] << " | " << Board[5][6] << " | " << Board[5][7] << " | " << Board[5][8] << " | " << Board[5][9] << " |" << std::endl;
	std::cout << " -----------------------------------------\n";
	
}
void EmptyBoard() {
	std::cout << " -----------------------------------------\n";
	std::cout << " | " << EmptyB[0][0] << "   " << EmptyB[0][1] << "   " << EmptyB[0][2] << "   " << EmptyB[0][3] << "   " << EmptyB[0][4] << "   " << EmptyB[0][5] << "   " << EmptyB[0][6] << "   " << EmptyB[0][7] << "   " << EmptyB[0][8] << "   " << EmptyB[0][9] << " |" << std::endl;
	std::cout << " |                                       |\n";
	std::cout << " | " << EmptyB[1][0] << "   " << EmptyB[1][1] << "   " << EmptyB[1][2] << "   " << EmptyB[1][3] << "   " << EmptyB[1][4] << "   " << EmptyB[1][5] << "   " << EmptyB[1][6] << "   " << EmptyB[1][7] << "   " << EmptyB[1][8] << "   " << EmptyB[1][9] << " |" << std::endl;
	std::cout << " |                                       |\n";
	std::cout << " | " << EmptyB[2][0] << "   " << EmptyB[2][1] << "   " << EmptyB[2][2] << "   " << EmptyB[2][3] << "   " << EmptyB[2][4] << "   " << EmptyB[2][5] << "   " << EmptyB[2][6] << "   " << EmptyB[2][7] << "   " << EmptyB[2][8] << "   " << EmptyB[2][9] << " |" << std::endl;
	std::cout << " |                                       |\n";
	std::cout << " | " << EmptyB[3][0] << "   " << EmptyB[3][1] << "   " << EmptyB[3][2] << "   " << EmptyB[3][3] << "   " << EmptyB[3][4] << "   " << EmptyB[3][5] << "   " << EmptyB[3][6] << "   " << EmptyB[3][7] << "   " << EmptyB[3][8] << "   " << EmptyB[3][9] << " |" << std::endl;
	std::cout << " |                                       |\n";
	std::cout << " | " << EmptyB[4][0] << "   " << EmptyB[4][1] << "   " << EmptyB[4][2] << "   " << EmptyB[4][3] << "   " << EmptyB[4][4] << "   " << EmptyB[4][5] << "   " << EmptyB[4][6] << "   " << EmptyB[4][7] << "   " << EmptyB[4][8] << "   " << EmptyB[4][9] << " |" << std::endl;
	std::cout << " |                                       |\n";
	std::cout << " | " << EmptyB[5][0] << "   " << EmptyB[5][1] << "   " << EmptyB[5][2] << "   " << EmptyB[5][3] << "   " << EmptyB[5][4] << "   " << EmptyB[5][5] << "   " << EmptyB[5][6] << "   " << EmptyB[5][7] << "   " << EmptyB[5][8] << "   " << EmptyB[5][9] << " |" << std::endl;
	std::cout << " -----------------------------------------\n";
}

void Pointers() {

}

//First Game.
void GameOne() {
	char choice{};

	std::cout << "Rules : \n";
	std::cout << "  - Your goal is to get out of the maze.\n";
	std::cout << "  - '*' is where you start.\n";
	std::cout << "  - '¤' is you.";
	std::cout << "  - Spaces will be visable as you explore.\n";
	std::cout << "  - You move around by clicking, on you keyboard, \n    the mark in the space you want to go. \n";
	std::cout << "  - To start the game click on 's' \n";
	std::cout << "  - To leave the game click on 'd'(not inGame function) \n";

	std::cin >> choice;

	switch (choice)
	{
	case 's' :
	EmptyB[0][1] = Board[0][1];
	EmptyB[1][0] = Board[1][0];
    EmptyBoard();
	Player();
	EmptyBoard();
	Player();
	EmptyBoard();
	Player();
	EmptyBoard();
	Player();
	EmptyBoard();
	
	break;

	case 'd' : 
		exit;

	default:
		break;
	}



}

void Player() {
char player = '¤';

char a{};
std::cin >> a;

if (a == '1') {
	EmptyB[0][1] = player;
	EmptyB[0][2] = Board[0][2];
	EmptyB[1][1] = Board[1][1];
}
if(a == '2'){
	EmptyB[0][2] = player;
	EmptyB[0][1] = Board[0][1];
	EmptyB[0][3] = Board[0][3];
	EmptyB[1][2] = Board[1][2];
}
if (a == '3') {
	EmptyB[0][4] = Board[0][4];
	EmptyB[0][2] = Board[0][2];
	EmptyB[1][3] = Board[1][3];
}
if (a == '4') {
	EmptyB[0][3] = Board[3][5];
	EmptyB[1][4] = Board[1][4];
}
if (a == '5') {
	
}
if (a == '6') {
	EmptyB[0][5] = Board[0][5];
}
if (a == '7') {
	EmptyB[0][6] = Board[0][6];
}
if (a == '8') {
	EmptyB[0][7] = Board[0][7];
	EmptyB[0][9] = Board[0][9];
}
if (a == '9') {
	EmptyB[0][8] = Board[0][8];
	EmptyB[1][9] = Board[1][9];
}if (a == 'A') {
	EmptyB[2][0] = Board[2][0];
}
if (a == 'B') {

}
if (a == 'C') {
	EmptyB[1][3] = Board[1][3];
	EmptyB[2][2] = Board[2][2];
}
if (a == 'D') {
	EmptyB[0][3] = Board[0][3];
	EmptyB[1][2] = Board[1][2];
	EmptyB[2][3] = Board[2][3];
}
if (a == 'E') {
	EmptyB[0][4] = Board[0][4];
	EmptyB[1][5] = Board[1][5];
}
if (a == 'F') {
	EmptyB[1][4] = Board[1][4];
	EmptyB[1][6] = Board[1][6];
}



}

//Maze used in GameOne.
void BoardOne() {
	std::cout << " -   -------------------------------------\n";
	std::cout << " | " << Board[0][0] << "   " << Board[0][1] << "   " << Board[0][2] << "   " << Board[0][3] << "   " << Board[0][4] << " | " << Board[0][5] << "   " << Board[0][6] << "   " << Board[0][7] << "   " << Board[0][8] << "   " << Board[0][9] << " |" << std::endl;
	std::cout << " |   |   -----   |   -------------   |   |\n";
	std::cout << " | " << Board[1][0] << " | " << Board[1][1] << " | " << Board[1][2] << "   " << Board[1][3] << " | " << Board[1][4] << "   " << Board[1][5] << "   " << Board[1][6] << "   " << Board[1][7] << "   " << Board[1][8] << " | " << Board[1][9] << " |" << std::endl;
	std::cout << " |   -----   |   ---------   ---------   |\n";
	std::cout << " | " << Board[2][0] << "   " << Board[2][1] << "   " << Board[2][2] << " | " << Board[2][3] << "   " << Board[2][4] << "   " << Board[2][5] << " | " << Board[2][6] << " | " << Board[2][7] << "   " << Board[2][8] << "   " << Board[2][9] << " |" << std::endl;
	std::cout << " |   ---------       |   |   |   --------|\n";
	std::cout << " | " << Board[3][0] << " | " << Board[3][1] << "   " << Board[3][2] << " | " << Board[3][3] << "   " << Board[3][4] << " | " << Board[3][5] << " | " << Board[3][6] << " | " << Board[3][7] << "   " << Board[3][8] << "   " << Board[3][9] << " |" << std::endl;
	std::cout << " |   |   |   |   ---------   ---------   |\n";
	std::cout << " | " << Board[4][0] << " | " << Board[4][1] << " | " << Board[4][2] << " | " << Board[4][3] << "   " << Board[4][4] << "   " << Board[4][5] << "   " << Board[4][6] << "   " << Board[4][7] << " | " << Board[4][8] << "   " << Board[4][9] << " |" << std::endl;
	std::cout << " |   -----   |   -----------------   ----|\n";
	std::cout << " | " << Board[5][0] << "   " << Board[5][1] << "   " << Board[5][2] << " | " << Board[5][3] << "   " << Board[5][4] << "   " << Board[5][5] << "   " << Board[5][6] << "   " << Board[5][7] << " | " << Board[5][8] << "   " << Board[5][9] << "  " << std::endl;
	std::cout << " -----------------------------------------\n";
}


