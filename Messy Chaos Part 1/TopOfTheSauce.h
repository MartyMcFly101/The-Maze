#include <iostream>
#pragma once

//Boards.
char Board[6][10] = {
	{'*','1','2','3','4','5','6','7','8','9'},
	{'A','B','C','D','E','F','G','H','I','J'},
	{'K','L','M','N','O','P','Q','R','S','T'},
	{'U','V','W','X','Y','Z','a','b','c','d'},
	{'e','f','g','h','i','j','k','l','m','n'},
	{'o','p','q','r','s','t','u','v','w','x'},};
char EmptyB[6][10] = {
	{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}, };

//Adress to each location/space.
void Pointer();


//Print diffirent gameboards.

//The Original Board - Not Playable.
void OrgiDrawBoard();

//Playable Boards.
void EmptyBoard();
void BoardOne();
void BoardTwo();
void BoardThree();
void BoardFour();



//First Manu.
char Choice{};
void Player();
//   Case 1:
void GameOne();