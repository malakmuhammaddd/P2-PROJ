#include <iostream>
#include <conio.h>
using namespace std;
void DrawMem(unsigned char X[][2200])
{
	//FILL BL SPACE TO IGNORE GARBGE
	for (int r = 0; r < 198; r++)
	{
		for (int i = 0; i < 2200; i++)
		{
			X[r][i] = ' ';
		}
	}
	/////FRAME

	for (int c = 0; c < 2200; c++)
	{
		X[0][c] = '@';
		X[197][c] = '@';
	}
	for (int c = 0; c < 2200; c++)
	{
		X[1][c] = '@';
		X[196][c] = '@';

	}
	for (int r = 0; r < 198; r++)
	{
		X[r][0] = '@';
		X[r][2199] = '@';

	}
	for (int r = 0; r < 198; r++)
	{
		X[r][1] = '@';
		X[r][2198] = '@';
	}
	//TANY
	for (int c = 620; c < 2200; c++)
	{
		X[0][c] = '@';
		X[138][c] = '@';
	}
	for (int c = 620; c < 2200; c++)
	{
		X[1][c] = '@';
		X[138][c] = '@';

	}
	for (int c = 620; c < 2200; c++)
	{
		X[0][c] = '@';
		X[139][c] = '@';
	}
	for (int c = 620; c < 2200; c++)
	{
		X[1][c] = '@';
		X[139][c] = '@';

	}



	//Elhadba 
	int A = 1100;
	for (int r = 137; r > 113; r--)
	{
		for (int c = 952; c <= 1100; c++)
		{
			X[r][c] = '@';
		}
		X[r][A] = '|';

	}


	//LLAADDEER
	int SR = 135; int SC = 930;
	for (int i = 0; i < 8; i++)
	{
		for (int c = SC; c < SC + 22; c++)
		{
			X[SR][c] = (unsigned char)205;
		}
		SR -= 3;

	}

	//X[193][39] = 200;
	//X[165][39] = 201;
	//
	//X[193][51] = 188;
	//X[165][51] = 187;

	SR = 137; SC = 929;
	int poos = 952;
	for (int i = 0; i < 24; i++)
	{

		X[SR][SC] = (unsigned char)179;
		X[SR][poos] = (unsigned char)179;
		SR--;

	}
	//////////LADDER
	SR = 195;  SC = 250;
	for (int i = 0; i < 6; i++)
	{
		for (int c = SC; c < SC + 12; c++)
		{
			X[SR][c] = (unsigned char)205;
		}
		SR -= 2;
		SC += 13;
	}

	SR = SR; SC = SC;
	int posR = SR;
	for (int c = SC; c < SC + 100; c++)
	{
		X[SR][c] = (unsigned char)205;
		int posC = c;
	}
	X[196][249] = 200;
	X[195][249] = 201;

	SR = 196; SC = 250;
	for (int c = SC; c < SC + 255; c++)
	{
		X[SR][c] = (unsigned char)205;
	}

	SR = 194; SC = 262;
	for (int i = 0; i < 6; i++)
	{

		X[SR][SC] = (unsigned char)186;
		SR -= 2;
		SC += 13;
	}

	SR = 195; SC = 262;
	for (int i = 0; i < 6; i++)
	{
		X[SR][SC] = (unsigned char)188;
		X[SR - 2][SC] = (unsigned char)201;
		SC += 13;
		SR -= 2;
	}

	SR = posR; SC = 414;
	for (int i = 0; i < 7; i++)
	{
		for (int c = SC; c < SC + 13; c++)
		{
			X[SR][c] = (unsigned char)205;
		}
		SR += 2;
		SC += 13;
	}

	SR = posR + 1; SC = 427;
	for (int i = 0; i < 6; i++)
	{
		X[SR][SC] = (unsigned char)186;
		SR += 2;
		SC += 13;
	}

	SR = posR; SC = 427;
	for (int i = 0; i < 6; i++)
	{
		X[SR][SC] = (unsigned char)187;
		X[SR + 2][SC] = (unsigned char)200;
		SC += 13;
		SR += 2;
	}
	X[196][505] = 188;
	X[195][505] = 187;
}
////FROG
void Frog(unsigned char X[][2200], int& rFrog, int& cFrog)
{
	X[rFrog][cFrog] = '(';
	X[rFrog][cFrog + 1] = '`';
	X[rFrog][cFrog + 2] = ')';
	X[rFrog][cFrog + 3] = '-';
	X[rFrog][cFrog + 4] = '=';
	X[rFrog][cFrog + 5] = '-';
	X[rFrog][cFrog + 6] = '(';
	X[rFrog][cFrog + 7] = '`';
	X[rFrog][cFrog + 8] = ')';
	X[rFrog + 1][cFrog - 2] = '_';
	X[rFrog + 1][cFrog - 1] = '_';
	X[rFrog + 1][cFrog] = '(';
	X[rFrog + 1][cFrog + 4] = '"';
	X[rFrog + 1][cFrog + 8] = ')';
	X[rFrog + 1][cFrog + 9] = '_';
	X[rFrog + 1][cFrog + 10] = '_';
	X[rFrog + 2][cFrog - 3] = '/';
	X[rFrog + 2][cFrog - 1] = '_';
	X[rFrog + 2][cFrog] = '/';
	X[rFrog + 2][cFrog + 1] = '`';
	X[rFrog + 2][cFrog + 2] = '-';
	X[rFrog + 2][cFrog + 3] = '-';
	X[rFrog + 2][cFrog + 4] = '-';
	X[rFrog + 2][cFrog + 5] = '-';
	X[rFrog + 2][cFrog + 6] = '-';
	X[rFrog + 2][cFrog + 7] = '`';
	X[rFrog + 2][cFrog + 8] = '\\';
	X[rFrog + 2][cFrog + 9] = '_';
	X[rFrog + 2][cFrog + 2] = '\\';
	X[rFrog + 3][cFrog - 6] = '_';
	X[rFrog + 3][cFrog - 5] = '_';
	X[rFrog + 3][cFrog - 4] = '_';
	X[rFrog + 3][cFrog - 3] = '\\';
	X[rFrog + 3][cFrog - 2] = '\\';
	X[rFrog + 3][cFrog] = '\\';
	X[rFrog + 3][cFrog + 1] = '\\';
	X[rFrog + 3][cFrog + 7] = '/';
	X[rFrog + 3][cFrog + 8] = '/';
	X[rFrog + 3][cFrog + 10] = '/';
	X[rFrog + 3][cFrog + 11] = '/';
	X[rFrog + 3][cFrog + 12] = '_';
	X[rFrog + 3][cFrog + 13] = '_';
	X[rFrog + 3][cFrog + 14] = '_';
	X[rFrog + 4][cFrog - 6] = '>';
	X[rFrog + 4][cFrog - 5] = '_';
	X[rFrog + 4][cFrog - 4] = '_';
	X[rFrog + 4][cFrog - 3] = '_';
	X[rFrog + 4][cFrog - 2] = '_';
	X[rFrog + 4][cFrog - 1] = ')';
	X[rFrog + 4][cFrog] = '/';
	X[rFrog + 4][cFrog + 1] = '_';
	X[rFrog + 4][cFrog + 2] = '\\';
	X[rFrog + 4][cFrog + 3] = '-';
	X[rFrog + 4][cFrog + 4] = '-';
	X[rFrog + 4][cFrog + 5] = '-';
	X[rFrog + 4][cFrog + 6] = '/';
	X[rFrog + 4][cFrog + 7] = '_';
	X[rFrog + 4][cFrog + 8] = '\\';
	X[rFrog + 4][cFrog + 9] = '(';
	X[rFrog + 4][cFrog + 10] = '_';
	X[rFrog + 4][cFrog + 11] = '_';
	X[rFrog + 4][cFrog + 12] = '_';
	X[rFrog + 4][cFrog + 13] = '_';
	X[rFrog + 4][cFrog + 14] = '<';
}
//ELSBARA
void DrawElsbara(unsigned char X[][2200], int rElsbara, int cElsbara)
{
	X[rElsbara][cElsbara] = '/';
	X[rElsbara][cElsbara + 1] = '|';
	X[rElsbara][cElsbara + 2] = '|';
	X[rElsbara][cElsbara + 3] = '\\';
	X[rElsbara + 1][cElsbara] = '|';
	X[rElsbara + 1][cElsbara + 1] = '|';
	X[rElsbara + 1][cElsbara + 2] = '|';
	X[rElsbara + 1][cElsbara + 3] = '|';
	X[rElsbara + 2][cElsbara] = '|';
	X[rElsbara + 2][cElsbara + 1] = '|';
	X[rElsbara + 2][cElsbara + 2] = '|';
	X[rElsbara + 2][cElsbara + 3] = '|';
	X[rElsbara + 3][cElsbara] = '|';
	X[rElsbara + 3][cElsbara + 1] = '|';
	X[rElsbara + 3][cElsbara + 2] = '|';
	X[rElsbara + 3][cElsbara + 3] = '|';
	X[rElsbara + 3][cElsbara + 5] = '/';
	X[rElsbara + 3][cElsbara + 6] = '|';
	X[rElsbara + 3][cElsbara + 7] = '\\';
	X[rElsbara + 4][cElsbara - 5] = '/';
	X[rElsbara + 4][cElsbara - 4] = '|';
	X[rElsbara + 4][cElsbara - 3] = '\\';
	X[rElsbara + 4][cElsbara] = '|';
	X[rElsbara + 4][cElsbara + 1] = '|';
	X[rElsbara + 4][cElsbara + 2] = '|';
	X[rElsbara + 4][cElsbara + 3] = '|';
	X[rElsbara + 4][cElsbara + 5] = '|';
	X[rElsbara + 4][cElsbara + 6] = '|';
	X[rElsbara + 4][cElsbara + 7] = '|';
	X[rElsbara + 5][cElsbara - 5] = '|';
	X[rElsbara + 5][cElsbara - 4] = '|';
	X[rElsbara + 5][cElsbara - 3] = '|';
	X[rElsbara + 5][cElsbara] = '|';
	X[rElsbara + 5][cElsbara + 1] = '|';
	X[rElsbara + 5][cElsbara + 2] = '|';
	X[rElsbara + 5][cElsbara + 3] = '|';
	X[rElsbara + 5][cElsbara + 5] = '|';
	X[rElsbara + 5][cElsbara + 6] = '|';
	X[rElsbara + 5][cElsbara + 7] = '|';
	X[rElsbara + 6][cElsbara - 5] = '|';
	X[rElsbara + 6][cElsbara - 4] = '|';
	X[rElsbara + 6][cElsbara - 3] = '|';
	X[rElsbara + 6][cElsbara] = '|';
	X[rElsbara + 6][cElsbara + 1] = '|';
	X[rElsbara + 6][cElsbara + 2] = '|';
	X[rElsbara + 6][cElsbara + 3] = '|';
	X[rElsbara + 6][cElsbara + 5] = '|';
	X[rElsbara + 6][cElsbara + 6] = '|';
	X[rElsbara + 6][cElsbara + 7] = '|';
	X[rElsbara + 7][cElsbara - 5] = '|';
	X[rElsbara + 7][cElsbara - 4] = '|';
	X[rElsbara + 7][cElsbara - 3] = '|';
	X[rElsbara + 7][cElsbara] = '|';
	X[rElsbara + 7][cElsbara + 1] = '|';
	X[rElsbara + 7][cElsbara + 2] = '|';
	X[rElsbara + 7][cElsbara + 3] = '|';
	X[rElsbara + 7][cElsbara + 5] = '|';
	X[rElsbara + 7][cElsbara + 6] = '|';
	X[rElsbara + 7][cElsbara + 7] = '|';
	X[rElsbara + 8][cElsbara - 5] = '|';
	X[rElsbara + 8][cElsbara - 4] = '|';
	X[rElsbara + 8][cElsbara - 3] = '|';
	X[rElsbara + 8][cElsbara] = '|';
	X[rElsbara + 8][cElsbara + 1] = '|';
	X[rElsbara + 8][cElsbara + 2] = '|';
	X[rElsbara + 8][cElsbara + 3] = '|';
	X[rElsbara + 8][cElsbara + 4] = '|';
	X[rElsbara + 8][cElsbara + 5] = '|';
	X[rElsbara + 8][cElsbara + 6] = '|';
	X[rElsbara + 8][cElsbara + 7] = '/';
	X[rElsbara + 9][cElsbara - 5] = '|';
	X[rElsbara + 9][cElsbara - 4] = '|';
	X[rElsbara + 9][cElsbara - 3] = '|';
	X[rElsbara + 9][cElsbara - 2] = '_';
	X[rElsbara + 9][cElsbara - 1] = '_';
	X[rElsbara + 9][cElsbara] = '|';
	X[rElsbara + 9][cElsbara + 1] = '|';
	X[rElsbara + 9][cElsbara + 2] = '|';
	X[rElsbara + 9][cElsbara + 3] = '|';
	X[rElsbara + 10][cElsbara - 5] = '\\';
	X[rElsbara + 10][cElsbara - 4] = '|';
	X[rElsbara + 10][cElsbara - 3] = '|';
	X[rElsbara + 10][cElsbara - 2] = '|';
	X[rElsbara + 10][cElsbara - 1] = '|';
	X[rElsbara + 10][cElsbara] = '|';
	X[rElsbara + 10][cElsbara + 1] = '|';
	X[rElsbara + 10][cElsbara + 2] = '|';
	X[rElsbara + 10][cElsbara + 3] = '|';
	X[rElsbara + 11][cElsbara] = '|';
	X[rElsbara + 11][cElsbara + 1] = '|';
	X[rElsbara + 11][cElsbara + 2] = '|';
	X[rElsbara + 11][cElsbara + 3] = '|';
	X[rElsbara + 12][cElsbara] = '|';
	X[rElsbara + 12][cElsbara + 1] = '|';
	X[rElsbara + 12][cElsbara + 2] = '|';
	X[rElsbara + 12][cElsbara + 3] = '|';
	X[rElsbara + 13][cElsbara] = '|';
	X[rElsbara + 13][cElsbara + 1] = '|';
	X[rElsbara + 13][cElsbara + 2] = '|';
	X[rElsbara + 13][cElsbara + 3] = '|';
	X[rElsbara + 14][cElsbara] = '|';
	X[rElsbara + 14][cElsbara + 1] = '|';
	X[rElsbara + 14][cElsbara + 2] = '|';
	X[rElsbara + 14][cElsbara + 3] = '|';
}
////////////HERO
void DrawHero(unsigned char X[][2200], int rH, int cH)
{
	X[rH][cH] = '.';
	X[rH][cH + 1] = '-';
	X[rH][cH + 2] = '"';
	X[rH][cH + 3] = '"';
	X[rH][cH + 4] = '-';
	X[rH][cH + 5] = '.';
	X[rH + 1][cH - 1] = '/';
	X[rH + 1][cH] = '-';
	X[rH + 1][cH + 1] = '.';
	X[rH + 1][cH + 2] = '{';
	X[rH + 1][cH + 3] = '}';
	X[rH + 1][cH + 6] = '\\';
	X[rH + 2][cH - 1] = '|';
	X[rH + 2][cH + 1] = '_';
	X[rH + 2][cH + 2] = '\\';
	X[rH + 2][cH + 3] = '_';
	X[rH + 2][cH + 4] = '_';
	X[rH + 2][cH + 5] = '.';
	X[rH + 2][cH + 6] = '|';
	X[rH + 3][cH - 1] = '\\';
	X[rH + 3][cH] = '/';
	X[rH + 3][cH + 1] = '^';
	X[rH + 3][cH + 2] = ')';
	X[rH + 3][cH + 3] = '^';
	X[rH + 3][cH + 5] = '\\';
	X[rH + 3][cH + 6] = '/';
	X[rH + 4][cH] = '\\';
	X[rH + 4][cH + 2] = '=';
	X[rH + 4][cH + 5] = '/';
	X[rH + 5][cH - 5] = '.';
	X[rH + 5][cH - 4] = '-';
	X[rH + 5][cH - 3] = '-';
	X[rH + 5][cH - 2] = '-';
	X[rH + 5][cH - 1] = '.';
	X[rH + 5][cH] = '/';
	X[rH + 5][cH + 1] = '`';
	X[rH + 5][cH + 2] = '-';
	X[rH + 5][cH + 3] = '-';
	X[rH + 5][cH + 4] = '`';
	X[rH + 5][cH + 5] = '\\';
	X[rH + 5][cH + 6] = '.';
	X[rH + 5][cH + 7] = '-';
	X[rH + 5][cH + 8] = '-';
	X[rH + 5][cH + 9] = '.';
	X[rH + 5][cH + 10] = '_';
	X[rH + 6][cH - 6] = '/';
	X[rH + 6][cH] = '`';
	X[rH + 6][cH + 1] = ';';
	X[rH + 6][cH + 2] = '-';
	X[rH + 6][cH + 3] = '-';
	X[rH + 6][cH + 4] = '¡';
	X[rH + 6][cH + 5] = '`';
	X[rH + 6][cH + 11] = '\\';

	X[rH + 7][cH - 7] = ';';
	X[rH + 7][cH + 2] = '/';
	X[rH + 7][cH + 3] = '`';
	X[rH + 7][cH + 11] = ';';

	X[rH + 8][cH - 7] = '|';
	X[rH + 8][cH + 1] = '|';
	X[rH + 8][cH + 2] = '*';
	X[rH + 8][cH + 11] = '|';

	X[rH + 9][cH - 7] = '/';
	X[rH + 9][cH - 3] = '|';
	X[rH + 9][cH + 1] = '|';
	X[rH + 9][cH + 7] = '|';
	X[rH + 9][cH + 12] = '\\';

	X[rH + 10][cH - 7] = '|';
	X[rH + 10][cH - 2] = '\\';
	X[rH + 10][cH + 1] = '|';
	X[rH + 10][cH + 2] = '*';
	X[rH + 10][cH + 7] = '/';
	X[rH + 10][cH + 12] = '|';

	X[rH + 11][cH - 7] = '\\';
	X[rH + 11][cH - 6] = '_';
	X[rH + 11][cH - 2] = '|';
	X[rH + 11][cH - 1] = '\\';
	X[rH + 11][cH] = '_';
	X[rH + 11][cH + 1] = '|';
	X[rH + 11][cH + 2] = '_';
	X[rH + 11][cH + 3] = '_';
	X[rH + 11][cH + 4] = '_';
	X[rH + 11][cH + 5] = '_';
	X[rH + 11][cH + 6] = '/';
	X[rH + 11][cH + 7] = '|';
	X[rH + 11][cH + 10] = '_';
	X[rH + 11][cH + 11] = '_';
	X[rH + 11][cH + 12] = '/';

	X[rH + 12][cH - 5] = '\\';
	X[rH + 12][cH - 4] = '_';
	X[rH + 12][cH - 3] = '_';
	X[rH + 12][cH - 2] = '/';
	X[rH + 12][cH - 1] = '/';
	X[rH + 12][cH] = '=';
	X[rH + 12][cH + 1] = '=';
	X[rH + 12][cH + 2] = '=';
	X[rH + 12][cH + 3] = '=';
	X[rH + 12][cH + 4] = '=';
	X[rH + 12][cH + 5] = '=';
	X[rH + 12][cH + 6] = '\\';
	X[rH + 12][cH + 7] = '\\';
	X[rH + 12][cH + 8] = '_';
	X[rH + 12][cH + 9] = '_';
	X[rH + 12][cH + 10] = '/';

	X[rH + 13][cH - 5] = '/';
	X[rH + 13][cH - 3] = '/';
	X[rH + 13][cH - 2] = '/';
	X[rH + 13][cH - 1] = '_';
	X[rH + 13][cH + 6] = '_';
	X[rH + 13][cH + 7] = '\\';
	X[rH + 13][cH + 8] = '\\';
	X[rH + 13][cH + 10] = '\\';

	X[rH + 14][cH - 5] = '-';
	X[rH + 14][cH - 4] = '¡';
	X[rH + 14][cH - 1] = '|';
	X[rH + 14][cH] = '`';
	X[rH + 14][cH + 1] = '"';
	X[rH + 14][cH + 2] = '"';
	X[rH + 14][cH + 3] = '"';
	X[rH + 14][cH + 4] = '"';
	X[rH + 14][cH + 5] = '`';
	X[rH + 14][cH + 6] = '|';
	X[rH + 14][cH + 9] = '`';
	X[rH + 14][cH + 10] = '-';

	X[rH + 15][cH - 1] = '|';
	X[rH + 15][cH + 2] = 'L';
	X[rH + 15][cH + 6] = '|';

	X[rH + 15][cH - 1] = '>';
	X[rH + 15][cH] = '_';
	X[rH + 15][cH + 2] = '|';
	X[rH + 15][cH + 3] = '|';
	X[rH + 15][cH + 5] = '_';
	X[rH + 15][cH + 6] = '<';

	X[rH + 16][cH - 1] = '|';
	X[rH + 16][cH + 2] = '|';
	X[rH + 16][cH + 3] = '|';
	X[rH + 16][cH + 6] = '|';

	X[rH + 17][cH - 1] = '|';
	X[rH + 17][cH + 2] = '|';
	X[rH + 17][cH + 3] = '|';
	X[rH + 17][cH + 6] = '|';

	X[rH + 18][cH - 2] = '/';
	X[rH + 18][cH + 2] = '|';
	X[rH + 18][cH + 3] = '|';
	X[rH + 18][cH + 7] = '\\';

	X[rH + 19][cH - 3] = '/';
	X[rH + 19][cH + 2] = '/';
	X[rH + 19][cH + 3] = ',';
	X[rH + 19][cH + 8] = '\\';

	X[rH + 20][cH - 2] = '`';
	X[rH + 20][cH - 1] = '|';
	X[rH + 20][cH] = '"';
	X[rH + 20][cH + 1] = '|';
	X[rH + 20][cH + 2] = '`';
	X[rH + 20][cH + 3] = '"';
	X[rH + 20][cH + 4] = '|';
	X[rH + 20][cH + 5] = '"';
	X[rH + 20][cH + 6] = '|';
	X[rH + 20][cH + 7] = '"';
	X[rH + 20][cH + 8] = '`';

	X[rH + 21][cH - 2] = '(';
	X[rH + 21][cH + 1] = '\\';
	X[rH + 21][cH + 4] = '(';
	X[rH + 21][cH + 7] = '\\';

	X[rH + 22][cH - 1] = '\\';
	X[rH + 22][cH] = '_';
	X[rH + 22][cH + 1] = '_';
	X[rH + 22][cH + 2] = '\\';
	X[rH + 22][cH + 5] = '\\';
	X[rH + 22][cH + 6] = '_';
	X[rH + 22][cH + 7] = '_';
	X[rH + 22][cH + 8] = '\\';
}
void MoveHero(int& rH, int& cH, unsigned char key, unsigned char X[][2200], int& fffff)
{
	if (key == 'D')
	{
		if (X[rH + 22][cH + 9] == ' ')
			cH += 5;


		if (X[rH + 23][cH - 1] == ' ' &&
			X[rH + 23][cH] == ' ' &&
			X[rH + 23][cH + 1] == ' ' &&
			X[rH + 23][cH + 2] == ' ' &&
			X[rH + 23][cH + 5] == ' ' &&
			X[rH + 23][cH + 6] == ' ' &&
			X[rH + 23][cH + 7] == ' ' &&
			X[rH + 23][cH + 8] == ' ')
		{
			rH++;
		}
		if (X[rH + 22][cH + 9] == 179)
			cH += 2;



	}
	if (key == 'A')
	{
		///el ard && el 7eta


		if (X[rH + 22][cH - 10] == ' ')
			cH -= 2;

		if (X[rH + 23][cH - 1] == ' ' &&
			X[rH + 23][cH] == ' ' &&
			X[rH + 23][cH + 1] == ' ' &&
			X[rH + 23][cH + 2] == ' ' &&
			X[rH + 23][cH + 5] == ' ' &&
			X[rH + 23][cH + 6] == ' ' &&
			X[rH + 23][cH + 7] == ' ' &&
			X[rH + 23][cH + 8] == ' ')
		{
			rH++;
		}

	}
	if (key == 'W')
	{
		rH--;
		if (X[rH + 23][cH - 1] == ' ' &&
			X[rH + 23][cH] == ' ' &&
			X[rH + 23][cH + 1] == ' ' &&
			X[rH + 23][cH + 2] == ' ' &&
			X[rH + 23][cH + 5] == ' ' &&
			X[rH + 23][cH + 6] == ' ' &&
			X[rH + 23][cH + 7] == ' ' &&
			X[rH + 23][cH + 8] == ' ')
		{
			rH++;
		}
	}
	if (key == 'S')
	{
		if (X[rH + 23][cH - 1] == ' ' &&
			X[rH + 23][cH] == ' ' &&
			X[rH + 23][cH + 1] == ' ' &&
			X[rH + 23][cH + 2] == ' ' &&
			X[rH + 23][cH + 5] == ' ' &&
			X[rH + 23][cH + 6] == ' ' &&
			X[rH + 23][cH + 7] == ' ' &&
			X[rH + 23][cH + 8] == ' ')
		{
			rH++;
		}
	}
}

///SCROLLING
void scrolling(int& rH, int& cH, unsigned char X[][2200], int& fffff)
{
	system("cls");

	if (rH + 40 >= 198)
	{
		for (int r = rH - 20; r < 198; r++)
		{
			if (cH + 200 < 2200)
			{
				for (int c = cH - 9; c < cH + 200; c++)
				{
					cout << X[r][c];
				}
			}
			else if (cH + 200 >= 2200)
			{
				for (int c = cH - 9; c < 2200; c++)
				{
					cout << X[r][c];
				}
			}
		}
	}
	else if (rH + 40 < 198 && rH - 20 != 0)
	{
		fffff = 1;
		for (int r = rH - 20; r < rH + 40; r++)
		{
			if (cH + 200 < 2200)
			{
				for (int c = cH - 9; c < cH + 200; c++)
				{
					cout << X[r][c];
				}
			}
			else if (cH + 200 >= 2200)
			{
				for (int c = cH - 9; c < 2200; c++)
				{
					cout << X[r][c];
				}
			}
		}
	}
	else if (rH - 20 == 0)
	{
		for (int r = 0; r < rH + 40; r++)
		{
			if (cH + 200 < 2200)
			{
				for (int c = cH - 9; c < cH + 200; c++)
				{
					cout << X[r][c];
				}
			}
			else if (cH + 200 >= 2200)
			{
				for (int c = cH - 9; c < 2200; c++)
				{
					cout << X[r][c];
				}
			}
		}
	}

}
//////////////PLANE
void DrawPlane(unsigned char X[][2200], int cPlane, int rPlane)
{
	X[rPlane][cPlane + 13] = 250;
	X[rPlane][cPlane + 14] = '-';
	X[rPlane][cPlane + 15] = '-';
	X[rPlane][cPlane + 16] = '-';
	X[rPlane][cPlane + 17] = '-';
	X[rPlane][cPlane + 18] = '-';
	X[rPlane][cPlane + 19] = '-';
	X[rPlane][cPlane + 20] = ',';
	X[rPlane + 1][cPlane + 14] = '=';
	X[rPlane + 1][cPlane + 15] = '\\';
	X[rPlane + 1][cPlane + 22] = '\\';
	X[rPlane + 2][cPlane + 1] = 250;
	X[rPlane + 2][cPlane + 2] = '-';
	X[rPlane + 2][cPlane + 3] = '-';
	X[rPlane + 2][cPlane + 4] = '-';
	X[rPlane + 2][cPlane + 5] = 250;
	X[rPlane + 2][cPlane + 15] = '=';
	X[rPlane + 2][cPlane + 16] = '\\';
	X[rPlane + 2][cPlane + 23] = '\\';
	X[rPlane + 3][cPlane + 1] = '|';
	X[rPlane + 3][cPlane + 3] = 'C';
	X[rPlane + 3][cPlane + 4] = '~';
	X[rPlane + 3][cPlane + 6] = '\\';
	X[rPlane + 3][cPlane + 16] = '=';
	X[rPlane + 3][cPlane + 17] = '\\';
	X[rPlane + 3][cPlane + 24] = '\\';
	X[rPlane + 4][cPlane + 1] = '|';
	X[rPlane + 4][cPlane + 7] = '`';
	X[rPlane + 4][cPlane + 8] = '-';
	X[rPlane + 4][cPlane + 9] = '-';
	X[rPlane + 4][cPlane + 10] = '-';
	X[rPlane + 4][cPlane + 11] = '-';
	X[rPlane + 4][cPlane + 12] = '-';
	X[rPlane + 4][cPlane + 13] = '-';
	X[rPlane + 4][cPlane + 14] = '-';
	X[rPlane + 4][cPlane + 15] = '-';
	X[rPlane + 4][cPlane + 16] = '-';
	X[rPlane + 4][cPlane + 17] = '-';
	X[rPlane + 4][cPlane + 18] = 96;
	X[rPlane + 4][cPlane + 19] = '-';
	X[rPlane + 4][cPlane + 20] = '-';
	X[rPlane + 4][cPlane + 21] = '-';
	X[rPlane + 4][cPlane + 22] = '-';
	X[rPlane + 4][cPlane + 23] = '-';
	X[rPlane + 4][cPlane + 24] = '-';
	X[rPlane + 4][cPlane + 25] = 96;
	X[rPlane + 4][cPlane + 26] = '-';
	X[rPlane + 4][cPlane + 27] = '-';
	X[rPlane + 4][cPlane + 28] = '-';
	X[rPlane + 4][cPlane + 29] = '-';
	X[rPlane + 4][cPlane + 30] = '-';
	X[rPlane + 4][cPlane + 31] = '-';
	X[rPlane + 4][cPlane + 32] = '-';
	X[rPlane + 4][cPlane + 33] = '-';
	X[rPlane + 4][cPlane + 34] = '-';
	X[rPlane + 4][cPlane + 35] = '-';
	X[rPlane + 4][cPlane + 36] = ',';
	X[rPlane + 5][cPlane] = 250;
	X[rPlane + 5][cPlane + 1] = 96;
	X[rPlane + 5][cPlane + 7] = 'L';
	X[rPlane + 5][cPlane + 8] = 'I';
	X[rPlane + 5][cPlane + 9] = 250;
	X[rPlane + 5][cPlane + 10] = '-';
	X[rPlane + 5][cPlane + 11] = 250;
	X[rPlane + 5][cPlane + 12] = 'L';
	X[rPlane + 5][cPlane + 13] = 'I';
	X[rPlane + 5][cPlane + 15] = 'L';
	X[rPlane + 5][cPlane + 16] = 'I';
	X[rPlane + 5][cPlane + 18] = 'L';
	X[rPlane + 5][cPlane + 19] = 'I';
	X[rPlane + 5][cPlane + 21] = 'L';
	X[rPlane + 5][cPlane + 22] = 'I';
	X[rPlane + 5][cPlane + 24] = 'L';
	X[rPlane + 5][cPlane + 25] = 'I';
	X[rPlane + 5][cPlane + 27] = 'L';
	X[rPlane + 5][cPlane + 28] = 'I';
	X[rPlane + 5][cPlane + 30] = 'L';
	X[rPlane + 5][cPlane + 31] = 'I';
	X[rPlane + 5][cPlane + 32] = 250;
	X[rPlane + 5][cPlane + 33] = '-';
	X[rPlane + 5][cPlane + 34] = 250;
	X[rPlane + 5][cPlane + 35] = 'L';
	X[rPlane + 5][cPlane + 36] = 'I';
	X[rPlane + 5][cPlane + 37] = '`';
	X[rPlane + 5][cPlane + 38] = '-';
	X[rPlane + 5][cPlane + 39] = 250;
	X[rPlane + 6][cPlane] = '\\';
	X[rPlane + 6][cPlane + 2] = '_';
	X[rPlane + 6][cPlane + 3] = '/';
	X[rPlane + 6][cPlane + 4] = 250;
	X[rPlane + 6][cPlane + 5] = '_';
	X[rPlane + 6][cPlane + 6] = '_';
	X[rPlane + 6][cPlane + 7] = '_';
	X[rPlane + 6][cPlane + 8] = '_';
	X[rPlane + 6][cPlane + 9] = '|';
	X[rPlane + 6][cPlane + 10] = '_';
	X[rPlane + 6][cPlane + 11] = '|';
	X[rPlane + 6][cPlane + 12] = '_';
	X[rPlane + 6][cPlane + 13] = '_';
	X[rPlane + 6][cPlane + 14] = '_';
	X[rPlane + 6][cPlane + 15] = '_';
	X[rPlane + 6][cPlane + 16] = '_';
	X[rPlane + 6][cPlane + 17] = '_';
	X[rPlane + 6][cPlane + 18] = 250;
	X[rPlane + 6][cPlane + 19] = '-';
	X[rPlane + 6][cPlane + 20] = '-';
	X[rPlane + 6][cPlane + 21] = '-';
	X[rPlane + 6][cPlane + 22] = '-';
	X[rPlane + 6][cPlane + 23] = '-';
	X[rPlane + 6][cPlane + 24] = '-';
	X[rPlane + 6][cPlane + 25] = ',';
	X[rPlane + 6][cPlane + 26] = '_';
	X[rPlane + 6][cPlane + 27] = '_';
	X[rPlane + 6][cPlane + 28] = '_';
	X[rPlane + 6][cPlane + 29] = '_';
	X[rPlane + 6][cPlane + 30] = '_';
	X[rPlane + 6][cPlane + 31] = '_';
	X[rPlane + 6][cPlane + 32] = '|';
	X[rPlane + 6][cPlane + 33] = '_';
	X[rPlane + 6][cPlane + 34] = '|';
	X[rPlane + 6][cPlane + 35] = '_';
	X[rPlane + 6][cPlane + 36] = '_';
	X[rPlane + 6][cPlane + 37] = '_';
	X[rPlane + 6][cPlane + 38] = '_';
	X[rPlane + 6][cPlane + 39] = '_';
	X[rPlane + 6][cPlane + 40] = ')';
	X[rPlane + 7][cPlane + 17] = '/';
	X[rPlane + 7][cPlane + 24] = '/';
	X[rPlane + 8][cPlane + 15] = '=';
	X[rPlane + 8][cPlane + 16] = '/';
	X[rPlane + 8][cPlane + 23] = '/';
	X[rPlane + 9][cPlane + 14] = '=';
	X[rPlane + 9][cPlane + 15] = '/';
	X[rPlane + 9][cPlane + 22] = '/';
	X[rPlane + 10][cPlane + 13] = '=';
	X[rPlane + 10][cPlane + 14] = '/';
	X[rPlane + 10][cPlane + 21] = '/';
	X[rPlane + 11][cPlane + 13] = '/';
	X[rPlane + 11][cPlane + 14] = '_';
	X[rPlane + 11][cPlane + 15] = '_';
	X[rPlane + 11][cPlane + 16] = '_';
	X[rPlane + 11][cPlane + 17] = '_';
	X[rPlane + 11][cPlane + 18] = '_';
	X[rPlane + 11][cPlane + 19] = ',';
	X[rPlane + 11][cPlane + 20] = 96;
}
void MovePlane(int& cPlane, int rPlane, int& dirFlag)
{
	if (dirFlag == 1)
	{
		cPlane++;
		if (cPlane > 220)
		{
			dirFlag = -1;
		}
	}
	else
	{
		cPlane--;
		if (cPlane == 120)
		{
			dirFlag = 1;
		}
	}
}
/////////ELSAROOO5
void DrawRocket(unsigned char X[][2200], int& rRocket, int& cPlane, int& h)
{

	X[rRocket][h] = '|';
	X[rRocket][h + 1] = '\\';
	X[rRocket][h + 2] = '*';
	X[rRocket][h + 3] = '*';
	X[rRocket][h + 4] = '/';
	X[rRocket][h + 5] = '|';
	X[rRocket + 1][h] = '\\';
	X[rRocket + 1][h + 2] = '=';
	X[rRocket + 1][h + 3] = '=';
	X[rRocket + 1][h + 5] = '/';
	X[rRocket + 2][h + 1] = '|';
	X[rRocket + 2][h + 4] = '|';
	X[rRocket + 3][h + 1] = '|';
	X[rRocket + 3][h + 4] = '|';
	X[rRocket + 4][h + 1] = '\\';
	X[rRocket + 4][h + 4] = '/';
	X[rRocket + 5][h + 2] = '\\';
	X[rRocket + 5][h + 3] = '/';



}
void MoveRocket(int& rRocket, int& cPlane, int& h)
{
	if (rRocket < 190)
	{
		rRocket++;
	}
	if (rRocket == 190)
	{
		rRocket = 160;
		h = cPlane + 5;
	}
}
//void CoutToScreen(unsigned char X[][2200])
//{
//	system("cls");
//	for (int r = 0; r < 62; r++)
//	{
//		for (int i = 0; i < 2200; i++)
//		{
//			cout << X[r][i];
//		}
//	}
//}
/////////TANK
void DrawTank(unsigned char X[][2200], int& rTank, int& cTank)
{
	X[rTank][cTank + 47] = '_';
	X[rTank][cTank + 48] = '.';
	X[rTank][cTank + 49] = '.';
	X[rTank][cTank + 50] = '-';
	X[rTank][cTank + 51] = '-';
	X[rTank][cTank + 52] = '-';
	X[rTank][cTank + 53] = '-';
	X[rTank][cTank + 54] = '.';
	X[rTank][cTank + 55] = '.';
	X[rTank][cTank + 56] = '_';
	X[rTank + 1][cTank + 46] = ']';
	X[rTank + 1][cTank + 47] = '_';
	X[rTank + 1][cTank + 48] = '.';
	X[rTank + 1][cTank + 49] = '-';
	X[rTank + 1][cTank + 50] = '-';
	X[rTank + 1][cTank + 51] = '.';
	X[rTank + 1][cTank + 52] = '_';
	X[rTank + 1][cTank + 53] = '_';
	X[rTank + 1][cTank + 54] = '_';
	X[rTank + 1][cTank + 55] = '_';
	X[rTank + 1][cTank + 56] = '_';
	X[rTank + 1][cTank + 57] = '[';
	X[rTank + 2][cTank + 44] = '_';
	X[rTank + 2][cTank + 45] = '_';
	X[rTank + 2][cTank + 46] = '_';
	X[rTank + 2][cTank + 47] = '|';
	X[rTank + 2][cTank + 48] = 96;
	X[rTank + 2][cTank + 49] = '-';
	X[rTank + 2][cTank + 50] = '-';
	X[rTank + 2][cTank + 51] = 96;
	X[rTank + 2][cTank + 52] = '_';
	X[rTank + 2][cTank + 53] = '_';
	X[rTank + 2][cTank + 54] = '.';
	X[rTank + 2][cTank + 55] = '.';
	X[rTank + 2][cTank + 56] = '|';
	X[rTank + 2][cTank + 57] = '-';
	X[rTank + 2][cTank + 58] = '-';
	X[rTank + 2][cTank + 59] = '.';
	X[rTank + 2][cTank + 60] = '_';
	X[rTank + 3][cTank + 30] = '_';
	X[rTank + 3][cTank + 31] = '_';
	X[rTank + 3][cTank + 41] = '"';
	X[rTank + 3][cTank + 42] = '"';
	X[rTank + 3][cTank + 43] = '"';
	X[rTank + 3][cTank + 48] = ';';
	X[rTank + 3][cTank + 61] = ':';
	X[rTank + 4][cTank + 22] = '(';
	X[rTank + 4][cTank + 23] = ')';
	X[rTank + 4][cTank + 24] = '_';
	X[rTank + 4][cTank + 26] = '"';
	X[rTank + 4][cTank + 27] = '"';
	X[rTank + 4][cTank + 28] = '"';
	X[rTank + 4][cTank + 29] = '"';
	X[rTank + 4][cTank + 30] = '-';
	X[rTank + 4][cTank + 31] = '-';
	X[rTank + 4][cTank + 32] = '-';
	X[rTank + 4][cTank + 33] = '.';
	X[rTank + 4][cTank + 34] = '.';
	X[rTank + 4][cTank + 35] = '.';
	X[rTank + 4][cTank + 36] = '_';
	X[rTank + 4][cTank + 37] = '_';
	X[rTank + 4][cTank + 38] = '.';
	X[rTank + 4][cTank + 39] = 96;
	X[rTank + 4][cTank + 40] = '"';
	X[rTank + 4][cTank + 41] = '"';
	X[rTank + 4][cTank + 42] = '!';
	X[rTank + 4][cTank + 43] = '"';
	X[rTank + 4][cTank + 44] = ':';
	X[rTank + 4][cTank + 47] = '/';
	X[rTank + 4][cTank + 52] = '_';
	X[rTank + 4][cTank + 53] = '_';
	X[rTank + 4][cTank + 54] = '_';
	X[rTank + 4][cTank + 62] = ':';
	X[rTank + 5][cTank + 25] = '"';
	X[rTank + 5][cTank + 26] = '"';
	X[rTank + 5][cTank + 27] = '"';
	X[rTank + 5][cTank + 28] = '-';
	X[rTank + 5][cTank + 29] = '-';
	X[rTank + 5][cTank + 30] = '-';
	X[rTank + 5][cTank + 31] = '.';
	X[rTank + 5][cTank + 32] = '.';
	X[rTank + 5][cTank + 33] = '.';
	X[rTank + 5][cTank + 34] = '_';
	X[rTank + 5][cTank + 35] = '_';
	X[rTank + 5][cTank + 36] = '\\';
	X[rTank + 5][cTank + 37] = ']';
	X[rTank + 5][cTank + 38] = '.';
	X[rTank + 5][cTank + 39] = '.';
	X[rTank + 5][cTank + 40] = '_';
	X[rTank + 5][cTank + 41] = '_';
	X[rTank + 5][cTank + 42] = ']';
	X[rTank + 5][cTank + 44] = '|';
	X[rTank + 5][cTank + 46] = '/';
	X[rTank + 5][cTank + 51] = '[';
	X[rTank + 5][cTank + 53] = '0';
	X[rTank + 5][cTank + 55] = ']';
	X[rTank + 5][cTank + 62] = ':';
	X[rTank + 6][cTank + 36] = '"';
	X[rTank + 6][cTank + 37] = '"';
	X[rTank + 6][cTank + 38] = '"';
	X[rTank + 6][cTank + 39] = '!';
	X[rTank + 6][cTank + 40] = '-';
	X[rTank + 6][cTank + 41] = '-';
	X[rTank + 6][cTank + 42] = '.';
	X[rTank + 6][cTank + 43] = '/';
	X[rTank + 6][cTank + 45] = '/';
	X[rTank + 6][cTank + 52] = '"';
	X[rTank + 6][cTank + 53] = '"';
	X[rTank + 6][cTank + 54] = '"';
	X[rTank + 6][cTank + 63] = ':';
	X[rTank + 7][cTank + 29] = '_';
	X[rTank + 7][cTank + 30] = '_';
	X[rTank + 7][cTank + 33] = '.';
	X[rTank + 7][cTank + 34] = '.';
	X[rTank + 7][cTank + 35] = '.';
	X[rTank + 7][cTank + 36] = '.';
	X[rTank + 7][cTank + 37] = '_';
	X[rTank + 7][cTank + 38] = '_';
	X[rTank + 7][cTank + 39] = '_';
	X[rTank + 7][cTank + 40] = '_';
	X[rTank + 7][cTank + 41] = '_';
	X[rTank + 7][cTank + 42] = ';';
	X[rTank + 7][cTank + 43] = '"';
	X[rTank + 7][cTank + 44] = '"';
	X[rTank + 7][cTank + 45] = 96;
	X[rTank + 7][cTank + 46] = '.';
	X[rTank + 7][cTank + 47] = '_';
	X[rTank + 7][cTank + 48] = '_';
	X[rTank + 7][cTank + 49] = '_';
	X[rTank + 7][cTank + 50] = '_';
	X[rTank + 7][cTank + 51] = '_';
	X[rTank + 7][cTank + 52] = '_';
	X[rTank + 7][cTank + 53] = '_';
	X[rTank + 7][cTank + 54] = '_';
	X[rTank + 7][cTank + 55] = '_';
	X[rTank + 7][cTank + 56] = '_';
	X[rTank + 7][cTank + 57] = '.';
	X[rTank + 7][cTank + 58] = '.';
	X[rTank + 7][cTank + 59] = '-';
	X[rTank + 7][cTank + 60] = '-';
	X[rTank + 7][cTank + 61] = '.';
	X[rTank + 7][cTank + 62] = '.';
	X[rTank + 7][cTank + 63] = ':';
	X[rTank + 7][cTank + 64] = '_';
	X[rTank + 8][cTank + 28] = '/';
	X[rTank + 8][cTank + 31] = '!';
	X[rTank + 8][cTank + 32] = '"';
	X[rTank + 8][cTank + 33] = 96;
	X[rTank + 8][cTank + 34] = 96;
	X[rTank + 8][cTank + 35] = 96;
	X[rTank + 8][cTank + 36] = 96;
	X[rTank + 8][cTank + 37] = 96;
	X[rTank + 8][cTank + 38] = 96;
	X[rTank + 8][cTank + 39] = '!';
	X[rTank + 8][cTank + 40] = 96;
	X[rTank + 8][cTank + 41] = 96;
	X[rTank + 8][cTank + 42] = 96;
	X[rTank + 8][cTank + 43] = 96;
	X[rTank + 8][cTank + 44] = 96;
	X[rTank + 8][cTank + 45] = 96;
	X[rTank + 8][cTank + 46] = 96;
	X[rTank + 8][cTank + 47] = 96;
	X[rTank + 8][cTank + 48] = 96;
	X[rTank + 8][cTank + 49] = 96;
	X[rTank + 8][cTank + 50] = '|';
	X[rTank + 8][cTank + 51] = 96;
	X[rTank + 8][cTank + 52] = 96;
	X[rTank + 8][cTank + 53] = 96;
	X[rTank + 8][cTank + 54] = 96;
	X[rTank + 8][cTank + 55] = '/';
	X[rTank + 8][cTank + 56] = 96;
	X[rTank + 8][cTank + 58] = 96;
	X[rTank + 8][cTank + 60] = 96;
	X[rTank + 8][cTank + 62] = 96;
	X[rTank + 8][cTank + 64] = '\\';
	X[rTank + 8][cTank + 65] = '"';
	X[rTank + 8][cTank + 66] = '-';
	X[rTank + 8][cTank + 67] = '-';
	X[rTank + 8][cTank + 68] = '.';
	X[rTank + 8][cTank + 69] = '.';
	X[rTank + 8][cTank + 70] = '_';
	X[rTank + 8][cTank + 71] = '_';
	X[rTank + 8][cTank + 74] = '_';
	X[rTank + 8][cTank + 75] = '_';
	X[rTank + 8][cTank + 76] = '.';
	X[rTank + 8][cTank + 77] = '.';
	X[rTank + 9][cTank + 27] = '/';
	X[rTank + 9][cTank + 30] = '/';
	X[rTank + 9][cTank + 31] = '.';
	X[rTank + 9][cTank + 32] = '-';
	X[rTank + 9][cTank + 33] = '-';
	X[rTank + 9][cTank + 34] = '.';
	X[rTank + 9][cTank + 39] = '|';
	X[rTank + 9][cTank + 50] = '|';
	X[rTank + 9][cTank + 53] = '.';
	X[rTank + 9][cTank + 54] = 96;
	X[rTank + 9][cTank + 65] = '\\';
	X[rTank + 9][cTank + 66] = 96;
	X[rTank + 9][cTank + 68] = 96;
	X[rTank + 9][cTank + 70] = 96;
	X[rTank + 9][cTank + 71] = '.';
	X[rTank + 9][cTank + 72] = '"';
	X[rTank + 9][cTank + 73] = '"';
	X[rTank + 9][cTank + 74] = '-';
	X[rTank + 9][cTank + 75] = '-';
	X[rTank + 9][cTank + 76] = '.';
	X[rTank + 9][cTank + 77] = '{';
	X[rTank + 9][cTank + 78] = 96;
	X[rTank + 9][cTank + 79] = '.';
	X[rTank + 10][cTank + 7] = '_';
	X[rTank + 10][cTank + 8] = '.';
	X[rTank + 10][cTank + 9] = '.';
	X[rTank + 10][cTank + 10] = '.';
	X[rTank + 10][cTank + 11] = '_';
	X[rTank + 10][cTank + 12] = '_';
	X[rTank + 10][cTank + 25] = '>';
	X[rTank + 10][cTank + 26] = '=';
	X[rTank + 10][cTank + 27] = '7';
	X[rTank + 10][cTank + 29] = '/';
	X[rTank + 10][cTank + 30] = '/';
	X[rTank + 10][cTank + 31] = '.';
	X[rTank + 10][cTank + 32] = '-';
	X[rTank + 10][cTank + 33] = '.';
	X[rTank + 10][cTank + 34] = ':';
	X[rTank + 10][cTank + 39] = '|';
	X[rTank + 10][cTank + 50] = '|';
	X[rTank + 10][cTank + 51] = '.';
	X[rTank + 10][cTank + 52] = 96;
	X[rTank + 10][cTank + 66] = '\\';
	X[rTank + 10][cTank + 68] = '.';
	X[rTank + 10][cTank + 69] = '_';
	X[rTank + 10][cTank + 70] = '.';
	X[rTank + 10][cTank + 71] = '_';
	X[rTank + 10][cTank + 72] = '_';
	X[rTank + 10][cTank + 75] = 96;
	X[rTank + 10][cTank + 77] = 96;
	X[rTank + 10][cTank + 78] = '"';
	X[rTank + 10][cTank + 79] = '"';
	X[rTank + 10][cTank + 80] = 96;
	X[rTank + 10][cTank + 81] = '.';
	X[rTank + 11][cTank + 4] = '.';
	X[rTank + 11][cTank + 5] = '-';
	X[rTank + 11][cTank + 6] = 96;
	X[rTank + 11][cTank + 8] = '/';
	X[rTank + 11][cTank + 13] = '"';
	X[rTank + 11][cTank + 14] = '"';
	X[rTank + 11][cTank + 15] = '"';
	X[rTank + 11][cTank + 16] = '"';
	X[rTank + 11][cTank + 17] = '-';
	X[rTank + 11][cTank + 18] = '-';
	X[rTank + 11][cTank + 19] = '-';
	X[rTank + 11][cTank + 20] = '-';
	X[rTank + 11][cTank + 21] = '.';
	X[rTank + 11][cTank + 22] = '.';
	X[rTank + 11][cTank + 23] = '.';
	X[rTank + 11][cTank + 24] = '.';
	X[rTank + 11][cTank + 25] = '/';
	X[rTank + 11][cTank + 27] = '"';
	X[rTank + 11][cTank + 28] = '"';
	X[rTank + 11][cTank + 29] = '>';
	X[rTank + 11][cTank + 30] = '=';
	X[rTank + 11][cTank + 31] = '=';
	X[rTank + 11][cTank + 32] = '7';
	X[rTank + 11][cTank + 33] = '-';
	X[rTank + 11][cTank + 34] = '.';
	X[rTank + 11][cTank + 35] = '.';
	X[rTank + 11][cTank + 36] = '.';
	X[rTank + 11][cTank + 37] = '.';
	X[rTank + 11][cTank + 38] = '.';
	X[rTank + 11][cTank + 39] = ':';
	X[rTank + 11][cTank + 40] = '_';
	X[rTank + 11][cTank + 41] = '_';
	X[rTank + 11][cTank + 42] = '_';
	X[rTank + 11][cTank + 43] = '_';
	X[rTank + 11][cTank + 44] = '_';
	X[rTank + 11][cTank + 45] = '_';
	X[rTank + 11][cTank + 50] = '|';
	X[rTank + 11][cTank + 67] = '\\';
	X[rTank + 11][cTank + 68] = '|';
	X[rTank + 11][cTank + 70] = '|';
	X[rTank + 11][cTank + 73] = '"';
	X[rTank + 11][cTank + 74] = '"';
	X[rTank + 11][cTank + 75] = ';';
	X[rTank + 11][cTank + 76] = '.';
	X[rTank + 11][cTank + 77] = ';';
	X[rTank + 11][cTank + 78] = '-';
	X[rTank + 11][cTank + 79] = '"';
	X[rTank + 11][cTank + 80] = '>';
	X[rTank + 11][cTank + 82] = '\\';
	X[rTank + 12][cTank + 4] = '"';
	X[rTank + 12][cTank + 5] = '"';
	X[rTank + 12][cTank + 6] = '"';
	X[rTank + 12][cTank + 7] = '"';
	X[rTank + 12][cTank + 8] = ';';
	X[rTank + 12][cTank + 20] = '_';
	X[rTank + 12][cTank + 21] = '_';
	X[rTank + 12][cTank + 22] = '.';
	X[rTank + 12][cTank + 23] = '.';
	X[rTank + 12][cTank + 24] = '"';
	X[rTank + 12][cTank + 28] = '.';
	X[rTank + 12][cTank + 29] = '-';
	X[rTank + 12][cTank + 30] = '-';
	X[rTank + 12][cTank + 31] = '"';
	X[rTank + 12][cTank + 32] = '/';
	X[rTank + 12][cTank + 33] = '"';
	X[rTank + 12][cTank + 34] = '"';
	X[rTank + 12][cTank + 35] = '"';
	X[rTank + 12][cTank + 36] = '"';
	X[rTank + 12][cTank + 37] = '"';
	X[rTank + 12][cTank + 38] = '-';
	X[rTank + 12][cTank + 39] = '-';
	X[rTank + 12][cTank + 40] = '-';
	X[rTank + 12][cTank + 41] = '-';
	X[rTank + 12][cTank + 42] = '.';
	X[rTank + 12][cTank + 43] = '.';
	X[rTank + 12][cTank + 44] = '.';
	X[rTank + 12][cTank + 45] = '.';
	X[rTank + 12][cTank + 46] = '"';
	X[rTank + 12][cTank + 47] = '"';
	X[rTank + 12][cTank + 48] = '"';
	X[rTank + 12][cTank + 49] = '"';
	X[rTank + 12][cTank + 50] = '"';
	X[rTank + 12][cTank + 51] = '-';
	X[rTank + 12][cTank + 52] = '-';
	X[rTank + 12][cTank + 53] = '-';
	X[rTank + 12][cTank + 54] = '-';
	X[rTank + 12][cTank + 55] = '.';
	X[rTank + 12][cTank + 56] = '.';
	X[rTank + 12][cTank + 57] = '.';
	X[rTank + 12][cTank + 58] = '.';
	X[rTank + 12][cTank + 59] = '.';
	X[rTank + 12][cTank + 60] = 'H';
	X[rTank + 12][cTank + 61] = '_';
	X[rTank + 12][cTank + 62] = '_';
	X[rTank + 12][cTank + 63] = '_';
	X[rTank + 12][cTank + 64] = '_';
	X[rTank + 12][cTank + 65] = '_';
	X[rTank + 12][cTank + 66] = '_';
	X[rTank + 12][cTank + 67] = '_';
	X[rTank + 12][cTank + 68] = '\\';
	X[rTank + 12][cTank + 69] = '_';
	X[rTank + 12][cTank + 70] = '!';
	X[rTank + 12][cTank + 71] = '.';
	X[rTank + 12][cTank + 72] = '.';
	X[rTank + 12][cTank + 73] = '.';
	X[rTank + 12][cTank + 74] = '.';
	X[rTank + 12][cTank + 75] = 96;
	X[rTank + 12][cTank + 76] = '-';
	X[rTank + 12][cTank + 77] = '-';
	X[rTank + 12][cTank + 78] = '-';
	X[rTank + 12][cTank + 79] = '-';
	X[rTank + 12][cTank + 80] = '"';
	X[rTank + 12][cTank + 81] = '"';
	X[rTank + 12][cTank + 82] = '"';
	X[rTank + 12][cTank + 83] = '"';
	X[rTank + 12][cTank + 84] = ']';
	X[rTank + 13][cTank + 2] = '_';
	X[rTank + 13][cTank + 3] = '.';
	X[rTank + 13][cTank + 4] = '.';
	X[rTank + 13][cTank + 5] = '-';
	X[rTank + 13][cTank + 6] = '-';
	X[rTank + 13][cTank + 7] = '-';
	X[rTank + 13][cTank + 8] = '|';
	X[rTank + 13][cTank + 9] = '.';
	X[rTank + 13][cTank + 10] = '_';
	X[rTank + 13][cTank + 12] = '_';
	X[rTank + 13][cTank + 13] = '_';
	X[rTank + 13][cTank + 14] = '.';
	X[rTank + 13][cTank + 15] = '.';
	X[rTank + 13][cTank + 16] = '-';
	X[rTank + 13][cTank + 17] = '-';
	X[rTank + 13][cTank + 18] = '"';
	X[rTank + 13][cTank + 19] = '"';
	X[rTank + 13][cTank + 27] = '_';
	X[rTank + 13][cTank + 28] = '!';
	X[rTank + 13][cTank + 29] = '.';
	X[rTank + 13][cTank + 30] = '-';
	X[rTank + 13][cTank + 31] = '=';
	X[rTank + 13][cTank + 32] = '_';
	X[rTank + 13][cTank + 33] = '.';
	X[rTank + 13][cTank + 46] = '"';
	X[rTank + 13][cTank + 47] = '"';
	X[rTank + 13][cTank + 48] = '"';
	X[rTank + 13][cTank + 49] = '"';
	X[rTank + 13][cTank + 50] = '"';
	X[rTank + 13][cTank + 51] = '"';
	X[rTank + 13][cTank + 52] = '"';
	X[rTank + 13][cTank + 53] = '"';
	X[rTank + 13][cTank + 54] = '"';
	X[rTank + 13][cTank + 55] = '"';
	X[rTank + 13][cTank + 56] = '"';
	X[rTank + 13][cTank + 57] = '"';
	X[rTank + 13][cTank + 58] = '"';
	X[rTank + 13][cTank + 59] = '"';
	X[rTank + 13][cTank + 60] = '"';
	X[rTank + 13][cTank + 80] = ';';
	X[rTank + 13][cTank + 81] = '"';
	X[rTank + 13][cTank + 82] = '"';
	X[rTank + 13][cTank + 83] = '"';
	X[rTank + 14][cTank + 1] = '/';
	X[rTank + 14][cTank + 5] = '.';
	X[rTank + 14][cTank + 6] = '-';
	X[rTank + 14][cTank + 7] = '"';
	X[rTank + 14][cTank + 8] = ';';
	X[rTank + 14][cTank + 9] = '-';
	X[rTank + 14][cTank + 10] = '.';
	X[rTank + 14][cTank + 11] = 96;
	X[rTank + 14][cTank + 12] = '-';
	X[rTank + 14][cTank + 13] = '-';
	X[rTank + 14][cTank + 14] = '.';
	X[rTank + 14][cTank + 15] = '.';
	X[rTank + 14][cTank + 16] = '.';
	X[rTank + 14][cTank + 17] = '_';
	X[rTank + 14][cTank + 18] = '_';
	X[rTank + 14][cTank + 19] = '_';
	X[rTank + 14][cTank + 25] = '.';
	X[rTank + 14][cTank + 26] = '"';
	X[rTank + 14][cTank + 28] = '.';
	X[rTank + 14][cTank + 29] = '-';
	X[rTank + 14][cTank + 30] = '"';
	X[rTank + 14][cTank + 31] = '"';
	X[rTank + 14][cTank + 32] = ';';
	X[rTank + 14][cTank + 34] = 96;
	X[rTank + 14][cTank + 35] = ';';
	X[rTank + 14][cTank + 36] = '"';
	X[rTank + 14][cTank + 37] = '"';
	X[rTank + 14][cTank + 38] = '-';
	X[rTank + 14][cTank + 39] = '"';
	X[rTank + 14][cTank + 40] = '"';
	X[rTank + 14][cTank + 41] = '-';
	X[rTank + 14][cTank + 42] = '.';
	X[rTank + 14][cTank + 43] = '.';
	X[rTank + 14][cTank + 44] = '.';
	X[rTank + 14][cTank + 45] = '^';
	X[rTank + 14][cTank + 46] = '.';
	X[rTank + 14][cTank + 47] = '.';
	X[rTank + 14][cTank + 48] = '_';
	X[rTank + 14][cTank + 49] = '_';
	X[rTank + 14][cTank + 50] = '.';
	X[rTank + 14][cTank + 51] = '.';
	X[rTank + 14][cTank + 52] = '.';
	X[rTank + 14][cTank + 53] = '-';
	X[rTank + 14][cTank + 54] = 'v';
	X[rTank + 14][cTank + 55] = '.';
	X[rTank + 14][cTank + 56] = '^';
	X[rTank + 14][cTank + 57] = '_';
	X[rTank + 14][cTank + 58] = '_';
	X[rTank + 14][cTank + 59] = '_';
	X[rTank + 14][cTank + 60] = ',';
	X[rTank + 14][cTank + 63] = ',';
	X[rTank + 14][cTank + 64] = '_';
	X[rTank + 14][cTank + 65] = '_';
	X[rTank + 14][cTank + 66] = 'v';
	X[rTank + 14][cTank + 67] = '.';
	X[rTank + 14][cTank + 68] = '_';
	X[rTank + 14][cTank + 69] = '_';
	X[rTank + 14][cTank + 70] = '.';
	X[rTank + 14][cTank + 71] = '.';
	X[rTank + 14][cTank + 72] = '-';
	X[rTank + 14][cTank + 73] = '-';
	X[rTank + 14][cTank + 74] = '^';
	X[rTank + 14][cTank + 75] = '"';
	X[rTank + 14][cTank + 76] = '-';
	X[rTank + 14][cTank + 77] = '-';
	X[rTank + 14][cTank + 78] = '"';
	X[rTank + 14][cTank + 79] = '"';
	X[rTank + 14][cTank + 80] = '-';
	X[rTank + 14][cTank + 81] = 'v';
	X[rTank + 14][cTank + 82] = '.';
	X[rTank + 14][cTank + 83] = '^';
	X[rTank + 14][cTank + 84] = 'v';
	X[rTank + 14][cTank + 85] = ',';
	X[rTank + 15][cTank] = ';';
	X[rTank + 15][cTank + 4] = ';';
	X[rTank + 15][cTank + 8] = '|';
	X[rTank + 15][cTank + 9] = 96;
	X[rTank + 15][cTank + 10] = '.';
	X[rTank + 15][cTank + 20] = '"';
	X[rTank + 15][cTank + 21] = '"';
	X[rTank + 15][cTank + 22] = '"';
	X[rTank + 15][cTank + 23] = '-';
	X[rTank + 15][cTank + 24] = '/';
	X[rTank + 15][cTank + 26] = '.';
	X[rTank + 15][cTank + 27] = '/';
	X[rTank + 15][cTank + 28] = ';';
	X[rTank + 15][cTank + 31] = ';';
	X[rTank + 15][cTank + 35] = ';';
	X[rTank + 15][cTank + 36] = '\\';
	X[rTank + 15][cTank + 37] = 'P';
	X[rTank + 15][cTank + 38] = '.';
	X[rTank + 15][cTank + 47] = ';';
	X[rTank + 15][cTank + 51] = ';';
	X[rTank + 15][cTank + 60] = '"';
	X[rTank + 15][cTank + 61] = '"';
	X[rTank + 15][cTank + 62] = '"';
	X[rTank + 15][cTank + 63] = '"';
	X[rTank + 15][cTank + 64] = '_';
	X[rTank + 15][cTank + 65] = '_';
	X[rTank + 15][cTank + 66] = '_';
	X[rTank + 15][cTank + 67] = '_';
	X[rTank + 15][cTank + 68] = ';';
	X[rTank + 15][cTank + 71] = ';';
	X[rTank + 15][cTank + 72] = '.';
	X[rTank + 15][cTank + 73] = '-';
	X[rTank + 15][cTank + 74] = '-';
	X[rTank + 15][cTank + 75] = '"';
	X[rTank + 15][cTank + 76] = '"';
	X[rTank + 15][cTank + 77] = '"';
	X[rTank + 15][cTank + 78] = '"';
	X[rTank + 15][cTank + 79] = '/';
	X[rTank + 15][cTank + 80] = '/';
	X[rTank + 15][cTank + 82] = 96;
	X[rTank + 15][cTank + 83] = '"';
	X[rTank + 15][cTank + 84] = '"';
	X[rTank + 15][cTank + 85] = '<';
	X[rTank + 15][cTank + 86] = ',';
	X[rTank + 16][cTank] = ';';
	X[rTank + 16][cTank + 4] = ';';
	X[rTank + 16][cTank + 8] = '|';
	X[rTank + 16][cTank + 10] = '1';
	X[rTank + 16][cTank + 23] = ';';
	X[rTank + 16][cTank + 26] = ';';
	X[rTank + 16][cTank + 29] = 96;
	X[rTank + 16][cTank + 30] = '.';
	X[rTank + 16][cTank + 31] = ':';
	X[rTank + 16][cTank + 33] = '.';
	X[rTank + 16][cTank + 34] = 96;
	X[rTank + 16][cTank + 37] = ';';
	X[rTank + 16][cTank + 38] = '<';
	X[rTank + 16][cTank + 42] = '_';
	X[rTank + 16][cTank + 43] = '_';
	X[rTank + 16][cTank + 44] = '_';
	X[rTank + 16][cTank + 45] = '.';
	X[rTank + 16][cTank + 46] = '-';
	X[rTank + 16][cTank + 47] = 96;
	X[rTank + 16][cTank + 48] = '.';
	X[rTank + 16][cTank + 49] = '_';
	X[rTank + 16][cTank + 50] = '.';
	X[rTank + 16][cTank + 51] = 96;
	X[rTank + 16][cTank + 52] = '-';
	X[rTank + 16][cTank + 53] = '-';
	X[rTank + 16][cTank + 54] = '-';
	X[rTank + 16][cTank + 55] = '-';
	X[rTank + 16][cTank + 56] = '-';
	X[rTank + 16][cTank + 57] = '-';
	X[rTank + 16][cTank + 58] = '"';
	X[rTank + 16][cTank + 59] = '"';
	X[rTank + 16][cTank + 60] = '"';
	X[rTank + 16][cTank + 61] = '"';
	X[rTank + 16][cTank + 62] = '"';
	X[rTank + 16][cTank + 63] = '"';
	X[rTank + 16][cTank + 64] = '_';
	X[rTank + 16][cTank + 65] = '_';
	X[rTank + 16][cTank + 66] = '_';
	X[rTank + 16][cTank + 67] = '_';
	X[rTank + 16][cTank + 68] = 96;
	X[rTank + 16][cTank + 69] = '.';
	X[rTank + 16][cTank + 70] = '.';
	X[rTank + 16][cTank + 71] = 96;
	X[rTank + 16][cTank + 72] = '.';
	X[rTank + 16][cTank + 73] = '-';
	X[rTank + 16][cTank + 74] = '-';
	X[rTank + 16][cTank + 75] = '"';
	X[rTank + 16][cTank + 76] = '"';
	X[rTank + 16][cTank + 77] = '"';
	X[rTank + 16][cTank + 78] = ';';
	X[rTank + 16][cTank + 79] = ';';
	X[rTank + 16][cTank + 80] = 96;
	X[rTank + 16][cTank + 83] = 'o';
	X[rTank + 16][cTank + 85] = 96;
	X[rTank + 16][cTank + 86] = ';';
	X[rTank + 17][cTank] = 96;
	X[rTank + 17][cTank + 1] = '.';
	X[rTank + 17][cTank + 5] = '\\';
	X[rTank + 17][cTank + 6] = '_';
	X[rTank + 17][cTank + 7] = '_';
	X[rTank + 17][cTank + 8] = ':';
	X[rTank + 17][cTank + 9] = '/';
	X[rTank + 17][cTank + 10] = '_';
	X[rTank + 17][cTank + 11] = '_';
	X[rTank + 17][cTank + 23] = ';';
	X[rTank + 17][cTank + 26] = ';';
	X[rTank + 17][cTank + 27] = '-';
	X[rTank + 17][cTank + 28] = '-';
	X[rTank + 17][cTank + 29] = '"';
	X[rTank + 17][cTank + 30] = '"';
	X[rTank + 17][cTank + 31] = '(';
	X[rTank + 17][cTank + 32] = ')';
	X[rTank + 17][cTank + 33] = '_';
	X[rTank + 17][cTank + 37] = ';';
	X[rTank + 17][cTank + 38] = 96;
	X[rTank + 17][cTank + 41] = '/';
	X[rTank + 17][cTank + 42] = '_';
	X[rTank + 17][cTank + 43] = '_';
	X[rTank + 17][cTank + 44] = '_';
	X[rTank + 17][cTank + 46] = '.';
	X[rTank + 17][cTank + 47] = '-';
	X[rTank + 17][cTank + 48] = '"';
	X[rTank + 17][cTank + 50] = '_';
	X[rTank + 17][cTank + 51] = '_';
	X[rTank + 17][cTank + 52] = '_';
	X[rTank + 17][cTank + 53] = '_';
	X[rTank + 17][cTank + 54] = '-';
	X[rTank + 17][cTank + 55] = '-';
	X[rTank + 17][cTank + 56] = '-';
	X[rTank + 17][cTank + 57] = '"';
	X[rTank + 17][cTank + 58] = '"';
	X[rTank + 17][cTank + 59] = '"';
	X[rTank + 17][cTank + 60] = '"';
	X[rTank + 17][cTank + 61] = '"';
	X[rTank + 17][cTank + 62] = '"';
	X[rTank + 17][cTank + 63] = '"';
	X[rTank + 17][cTank + 65] = '_';
	X[rTank + 17][cTank + 66] = '_';
	X[rTank + 17][cTank + 67] = '.';
	X[rTank + 17][cTank + 68] = '.';
	X[rTank + 17][cTank + 69] = '_';
	X[rTank + 17][cTank + 71] = '_';
	X[rTank + 17][cTank + 72] = '_';
	X[rTank + 17][cTank + 73] = '.';
	X[rTank + 17][cTank + 74] = '_';
	X[rTank + 17][cTank + 78] = 96;
	X[rTank + 17][cTank + 79] = '>';
	X[rTank + 17][cTank + 80] = '.';
	X[rTank + 17][cTank + 81] = ',';
	X[rTank + 17][cTank + 84] = ',';
	X[rTank + 17][cTank + 85] = '/';
	X[rTank + 17][cTank + 86] = ';';
	X[rTank + 18][cTank + 2] = '\\';
	X[rTank + 18][cTank + 6] = '\\';
	X[rTank + 18][cTank + 11] = '/';
	X[rTank + 18][cTank + 12] = '"';
	X[rTank + 18][cTank + 13] = '"';
	X[rTank + 18][cTank + 14] = '"';
	X[rTank + 18][cTank + 15] = '<';
	X[rTank + 18][cTank + 16] = '-';
	X[rTank + 18][cTank + 17] = '-';
	X[rTank + 18][cTank + 18] = '.';
	X[rTank + 18][cTank + 19] = '.';
	X[rTank + 18][cTank + 20] = '.';
	X[rTank + 18][cTank + 21] = '_';
	X[rTank + 18][cTank + 22] = '_';
	X[rTank + 18][cTank + 23] = ';';
	X[rTank + 18][cTank + 26] = 96;
	X[rTank + 18][cTank + 27] = '_';
	X[rTank + 18][cTank + 28] = '.';
	X[rTank + 18][cTank + 29] = '-';
	X[rTank + 18][cTank + 30] = 96;
	X[rTank + 18][cTank + 31] = '/';
	X[rTank + 18][cTank + 32] = ';';
	X[rTank + 18][cTank + 34] = '"';
	X[rTank + 18][cTank + 35] = '"';
	X[rTank + 18][cTank + 36] = ';';
	X[rTank + 18][cTank + 38] = ';';
	X[rTank + 18][cTank + 39] = '.';
	X[rTank + 18][cTank + 40] = 96;
	X[rTank + 18][cTank + 41] = '.';
	X[rTank + 18][cTank + 42] = 96;
	X[rTank + 18][cTank + 45] = '"';
	X[rTank + 18][cTank + 46] = '-';
	X[rTank + 18][cTank + 47] = '.';
	X[rTank + 18][cTank + 48] = '.';
	X[rTank + 18][cTank + 49] = 96;
	X[rTank + 18][cTank + 54] = '"';
	X[rTank + 18][cTank + 55] = '-';
	X[rTank + 18][cTank + 56] = '.';
	X[rTank + 18][cTank + 63] = '/';
	X[rTank + 18][cTank + 64] = '"';
	X[rTank + 18][cTank + 65] = '/';
	X[rTank + 18][cTank + 70] = '`';
	X[rTank + 18][cTank + 71] = '_';
	X[rTank + 18][cTank + 72] = '_';
	X[rTank + 18][cTank + 73] = '.';
	X[rTank + 18][cTank + 75] = 96;
	X[rTank + 18][cTank + 76] = '.';
	X[rTank + 18][cTank + 80] = '"';
	X[rTank + 18][cTank + 81] = '-';
	X[rTank + 18][cTank + 82] = '-';
	X[rTank + 18][cTank + 83] = '-';
	X[rTank + 18][cTank + 84] = '"';
	X[rTank + 18][cTank + 85] = ';';
	X[rTank + 19][cTank + 3] = 96;
	X[rTank + 19][cTank + 4] = '.';
	X[rTank + 19][cTank + 7] = 96;
	X[rTank + 19][cTank + 8] = 'v';
	X[rTank + 19][cTank + 10] = ';';
	X[rTank + 19][cTank + 12] = ';';
	X[rTank + 19][cTank + 18] = ';';
	X[rTank + 19][cTank + 19] = ';';
	X[rTank + 19][cTank + 24] = '\\';
	X[rTank + 19][cTank + 27] = '\\';
	X[rTank + 19][cTank + 29] = '.';
	X[rTank + 19][cTank + 30] = 96;
	X[rTank + 19][cTank + 33] = '\\';
	X[rTank + 19][cTank + 35] = ';';
	X[rTank + 19][cTank + 37] = '/';
	X[rTank + 19][cTank + 38] = '/';
	X[rTank + 19][cTank + 39] = '/';
	X[rTank + 19][cTank + 40] = '/';
	X[rTank + 19][cTank + 45] = '_';
	X[rTank + 19][cTank + 46] = '.';
	X[rTank + 19][cTank + 47] = '-';
	X[rTank + 19][cTank + 48] = '"';
	X[rTank + 19][cTank + 50] = '"';
	X[rTank + 19][cTank + 51] = '-';
	X[rTank + 19][cTank + 52] = '.';
	X[rTank + 19][cTank + 53] = '_';
	X[rTank + 19][cTank + 57] = ';';
	X[rTank + 19][cTank + 62] = ':';
	X[rTank + 19][cTank + 64] = ';';
	X[rTank + 19][cTank + 68] = '.';
	X[rTank + 19][cTank + 69] = '-';
	X[rTank + 19][cTank + 70] = 96;
	X[rTank + 19][cTank + 71] = '_';
	X[rTank + 19][cTank + 72] = '_';
	X[rTank + 19][cTank + 74] = 96;
	X[rTank + 19][cTank + 75] = '.';
	X[rTank + 19][cTank + 77] = ';';
	X[rTank + 19][cTank + 81] = '.';
	X[rTank + 19][cTank + 82] = '^';
	X[rTank + 19][cTank + 83] = '"';
	X[rTank + 19][cTank + 84] = '.';
	X[rTank + 19][cTank + 85] = 96;
	X[rTank + 20][cTank + 5] = 96;
	X[rTank + 20][cTank + 6] = '.';
	X[rTank + 20][cTank + 9] = 96;
	X[rTank + 20][cTank + 10] = ';';
	X[rTank + 20][cTank + 12] = 96;
	X[rTank + 20][cTank + 13] = '.';
	X[rTank + 20][cTank + 17] = '.';
	X[rTank + 20][cTank + 18] = 96;
	X[rTank + 20][cTank + 19] = '/';
	X[rTank + 20][cTank + 25] = 96;
	X[rTank + 20][cTank + 26] = '.';
	X[rTank + 20][cTank + 28] = '`';
	X[rTank + 20][cTank + 29] = '-';
	X[rTank + 20][cTank + 30] = '.';
	X[rTank + 20][cTank + 31] = '_';
	X[rTank + 20][cTank + 32] = '_';
	X[rTank + 20][cTank + 33] = '.';
	X[rTank + 20][cTank + 34] = 96;
	X[rTank + 20][cTank + 36] = '/';
	X[rTank + 20][cTank + 37] = ';';
	X[rTank + 20][cTank + 38] = ';';
	X[rTank + 20][cTank + 39] = ';';
	X[rTank + 20][cTank + 43] = '.';
	X[rTank + 20][cTank + 44] = 'o';
	X[rTank + 20][cTank + 45] = '_';
	X[rTank + 20][cTank + 46] = '_';
	X[rTank + 20][cTank + 47] = '.';
	X[rTank + 20][cTank + 48] = '-';
	X[rTank + 20][cTank + 49] = '-';
	X[rTank + 20][cTank + 50] = '-';
	X[rTank + 20][cTank + 51] = '.';
	X[rTank + 20][cTank + 52] = '_';
	X[rTank + 20][cTank + 53] = '_';
	X[rTank + 20][cTank + 54] = 'o';
	X[rTank + 20][cTank + 55] = '.';
	X[rTank + 20][cTank + 57] = ';';
	X[rTank + 20][cTank + 62] = ':';
	X[rTank + 20][cTank + 64] = ';';
	X[rTank + 20][cTank + 68] = 96;
	X[rTank + 20][cTank + 69] = '"';
	X[rTank + 20][cTank + 70] = '"';
	X[rTank + 20][cTank + 71] = ';';
	X[rTank + 20][cTank + 72] = ';';
	X[rTank + 20][cTank + 73] = '"';
	X[rTank + 20][cTank + 74] = '"';
	X[rTank + 20][cTank + 75] = 96;
	X[rTank + 20][cTank + 77] = ';';
	X[rTank + 20][cTank + 78] = 'v';
	X[rTank + 20][cTank + 79] = '^';
	X[rTank + 20][cTank + 80] = '"';
	X[rTank + 20][cTank + 82] = '.';
	X[rTank + 20][cTank + 83] = '^';
	X[rTank + 21][cTank + 7] = 96;
	X[rTank + 21][cTank + 8] = '-';
	X[rTank + 21][cTank + 9] = '.';
	X[rTank + 21][cTank + 11] = 96;
	X[rTank + 21][cTank + 12] = '-';
	X[rTank + 21][cTank + 13] = '.';
	X[rTank + 21][cTank + 14] = '_';
	X[rTank + 21][cTank + 15] = '_';
	X[rTank + 21][cTank + 16] = '_';
	X[rTank + 21][cTank + 17] = '.';
	X[rTank + 21][cTank + 18] = 96;
	X[rTank + 21][cTank + 19] = '<';
	X[rTank + 21][cTank + 20] = '_';
	X[rTank + 21][cTank + 21] = '_';
	X[rTank + 21][cTank + 22] = 'v';
	X[rTank + 21][cTank + 23] = '.';
	X[rTank + 21][cTank + 24] = '^';
	X[rTank + 21][cTank + 25] = ',';
	X[rTank + 21][cTank + 26] = 'v';
	X[rTank + 21][cTank + 27] = 96;
	X[rTank + 21][cTank + 28] = '.';
	X[rTank + 21][cTank + 31] = 96;
	X[rTank + 21][cTank + 32] = '-';
	X[rTank + 21][cTank + 33] = '.';
	X[rTank + 21][cTank + 34] = '-';
	X[rTank + 21][cTank + 35] = 96;
	X[rTank + 21][cTank + 37] = ';';
	X[rTank + 21][cTank + 38] = '|';
	X[rTank + 21][cTank + 39] = ':';
	X[rTank + 21][cTank + 43] = 96;
	X[rTank + 21][cTank + 48] = ':';
	X[rTank + 21][cTank + 55] = '`';
	X[rTank + 21][cTank + 57] = ';';
	X[rTank + 21][cTank + 58] = 'v';
	X[rTank + 21][cTank + 59] = '^';
	X[rTank + 21][cTank + 60] = 'v';
	X[rTank + 21][cTank + 61] = '^';
	X[rTank + 21][cTank + 62] = 96;
	X[rTank + 21][cTank + 63] = '.';
	X[rTank + 21][cTank + 64] = 96;
	X[rTank + 21][cTank + 65] = '.';
	X[rTank + 21][cTank + 70] = '.';
	X[rTank + 21][cTank + 71] = ';';
	X[rTank + 21][cTank + 72] = 96;
	X[rTank + 21][cTank + 73] = '.';
	X[rTank + 21][cTank + 74] = '_';
	X[rTank + 21][cTank + 75] = '_';
	X[rTank + 21][cTank + 76] = '/';
	X[rTank + 21][cTank + 77] = '_';
	X[rTank + 21][cTank + 78] = '.';
	X[rTank + 21][cTank + 79] = '.';
	X[rTank + 21][cTank + 80] = '-';
	X[rTank + 21][cTank + 81] = 96;
	X[rTank + 22][cTank + 10] = 96;
	X[rTank + 22][cTank + 11] = '-';
	X[rTank + 22][cTank + 12] = '.';
	X[rTank + 22][cTank + 13] = '.';
	X[rTank + 22][cTank + 14] = '.';
	X[rTank + 22][cTank + 15] = '_';
	X[rTank + 22][cTank + 16] = '_';
	X[rTank + 22][cTank + 17] = '.';
	X[rTank + 22][cTank + 18] = '_';
	X[rTank + 22][cTank + 19] = '_';
	X[rTank + 22][cTank + 20] = '_';
	X[rTank + 22][cTank + 21] = '.';
	X[rTank + 22][cTank + 22] = '.';
	X[rTank + 22][cTank + 23] = '.';
	X[rTank + 22][cTank + 24] = '-';
	X[rTank + 22][cTank + 25] = '-';
	X[rTank + 22][cTank + 26] = '-';
	X[rTank + 22][cTank + 27] = '"';
	X[rTank + 22][cTank + 28] = '"';
	X[rTank + 22][cTank + 29] = 96;
	X[rTank + 22][cTank + 30] = '-';
	X[rTank + 22][cTank + 31] = '.';
	X[rTank + 22][cTank + 35] = 96;
	X[rTank + 22][cTank + 36] = '-';
	X[rTank + 22][cTank + 37] = 96;
	X[rTank + 22][cTank + 38] = '.';
	X[rTank + 22][cTank + 39] = ';';
	X[rTank + 22][cTank + 40] = '\\';
	X[rTank + 22][cTank + 46] = 96;
	X[rTank + 22][cTank + 47] = 'W';
	X[rTank + 22][cTank + 48] = 'W';
	X[rTank + 22][cTank + 49] = '\\';
	X[rTank + 22][cTank + 55] = '.';
	X[rTank + 22][cTank + 56] = 96;
	X[rTank + 22][cTank + 57] = '_';
	X[rTank + 22][cTank + 58] = '_';
	X[rTank + 22][cTank + 59] = '_';
	X[rTank + 22][cTank + 60] = '_';
	X[rTank + 22][cTank + 61] = '_';
	X[rTank + 22][cTank + 62] = '.';
	X[rTank + 22][cTank + 63] = '.';
	X[rTank + 22][cTank + 64] = '>';
	X[rTank + 22][cTank + 65] = '.';
	X[rTank + 22][cTank + 66] = '"';
	X[rTank + 22][cTank + 67] = '^';
	X[rTank + 22][cTank + 68] = '"';
	X[rTank + 22][cTank + 69] = '-';
	X[rTank + 22][cTank + 70] = '"';
	X[rTank + 22][cTank + 71] = '"';
	X[rTank + 22][cTank + 72] = '"';
	X[rTank + 22][cTank + 73] = '"';
	X[rTank + 22][cTank + 74] = '"';
	X[rTank + 22][cTank + 75] = '"';
	X[rTank + 22][cTank + 76] = '"';
	X[rTank + 22][cTank + 77] = '"';
	X[rTank + 23][cTank + 32] = 96;
	X[rTank + 23][cTank + 33] = '-';
	X[rTank + 23][cTank + 34] = '-';
	X[rTank + 23][cTank + 35] = '.';
	X[rTank + 23][cTank + 36] = '.';
	X[rTank + 23][cTank + 37] = '_';
	X[rTank + 23][cTank + 38] = '_';
	X[rTank + 23][cTank + 40] = 96;
	X[rTank + 23][cTank + 41] = '"';
	X[rTank + 23][cTank + 42] = '.';
	X[rTank + 23][cTank + 43] = '_';
	X[rTank + 23][cTank + 44] = '.';
	X[rTank + 23][cTank + 45] = '.';
	X[rTank + 23][cTank + 46] = 96;
	X[rTank + 23][cTank + 49] = 96;
	X[rTank + 23][cTank + 50] = '"';
	X[rTank + 23][cTank + 51] = '-';
	X[rTank + 23][cTank + 52] = ';';
	X[rTank + 23][cTank + 53] = ';';
	X[rTank + 23][cTank + 54] = '"';
	X[rTank + 23][cTank + 55] = '"';
	X[rTank + 23][cTank + 56] = '"';
	X[rTank + 24][cTank + 40] = '"';
	X[rTank + 24][cTank + 41] = '"';
	X[rTank + 24][cTank + 42] = '"';
	X[rTank + 24][cTank + 43] = '-';
	X[rTank + 24][cTank + 44] = '-';
	X[rTank + 24][cTank + 45] = '-';
	X[rTank + 24][cTank + 46] = 96;
	X[rTank + 24][cTank + 47] = '"';
	X[rTank + 24][cTank + 48] = '"';
	X[rTank + 24][cTank + 49] = '"';
	X[rTank + 24][cTank + 50] = '"';
	X[rTank + 24][cTank + 51] = '"';
	X[rTank + 24][cTank + 52] = '"';
}
void MoveTank(int& cTank, int& f)
{
	if (f == 0)
	{
		cTank--;
		if (cTank == 660)
		{
			f = 1;
		}
	}
	else
	{
		cTank++;
		if (cTank == 750)
		{
			f = 0;
		}
	}
}
void DrawUmbrella(unsigned char X[][2200], int  rH, int cH)
{
	X[rH - 8][cH + 13 - 1] = '_';
	X[rH - 8][cH + 14 - 1] = '_';
	X[rH - 8][cH + 15 - 1] = '_';
	X[rH - 8][cH + 16 - 1] = '(';
	X[rH - 8][cH + 17 - 1] = ')';
	X[rH - 8][cH + 18 - 1] = '_';
	X[rH - 8][cH + 19 - 1] = '_';
	X[rH - 8][cH + 20 - 1] = '_';

	X[rH - 7][cH + 8 - 1] = '_';
	X[rH - 7][cH + 9 - 1] = '.';
	X[rH - 7][cH + 10 - 1] = '-';
	X[rH - 7][cH + 11 - 1] = '"';
	X[rH - 7][cH + 12 - 1] = '"';
	X[rH - 7][cH + 14 - 1] = ',';
	X[rH - 7][cH + 15 - 1] = '-';
	X[rH - 7][cH + 16 - 1] = '"';
	X[rH - 7][cH + 17 - 1] = '`';
	X[rH - 7][cH + 18 - 1] = '-';
	X[rH - 7][cH + 19 - 1] = '.';
	X[rH - 7][cH + 21 - 1] = '`';
	X[rH - 7][cH + 22 - 1] = '`';
	X[rH - 7][cH + 23 - 1] = '-';
	X[rH - 7][cH + 24 - 1] = '.';
	X[rH - 7][cH + 25 - 1] = '_';

	X[rH - 6][cH + 5 - 1] = ',';
	X[rH - 6][cH + 6 - 1] = '-';
	X[rH - 6][cH + 7 - 1] = '"';
	X[rH - 6][cH + 12 - 1] = ',';
	X[rH - 6][cH + 13 - 1] = '"';
	X[rH - 6][cH + 22 - 1] = '`';
	X[rH - 6][cH + 23 - 1] = '.';
	X[rH - 6][cH + 26 - 1] = '`';
	X[rH - 6][cH + 27 - 1] = '-';
	X[rH - 6][cH + 28 - 1] = '.';

	X[rH - 5][cH + 3 - 1] = ',';
	X[rH - 5][cH + 4 - 1] = '"';
	X[rH - 5][cH + 10 - 1] = '"';
	X[rH - 5][cH + 11 - 1] = '"';
	X[rH - 5][cH + 22 - 1] = '`';
	X[rH - 5][cH + 23 - 1] = '.';
	X[rH - 5][cH + 29 - 1] = '`';
	X[rH - 5][cH + 30 - 1] = '.';

	X[rH - 4][cH + 2 - 1] = '/';
	X[rH - 4][cH + 9 - 1] = '/';
	X[rH - 4][cH + 24 - 1] = '\\';
	X[rH - 4][cH + 31 - 1] = '\\';

	X[rH - 3][cH + 1 - 1] = '/';
	X[rH - 3][cH + 2 - 1] = '_';
	X[rH - 3][cH + 8 - 1] = '/';
	X[rH - 3][cH + 25 - 1] = '\\';
	X[rH - 3][cH + 31 - 1] = '_';
	X[rH - 3][cH + 32 - 1] = '\\';

	X[rH - 2][cH + 3 - 1] = '`';
	X[rH - 2][cH + 4 - 1] = '`';
	X[rH - 2][cH + 5 - 1] = '-';
	X[rH - 2][cH + 6 - 1] = '.';
	X[rH - 2][cH + 7 - 1] = '/';
	X[rH - 2][cH + 8 - 1] = '_';
	X[rH - 2][cH + 9 - 1] = '.';
	X[rH - 2][cH + 10 - 1] = '.';
	X[rH - 2][cH + 11 - 1] = '-';
	X[rH - 2][cH + 12 - 1] = '-';
	X[rH - 2][cH + 13 - 1] = '-';
	X[rH - 2][cH + 14 - 1] = '"';
	X[rH - 2][cH + 15 - 1] = '"';
	X[rH - 2][cH + 16 - 1] = '"';
	X[rH - 2][cH + 17 - 1] = '|';
	X[rH - 2][cH + 18 - 1] = '`';
	X[rH - 2][cH + 19 - 1] = '`';
	X[rH - 2][cH + 20 - 1] = '-';
	X[rH - 2][cH + 21 - 1] = '-';
	X[rH - 2][cH + 22 - 1] = '-';
	X[rH - 2][cH + 23 - 1] = '.';
	X[rH - 2][cH + 24 - 1] = '.';
	X[rH - 2][cH + 25 - 1] = '_';
	X[rH - 2][cH + 26 - 1] = '\\';
	X[rH - 2][cH + 27 - 1] = ',';
	X[rH - 2][cH + 28 - 1] = '-';
	X[rH - 2][cH + 29 - 1] = '"';
	X[rH - 2][cH + 30 - 1] = '"';

	X[rH - 1][cH + 17 - 1] = '|';

	X[rH][cH + 17 - 1] = '|';

	X[rH + 1][cH + 17 - 1] = '|';

	X[rH + 2][cH + 17 - 1] = '|';

	X[rH + 3][cH + 17 - 1] = '|';

	X[rH + 4][cH + 17 - 1] = '|';

	X[rH + 5][cH + 17 - 1] = '|';


	X[rH + 6][cH + 17 - 1] = '|';

	X[rH + 7][cH + 17 - 1] = '|';
	X[rH + 8][cH + 17 - 1] = '|';
	X[rH + 9][cH + 17 - 1] = '|';
	X[rH + 10][cH + 17 - 1] = '|';
	X[rH + 11][cH + 17 - 1] = '|';
	X[rH + 12][cH + 17 - 1] = '|';



	X[rH + 13][cH + 14 - 1] = ',';
	X[rH + 13][cH + 14 - 1] = '`';
	X[rH + 13][cH + 15 - 1] = '.';
	X[rH + 13][cH + 16 - 1] = '.';
	X[rH + 13][cH + 17 - 1] = '"';
}
//El Bulet bta3 el dbaba
void BulletDbaba(unsigned char X[][2200], int rTank, int cTank, int& rowD, int& clmD, int& f)
{
	X[rowD][clmD] = 178;
	X[rowD][clmD + 2] = 178;

}
void MoveBulletDbaba(int& clmD, int rowD, unsigned char X[][2200], int ct, int  cTank, int A, int rTank, int& f, int& xx)
{


	if (clmD >= 120)
	{
		clmD -= 2;

		if (clmD == 50)
		{
			xx = 1;
		}
	}

	//else
	//{
	//	X[rowD][clmD] = ' ';
	//	clmD = cTank + 21;
	//}

}
/*void kazawada()
{

	for (int p = 0; p < 10; p++)
	{
		BulletDbaba(X, rTank, cTank, rowD, clmD);

	}
}*/
// proctect el hero mn tyara
void ProtectEleroMnEltyara(int& rRocket, int rH, int& h, int cH, unsigned char X[][2200], int fUM, int TTT)
{
	if ((rRocket + 5 >= rH - 8)
		&& rRocket + 5 <= rH + 13
		&& h <= cH + 31 && h >= cH)
	{

		if (fUM == 1)
		{
			X[rRocket - 1][h] = ' ';
			X[rRocket - 1][h + 1] = ' ';
			X[rRocket - 1][h + 2] = ' ';
			X[rRocket - 1][h + 3] = ' ';
			X[rRocket - 1][h + 4] = ' ';
			X[rRocket - 1][h + 5] = ' ';
			X[rRocket][h] = ' ';
			X[rRocket][h + 2] = ' ';
			X[rRocket][h + 3] = ' ';
			X[rRocket][h + 5] = ' ';
			X[rRocket + 1][h + 1] = ' ';
			X[rRocket + 1][h + 4] = ' ';
			X[rRocket + 2][h + 1] = ' ';
			X[rRocket + 2][h + 4] = ' ';
			X[rRocket + 3][h + 1] = ' ';
			X[rRocket + 3][h + 4] = ' ';
			X[rRocket + 4][h + 2] = ' ';
			X[rRocket + 4][h + 3] = ' ';
			TTT = 1;
		}

	}
	if ((rRocket + 5) >= (rH - 8) && (rRocket + 5) <= (rH + 13) && (h + 5) <= (cH + 31) && (h + 5) >= cH)
	{
		if (fUM == 1)
		{
			X[rRocket - 1][h] = ' ';
			X[rRocket - 1][h + 1] = ' ';
			X[rRocket - 1][h + 2] = ' ';
			X[rRocket - 1][h + 3] = ' ';
			X[rRocket - 1][h + 4] = ' ';
			X[rRocket - 1][h + 5] = ' ';
			X[rRocket][h] = ' ';
			X[rRocket][h + 2] = ' ';
			X[rRocket][h + 3] = ' ';
			X[rRocket][h + 5] = ' ';
			X[rRocket + 1][h + 1] = ' ';
			X[rRocket + 1][h + 4] = ' ';
			X[rRocket + 2][h + 1] = ' ';
			X[rRocket + 2][h + 4] = ' ';
			X[rRocket + 3][h + 1] = ' ';
			X[rRocket + 3][h + 4] = ' ';
			X[rRocket + 4][h + 2] = ' ';
			X[rRocket + 4][h + 3] = ' ';
			TTT = 1;
		}
	}
	if ((rRocket) >= (rH - 8) && (rRocket) <= (rH + 13) && (h + 5) <= (cH + 31) && (h + 5) >= cH)
	{
		if (fUM == 1)
		{
			X[rRocket - 1][h] = ' ';
			X[rRocket - 1][h + 1] = ' ';
			X[rRocket - 1][h + 2] = ' ';
			X[rRocket - 1][h + 3] = ' ';
			X[rRocket - 1][h + 4] = ' ';
			X[rRocket - 1][h + 5] = ' ';
			X[rRocket][h] = ' ';
			X[rRocket][h + 2] = ' ';
			X[rRocket][h + 3] = ' ';
			X[rRocket][h + 5] = ' ';
			X[rRocket + 1][h + 1] = ' ';
			X[rRocket + 1][h + 4] = ' ';
			X[rRocket + 2][h + 1] = ' ';
			X[rRocket + 2][h + 4] = ' ';
			X[rRocket + 3][h + 1] = ' ';
			X[rRocket + 3][h + 4] = ' ';
			X[rRocket + 4][h + 2] = ' ';
			X[rRocket + 4][h + 3] = ' ';
			TTT = 1;
		}
	}
	if ((rRocket) >= (rH - 8) && (rRocket) <= (rH + 13) && h <= (cH + 31) && h >= cH)
	{

		if (fUM == 1)
		{
			X[rRocket - 1][h] = ' ';
			X[rRocket - 1][h + 1] = ' ';
			X[rRocket - 1][h + 2] = ' ';
			X[rRocket - 1][h + 3] = ' ';
			X[rRocket - 1][h + 4] = ' ';
			X[rRocket - 1][h + 5] = ' ';
			X[rRocket][h] = ' ';
			X[rRocket][h + 2] = ' ';
			X[rRocket][h + 3] = ' ';
			X[rRocket][h + 5] = ' ';
			X[rRocket + 1][h + 1] = ' ';
			X[rRocket + 1][h + 4] = ' ';
			X[rRocket + 2][h + 1] = ' ';
			X[rRocket + 2][h + 4] = ' ';
			X[rRocket + 3][h + 1] = ' ';
			X[rRocket + 3][h + 4] = ' ';
			X[rRocket + 4][h + 2] = ' ';
			X[rRocket + 4][h + 3] = ' ';
			TTT = 1;
		}
	}
}
// 7MAYA MN EL DABABA
void DrawProtecrMnElTank(unsigned char X[][2200], int rH, int cH)
{
	X[0 + rH][cH + 20 + 16] = '_';
	X[1 + rH][cH + 20 + 16] = '(';
	X[1 + rH][cH + 21 + 16] = '_';
	X[1 + rH][cH + 22 + 16] = ')';
	X[2 + rH][cH + 20 + 16] = '|';
	X[2 + rH][cH + 21 + 16] = '=';
	X[2 + rH][cH + 22 + 16] = '|';
	X[3 + rH][cH + 20 + 16] = '|';
	X[3 + rH][cH + 21 + 16] = '=';
	X[3 + rH][cH + 22 + 16] = '|';
	X[4 + rH][cH + 16 + 16] = '/';
	X[4 + rH][cH + 17 + 16] = '|';
	X[4 + rH][cH + 18 + 16] = '_';
	X[4 + rH][cH + 19 + 16] = '_';
	X[4 + rH][cH + 20 + 16] = '|';
	X[4 + rH][cH + 21 + 16] = '_';
	X[4 + rH][cH + 22 + 16] = '|';
	X[4 + rH][cH + 23 + 16] = '_';
	X[4 + rH][cH + 24 + 16] = '_';
	X[4 + rH][cH + 25 + 16] = '|';
	X[4 + rH][cH + 26 + 16] = '\\';
	X[5 + rH][cH + 15 + 16] = '(';
	X[5 + rH][cH + 20 + 16] = '(';
	X[5 + rH][cH + 22 + 16] = ')';
	X[5 + rH][cH + 27 + 16] = ')';
	X[6 + rH][cH + 16 + 16] = '\\';
	X[6 + rH][cH + 17 + 16] = '|';
	X[6 + rH][cH + 18 + 16] = '\\';
	X[6 + rH][cH + 19 + 16] = '/';
	X[6 + rH][cH + 20 + 16] = '\\';
	X[6 + rH][cH + 21 + 16] = '"';
	X[6 + rH][cH + 22 + 16] = '/';
	X[6 + rH][cH + 23 + 16] = '\\';
	X[6 + rH][cH + 24 + 16] = '/';
	X[6 + rH][cH + 25 + 16] = '|';
	X[6 + rH][cH + 26 + 16] = '/';
	X[7 + rH][cH + 18 + 16] = '|';
	X[7 + rH][cH + 21 + 16] = 'Y';
	X[7 + rH][cH + 24 + 16] = '|';
	X[8 + rH][cH + 18 + 16] = '|';
	X[8 + rH][cH + 21 + 16] = '|';
	X[8 + rH][cH + 24 + 16] = '|';
	X[9 + rH][cH + 18 + 16] = '|';
	X[9 + rH][cH + 21 + 16] = '|';
	X[9 + rH][cH + 24 + 16] = '|';
	X[10 + rH][cH + 17 + 16] = '_';
	X[10 + rH][cH + 18 + 16] = '|';
	X[10 + rH][cH + 21 + 16] = '|';
	X[10 + rH][cH + 24 + 16] = '|';
	X[11 + rH][cH + 12 + 16] = '_';
	X[11 + rH][cH + 15 + 16] = '_';
	X[11 + rH][cH + 16 + 16] = '/';
	X[11 + rH][cH + 18 + 16] = '|';
	X[11 + rH][cH + 21 + 16] = '|';
	X[11 + rH][cH + 24 + 16] = '|';
	X[11 + rH][cH + 25 + 16] = '\\';
	X[12 + rH][cH + 13 + 16] = '/';
	X[12 + rH][cH + 16 + 16] = '\\';
	X[12 + rH][cH + 18 + 16] = '|';
	X[12 + rH][cH + 21 + 16] = '|';
	X[12 + rH][cH + 24 + 16] = '|';
	X[12 + rH][cH + 27 + 16] = '\\';
	X[13 + rH][cH + 16 + 16] = '_';
	X[13 + rH][cH + 17 + 16] = '_';
	X[13 + rH][cH + 18 + 16] = '|';
	X[13 + rH][cH + 21 + 16] = '|';
	X[13 + rH][cH + 24 + 16] = '|';
	X[13 + rH][cH + 28 + 16] = '|';
	X[14 + rH][cH + 13 + 16] = '/';
	X[14 + rH][cH + 14 + 16] = '\\';
	X[14 + rH][cH + 15 + 16] = '/';
	X[14 + rH][cH + 18 + 16] = '|';
	X[14 + rH][cH + 21 + 16] = '|';
	X[14 + rH][cH + 24 + 16] = '|';
	X[14 + rH][cH + 28 + 16] = '|';
	X[14 + rH][cH + 29 + 16] = '\\';
	X[15 + rH][cH + 14 + 16] = '<';
	X[15 + rH][cH + 18 + 16] = '+';
	X[15 + rH][cH + 19 + 16] = '\\';
	X[15 + rH][cH + 21 + 16] = '|';
	X[15 + rH][cH + 24 + 16] = '|';
	X[15 + rH][cH + 25 + 16] = '\\';
	X[15 + rH][cH + 27 + 16] = '/';
	X[15 + rH][cH + 28 + 16] = '>';
	X[15 + rH][cH + 30 + 16] = '\\';
	X[16 + rH][cH + 15 + 16] = '>';
	X[16 + rH][cH + 19 + 16] = '+';
	X[16 + rH][cH + 21 + 16] = '\\';
	X[16 + rH][cH + 24 + 16] = '|';
	X[16 + rH][cH + 26 + 16] = 'L';
	X[16 + rH][cH + 27 + 16] = 'J';
	X[16 + rH][cH + 31 + 16] = '|';
	X[17 + rH][cH + 21 + 16] = '+';
	X[17 + rH][cH + 23 + 16] = '\\';
	X[17 + rH][cH + 24 + 16] = '|';
	X[17 + rH][cH + 25 + 16] = '+';
	X[17 + rH][cH + 27 + 16] = '\\';
	X[17 + rH][cH + 30 + 16] = '<';
	X[17 + rH][cH + 32 + 16] = '\\';
	X[18 + rH][cH + 15 + 16] = '(';
	X[18 + rH][cH + 16 + 16] = 'O';
	X[18 + rH][cH + 17 + 16] = ')';
	X[18 + rH][cH + 24 + 16] = '+';
	X[18 + rH][cH + 28 + 16] = '|';
	X[18 + rH][cH + 33 + 16] = ')';
	X[19 + rH][cH + 16 + 16] = '|';
	X[19 + rH][cH + 29 + 16] = '\\';
	X[19 + rH][cH + 32 + 16] = '/';
	X[19 + rH][cH + 33 + 16] = '\\';
	X[20 + rH][cH + 14 + 16] = '(';
	X[20 + rH][cH + 16 + 16] = '|';
	X[20 + rH][cH + 18 + 16] = ')';
	X[20 + rH][cH + 22 + 16] = '(';
	X[20 + rH][cH + 23 + 16] = 'o';
	X[20 + rH][cH + 24 + 16] = ')';
	X[20 + rH][cH + 30 + 16] = '\\';
	X[20 + rH][cH + 31 + 16] = '/';
	X[20 + rH][cH + 34 + 16] = ')';
	X[21 + rH][cH + 13 + 16] = '_';
	X[21 + rH][cH + 14 + 16] = '\\';
	X[21 + rH][cH + 15 + 16] = '\\';
	X[21 + rH][cH + 16 + 16] = '|';
	X[21 + rH][cH + 17 + 16] = '/';
	X[21 + rH][cH + 18 + 16] = '/';
	X[21 + rH][cH + 19 + 16] = '_';
	X[21 + rH][cH + 20 + 16] = '_';
	X[21 + rH][cH + 21 + 16] = '(';
	X[21 + rH][cH + 23 + 16] = '|';
	X[21 + rH][cH + 25 + 16] = ')';
	X[21 + rH][cH + 26 + 16] = '_';
	X[21 + rH][cH + 26 + 16] = '_';
	X[21 + rH][cH + 27 + 16] = '_';
	X[21 + rH][cH + 28 + 16] = '_';
	X[21 + rH][cH + 29 + 16] = '_';
	X[21 + rH][cH + 30 + 16] = '_';
	X[21 + rH][cH + 31 + 16] = ')';
	X[21 + rH][cH + 32 + 16] = '_';
	X[21 + rH][cH + 33 + 16] = '/';
	X[22 + rH][cH + 21 + 16] = '\\';
	X[22 + rH][cH + 22 + 16] = '\\';
	X[22 + rH][cH + 23 + 16] = '|';
	X[22 + rH][cH + 24 + 16] = '/';




	X[22 + rH][cH + 25 + 16] = '/';
}
//  drwa elveter
void DrawElevetor(unsigned char X[][2200], int rEL, int cEL)
{
	X[rEL + 1][cEL] = 175;
	X[rEL + 1][cEL + 1] = 175;
	X[rEL + 1][cEL + 2] = 175;
	X[rEL + 1][cEL + 3] = 175;
	X[rEL + 1][cEL + 4] = 175;
	X[rEL + 1][cEL + 5] = 175;
	X[rEL + 1][cEL + 6] = 175;
	X[rEL + 1][cEL + 7] = 175;
	X[rEL + 1][cEL + 8] = 175;
	X[rEL + 1][cEL + 9] = 175;
	X[rEL + 1][cEL + 10] = 175;
	X[rEL + 1][cEL + 11] = 175;
	X[rEL + 1][cEL + 12] = 175;
	X[rEL + 1][cEL + 13] = 175;
	X[rEL + 1][cEL + 14] = 175;
	X[rEL + 1][cEL + 15] = 175;
	X[rEL + 1][cEL + 16] = 175;
	X[rEL + 1][cEL + 17] = 175;
	X[rEL + 1][cEL + 18] = 175;
	X[rEL + 1][cEL + 19] = 175;
	X[rEL + 1][cEL + 20] = 175;
	X[rEL + 2][cEL] = 175;
	X[rEL + 2][cEL + 1] = 175;
	X[rEL + 2][cEL + 2] = 175;
	X[rEL + 2][cEL + 3] = 175;
	X[rEL + 2][cEL + 4] = 175;
	X[rEL + 2][cEL + 5] = 175;
	X[rEL + 2][cEL + 6] = 175;
	X[rEL + 2][cEL + 7] = 175;
	X[rEL + 2][cEL + 8] = 175;
	X[rEL + 2][cEL + 9] = 175;
	X[rEL + 2][cEL + 10] = 175;
	X[rEL + 2][cEL + 11] = 175;
	X[rEL + 2][cEL + 12] = 175;
	X[rEL + 2][cEL + 13] = 175;
	X[rEL + 2][cEL + 14] = 175;
	X[rEL + 2][cEL + 15] = 175;
	X[rEL + 2][cEL + 16] = 175;
	X[rEL + 2][cEL + 17] = 175;
	X[rEL + 2][cEL + 18] = 175;
	X[rEL + 2][cEL + 19] = 175;
	X[rEL + 2][cEL + 20] = 175;

}
//MOVE ELEVETOR UP AND DOWN
void MoveElevetorU(int& rEL, int& FlagElevetor)
{
	if (rEL > 130)
		rEL--;
	if (rEL == 130)
	{
		FlagElevetor = 1;
	}
}
void MoveElevetorD(int& rEL, int& FlagElevetor)
{
	if (rEL < 195)
		rEL++;
	if (rEL == 195)
	{
		FlagElevetor = 2;
	}
}

void DrawElevetor2(unsigned char X[][2200], int rEL2, int cEL2)
{
	X[rEL2 + 1][cEL2] = 175;
	X[rEL2 + 1][cEL2 + 1] = 175;
	X[rEL2 + 1][cEL2 + 2] = 175;
	X[rEL2 + 1][cEL2 + 3] = 175;
	X[rEL2 + 1][cEL2 + 4] = 175;
	X[rEL2 + 1][cEL2 + 5] = 175;
	X[rEL2 + 1][cEL2 + 6] = 175;
	X[rEL2 + 1][cEL2 + 7] = 175;
	X[rEL2 + 1][cEL2 + 8] = 175;
	X[rEL2 + 1][cEL2 + 9] = 175;
	X[rEL2 + 1][cEL2 + 10] = 175;
	X[rEL2 + 1][cEL2 + 11] = 175;
	X[rEL2 + 1][cEL2 + 12] = 175;
	X[rEL2 + 1][cEL2 + 13] = 175;
	X[rEL2 + 1][cEL2 + 14] = 175;
	X[rEL2 + 1][cEL2 + 15] = 175;
	X[rEL2 + 1][cEL2 + 16] = 175;
	X[rEL2 + 1][cEL2 + 17] = 175;
	X[rEL2 + 1][cEL2 + 18] = 175;
	X[rEL2 + 1][cEL2 + 19] = 175;
	X[rEL2 + 1][cEL2 + 20] = 175;


}
void MoveElevetorUU(int& cEL2, int& rEL2, int& FlagElevetor2)
{

	if (rEL2 > 115)
		rEL2--;
	if (rEL2 == 115)
	{
		FlagElevetor2 = 1;
	}

}
void MoveElevetorL(int& cEL2, int& rEL2, int& FlagElevetor2)
{

	if (cEL2 > 1101)
		cEL2--;
	if (cEL2 == 1101)
	{
		FlagElevetor2 = 4;
	}

}
void MoveElevetorR(int& cEL2, int& rEL2, int& FlagElevetor2)
{

	if (cEL2 < 1150)
		cEL2++;
	if (cEL2 == 1150)
	{
		FlagElevetor2 = 2;
	}

}
void MoveElevetorDD(int& cEL2, int& rEL2, int& FlagElevetor2)
{


	if (rEL2 < 137)
		rEL2++;
	if (rEL2 == 137)
	{
		FlagElevetor2 = 5;
	}


}
// DRAW EL MOSADES
void Mosades(unsigned char X[][2200], int rH, int cH)
{
	X[rH + 13 - 2][cH + 14] = '_';
	X[rH + 13 - 2][cH + 15] = ',';
	X[rH + 13 - 2][cH + 16] = '_';
	X[rH + 13 - 2][cH + 17] = '_';
	X[rH + 13 - 2][cH + 18] = '_';
	X[rH + 13 - 2][cH + 19] = '_';
	X[rH + 13 - 2][cH + 20] = '_';
	X[rH + 13 - 2][cH + 21] = '_';
	X[rH + 13 - 2][cH + 22] = '_';
	X[rH + 13 - 2][cH + 23] = '_';
	X[rH + 14 - 2][cH + 13] = '_';
	X[rH + 14 - 2][cH + 14] = 'T';
	X[rH + 14 - 2][cH + 16] = '_';
	X[rH + 14 - 2][cH + 17] = '=';
	X[rH + 14 - 2][cH + 18] = '=';
	X[rH + 14 - 2][cH + 19] = '_';
	X[rH + 14 - 2][cH + 20] = '_';
	X[rH + 14 - 2][cH + 21] = '_';
	X[rH + 14 - 2][cH + 22] = '_';
	X[rH + 14 - 2][cH + 23] = '(';
	X[rH + 14 - 2][cH + 24] = ')';
	X[rH + 15 - 2][cH + 12] = '/';
	X[rH + 15 - 2][cH + 13] = '#';
	X[rH + 15 - 2][cH + 14] = '#';
	X[rH + 15 - 2][cH + 15] = '(';
	X[rH + 15 - 2][cH + 16] = '_';
	X[rH + 15 - 2][cH + 17] = ')';
	X[rH + 15 - 2][cH + 18] = '-';
	X[rH + 15 - 2][cH + 19] = '"';
	X[rH + 16 - 2][cH + 11] = '/';
	X[rH + 16 - 2][cH + 12] = '#';
	X[rH + 16 - 2][cH + 13] = '#';
	X[rH + 16 - 2][cH + 14] = '/';
	X[rH + 17 - 2][cH + 11] = '"';
	X[rH + 17 - 2][cH + 12] = '"';
	X[rH + 17 - 2][cH + 13] = '"';

}
// DRAW el bullet el single bta3t el mosades
void DrawBulletS(unsigned char X[][2200], int rH, int cBulet, int& zz)
{
	if (zz == 0)
	{
		X[rH + 12][cBulet + 25] = 178;
	}
	if (zz == 1)
	{
		X[rH + 12][cBulet + 25] = ' ';
		zz = 1;
	}
}
void MoveElBullets(int& cBulet, unsigned char X[][2200], int rBulet, int& zz)
{

	DrawBulletS(X, rBulet, cBulet, zz);
	cBulet++;
	if (cBulet == 137)
	{
		zz = 1;
	}
}
//void DrawBulletM(unsigned char X[][2200], int yr[], int i, int yc[],int&w,int &ct99)
//{
//	//X[yr[i]][yc[i]] = 178;
//	if (yc[i] == 101)
//	{
//		
//		X[yr[i]][yc[i]] = ' ';
//		w = -2;
//	}
//	if(yc[i]<100)
//	{
//		X[yr[i]][yc[i]] = 178;
//	}
//	
//}
//void MoveElBulletM(unsigned char X[][2200], int yr[], int yc[], int CTM,int &w,int &ct99)
//{
//	for (int i = 0; i <= CTM; i++)
//	{
//		DrawBulletM(X, yr, i, yc,w,ct99);
//		yc[i]++; 
//		if (yc[i] == 101)
//		{
//			w = -2;
//		}
//		
//
//	}
//}



void DrawBulletM(unsigned char X[][2200], int yr[], int i, int yc[], int& w, int& ct99)
{
	//X[yr[i]][yc[i]] = 178;
	if (yc[i] == 101)
	{

		X[yr[i]][yc[i]] = ' ';
		w = -2;
	}
	if (yc[i] < 100)
	{
		X[yr[i]][yc[i]] = 178;
	}

}
void MoveElBulletM(unsigned char X[][2200], int yr[], int yc[], int CTM, int& w, int& ct99)
{
	for (int i = 0; i <= CTM; i++)
	{
		DrawBulletM(X, yr, i, yc, w, ct99);
		yc[i]++;
		yr[i]--;
		if (yc[i] == 101)
		{
			w = -2;
		}


	}
}

void MoveElherElevetor(int cEL, int cH, int rEL, int& rH, int FlagElevetor)
{
	for (int k = cH - 3; k <= cH + 6; k++)
	{
		if (rEL + 1 == rH + 23 || rEL == rH + 21)
		{
			if (k >= cEL && k <= cEL + 20)
			{
				if (FlagElevetor == 2)
				{
					rH--;

					break;
				}
				if (FlagElevetor == 1)
				{
					if (rH < rEL)
					{
						rH++;
						break;
					}
				}

			}
		}
	}
}
void MoveElherElevetor2(int cEL2, int& cH, int rEL2, int& rH, int FlagElevetor2)
{
	for (int k = cH - 3; k <= cH + 6; k++)
	{
		if (rEL2 + 1 == rH + 23 || rEL2 == rH + 21)
		{
			if (k >= cEL2 && k <= cEL2 + 20)
			{
				if (FlagElevetor2 == 2)
				{
					rH--;

					break;
				}
				if (FlagElevetor2 == 4)
				{
					if (rH < rEL2)
					{
						rH++;
						break;
					}
				}
				if (FlagElevetor2 == 5)
				{
					cH++;

					break;
				}
				if (FlagElevetor2 == 1)
				{


					cH--;

					break;

				}



			}
		}
	}
}
//SOLIDER
void DrawSolider(unsigned char X[][2200], int rSolider, int cSolider, int w)
{
	if (w == -1)
	{
		X[rSolider][cSolider + 3] = '|';
		X[rSolider][cSolider + 4] = '\\';
		X[rSolider + 1][cSolider + 3] = '|';
		X[rSolider + 1][cSolider + 4] = '|';
		X[rSolider + 1][cSolider + 6] = '.';
		X[rSolider + 1][cSolider + 7] = '-';
		X[rSolider + 1][cSolider + 8] = '-';
		X[rSolider + 1][cSolider + 9] = '-';
		X[rSolider + 1][cSolider + 10] = '.';
		X[rSolider + 2][cSolider + 3] = '|';
		X[rSolider + 2][cSolider + 4] = '|';
		X[rSolider + 2][cSolider + 5] = '/';
		X[rSolider + 2][cSolider + 6] = '_';
		X[rSolider + 2][cSolider + 7] = '_';
		X[rSolider + 2][cSolider + 8] = '_';
		X[rSolider + 2][cSolider + 9] = '_';
		X[rSolider + 2][cSolider + 10] = '_';
		X[rSolider + 2][cSolider + 11] = '\\';
		X[rSolider + 3][cSolider + 3] = '|';
		X[rSolider + 3][cSolider + 4] = '|';
		X[rSolider + 3][cSolider + 5] = '(';
		X[rSolider + 3][cSolider + 7] = 96;
		X[rSolider + 3][cSolider + 8] = '.';
		X[rSolider + 3][cSolider + 9] = 96;
		X[rSolider + 3][cSolider + 11] = ')';
		X[rSolider + 4][cSolider + 3] = '|';
		X[rSolider + 4][cSolider + 4] = '|';
		X[rSolider + 4][cSolider + 6] = '\\';
		X[rSolider + 4][cSolider + 7] = '_';
		X[rSolider + 4][cSolider + 8] = '-';
		X[rSolider + 4][cSolider + 9] = '_';
		X[rSolider + 4][cSolider + 10] = '/';
		X[rSolider + 4][cSolider + 11] = '_';
		X[rSolider + 5][cSolider + 3] = ':';
		X[rSolider + 5][cSolider + 4] = '-';
		X[rSolider + 5][cSolider + 5] = '"';
		X[rSolider + 5][cSolider + 6] = '`';
		X[rSolider + 5][cSolider + 7] = 96;
		X[rSolider + 5][cSolider + 8] = 'V';
		X[rSolider + 5][cSolider + 9] = 96;
		X[rSolider + 5][cSolider + 10] = '/';
		X[rSolider + 5][cSolider + 11] = '/';
		X[rSolider + 5][cSolider + 12] = '-';
		X[rSolider + 5][cSolider + 13] = '.';
		X[rSolider + 6][cSolider + 2] = '/';
		X[rSolider + 6][cSolider + 4] = ',';
		X[rSolider + 6][cSolider + 8] = '|';
		X[rSolider + 6][cSolider + 9] = '/';
		X[rSolider + 6][cSolider + 10] = '/';
		X[rSolider + 6][cSolider + 12] = ',';
		X[rSolider + 6][cSolider + 14] = '`';
		X[rSolider + 6][cSolider + 15] = '\\';
		X[rSolider + 7][cSolider + 1] = '/';
		X[rSolider + 7][cSolider + 3] = '/';
		X[rSolider + 7][cSolider + 4] = '|';
		X[rSolider + 7][cSolider + 5] = 'L';
		X[rSolider + 7][cSolider + 6] = 'l';
		X[rSolider + 7][cSolider + 8] = '/';
		X[rSolider + 7][cSolider + 9] = '/';
		X[rSolider + 7][cSolider + 10] = 'L';
		X[rSolider + 7][cSolider + 11] = 'l';
		X[rSolider + 7][cSolider + 12] = '|';
		X[rSolider + 7][cSolider + 13] = '|';
		X[rSolider + 7][cSolider + 15] = '|';
		X[rSolider + 8][cSolider] = '/';
		X[rSolider + 8][cSolider + 1] = '_';
		X[rSolider + 8][cSolider + 2] = '/';
		X[rSolider + 8][cSolider + 3] = '|';
		X[rSolider + 8][cSolider + 4] = '|';
		X[rSolider + 8][cSolider + 5] = '_';
		X[rSolider + 8][cSolider + 6] = '_';
		X[rSolider + 8][cSolider + 7] = '/';
		X[rSolider + 8][cSolider + 8] = '/';
		X[rSolider + 8][cSolider + 12] = '|';
		X[rSolider + 8][cSolider + 13] = '|';
		X[rSolider + 8][cSolider + 15] = '|';
		X[rSolider + 9][cSolider] = '\\';
		X[rSolider + 9][cSolider + 2] = '\\';
		X[rSolider + 9][cSolider + 3] = '/';
		X[rSolider + 9][cSolider + 4] = '-';
		X[rSolider + 9][cSolider + 5] = '-';
		X[rSolider + 9][cSolider + 6] = '-';
		X[rSolider + 9][cSolider + 7] = '|';
		X[rSolider + 9][cSolider + 8] = '[';
		X[rSolider + 9][cSolider + 9] = ']';
		X[rSolider + 9][cSolider + 10] = '=';
		X[rSolider + 9][cSolider + 11] = '=';
		X[rSolider + 9][cSolider + 12] = '|';
		X[rSolider + 9][cSolider + 13] = '|';
		X[rSolider + 9][cSolider + 15] = '|';
		X[rSolider + 10][cSolider + 1] = '\\';
		X[rSolider + 10][cSolider + 2] = '/';
		X[rSolider + 10][cSolider + 3] = '\\';
		X[rSolider + 10][cSolider + 4] = '_';
		X[rSolider + 10][cSolider + 5] = '_';
		X[rSolider + 10][cSolider + 6] = '/';
		X[rSolider + 10][cSolider + 8] = '|';
		X[rSolider + 10][cSolider + 12] = '\\';
		X[rSolider + 10][cSolider + 13] = '|';
		X[rSolider + 10][cSolider + 15] = '|';
		X[rSolider + 11][cSolider + 1] = '/';
		X[rSolider + 11][cSolider + 2] = '\\';
		X[rSolider + 11][cSolider + 3] = '|';
		X[rSolider + 11][cSolider + 4] = '_';
		X[rSolider + 11][cSolider + 8] = '|';
		X[rSolider + 11][cSolider + 10] = 'L';
		X[rSolider + 11][cSolider + 11] = 'l';
		X[rSolider + 11][cSolider + 12] = '_';
		X[rSolider + 11][cSolider + 13] = '\\';
		X[rSolider + 11][cSolider + 15] = '|';
		X[rSolider + 12][cSolider + 1] = '`';
		X[rSolider + 12][cSolider + 2] = '-';
		X[rSolider + 12][cSolider + 3] = '-';
		X[rSolider + 12][cSolider + 4] = '|';
		X[rSolider + 12][cSolider + 5] = '`';
		X[rSolider + 12][cSolider + 6] = '^';
		X[rSolider + 12][cSolider + 7] = '"';
		X[rSolider + 12][cSolider + 8] = '"';
		X[rSolider + 12][cSolider + 9] = '"';
		X[rSolider + 12][cSolider + 10] = '^';
		X[rSolider + 12][cSolider + 11] = '`';
		X[rSolider + 12][cSolider + 12] = '|';
		X[rSolider + 12][cSolider + 13] = '|';
		X[rSolider + 12][cSolider + 14] = '_';
		X[rSolider + 12][cSolider + 15] = '|';
		X[rSolider + 13][cSolider + 4] = '|';
		X[rSolider + 13][cSolider + 8] = '|';
		X[rSolider + 13][cSolider + 12] = '|';
		X[rSolider + 13][cSolider + 13] = '|';
		X[rSolider + 13][cSolider + 14] = '/';
		X[rSolider + 14][cSolider + 4] = '|';
		X[rSolider + 14][cSolider + 8] = '|';
		X[rSolider + 14][cSolider + 12] = '|';
		X[rSolider + 15][cSolider + 4] = '|';
		X[rSolider + 15][cSolider + 8] = '|';
		X[rSolider + 15][cSolider + 12] = '|';
		X[rSolider + 16][cSolider + 4] = '|';
		X[rSolider + 16][cSolider + 8] = '|';
		X[rSolider + 16][cSolider + 12] = '|';
		X[rSolider + 17][cSolider + 4] = 'L';
		X[rSolider + 17][cSolider + 5] = '_';
		X[rSolider + 17][cSolider + 6] = '_';
		X[rSolider + 17][cSolider + 7] = '_';
		X[rSolider + 17][cSolider + 8] = 'l';
		X[rSolider + 17][cSolider + 9] = '_';
		X[rSolider + 17][cSolider + 10] = '_';
		X[rSolider + 17][cSolider + 11] = '_';
		X[rSolider + 17][cSolider + 12] = 'J';
		X[rSolider + 18][cSolider + 5] = '|';
		X[rSolider + 18][cSolider + 6] = '_';
		X[rSolider + 18][cSolider + 9] = '_';
		X[rSolider + 18][cSolider + 10] = '|';
		X[rSolider + 19][cSolider + 4] = '(';
		X[rSolider + 19][cSolider + 5] = '_';
		X[rSolider + 19][cSolider + 6] = '_';
		X[rSolider + 19][cSolider + 7] = '_';
		X[rSolider + 19][cSolider + 8] = '|';
		X[rSolider + 19][cSolider + 9] = '_';
		X[rSolider + 19][cSolider + 10] = '_';
		X[rSolider + 19][cSolider + 11] = '_';
		X[rSolider + 19][cSolider + 12] = ')';
		X[rSolider + 20][cSolider + 5] = '^';
		X[rSolider + 20][cSolider + 6] = '^';
		X[rSolider + 20][cSolider + 7] = '^';
		X[rSolider + 20][cSolider + 9] = '^';
		X[rSolider + 20][cSolider + 10] = '^';
		X[rSolider + 20][cSolider + 11] = '^';
	}
	if (w == -2)
	{
		X[rSolider][cSolider + 3] = ' ';
		X[rSolider][cSolider + 4] = ' ';
		X[rSolider + 1][cSolider + 3] = ' ';
		X[rSolider + 1][cSolider + 4] = ' ';
		X[rSolider + 1][cSolider + 6] = ' ';
		X[rSolider + 1][cSolider + 7] = ' ';
		X[rSolider + 1][cSolider + 8] = ' ';
		X[rSolider + 1][cSolider + 9] = ' ';
		X[rSolider + 1][cSolider + 10] = ' ';
		X[rSolider + 2][cSolider + 3] = ' ';
		X[rSolider + 2][cSolider + 4] = ' ';
		X[rSolider + 2][cSolider + 5] = ' ';
		X[rSolider + 2][cSolider + 6] = ' ';
		X[rSolider + 2][cSolider + 7] = ' ';
		X[rSolider + 2][cSolider + 8] = ' ';
		X[rSolider + 2][cSolider + 9] = ' ';
		X[rSolider + 2][cSolider + 10] = ' ';
		X[rSolider + 2][cSolider + 11] = ' ';
		X[rSolider + 3][cSolider + 3] = ' ';
		X[rSolider + 3][cSolider + 4] = ' ';
		X[rSolider + 3][cSolider + 5] = ' ';
		X[rSolider + 3][cSolider + 7] = ' ';
		X[rSolider + 3][cSolider + 8] = ' ';
		X[rSolider + 3][cSolider + 9] = ' ';
		X[rSolider + 3][cSolider + 11] = ' ';
		X[rSolider + 4][cSolider + 3] = ' ';
		X[rSolider + 4][cSolider + 4] = ' ';
		X[rSolider + 4][cSolider + 6] = ' ';
		X[rSolider + 4][cSolider + 7] = ' ';
		X[rSolider + 4][cSolider + 8] = ' ';
		X[rSolider + 4][cSolider + 9] = ' ';
		X[rSolider + 4][cSolider + 10] = ' ';
		X[rSolider + 4][cSolider + 11] = ' ';
		X[rSolider + 5][cSolider + 3] = ' ';
		X[rSolider + 5][cSolider + 4] = ' ';
		X[rSolider + 5][cSolider + 5] = ' ';
		X[rSolider + 5][cSolider + 6] = ' ';
		X[rSolider + 5][cSolider + 7] = ' ';
		X[rSolider + 5][cSolider + 8] = ' ';
		X[rSolider + 5][cSolider + 9] = ' ';
		X[rSolider + 5][cSolider + 10] = ' ';
		X[rSolider + 5][cSolider + 11] = ' ';
		X[rSolider + 5][cSolider + 12] = ' ';
		X[rSolider + 5][cSolider + 13] = ' ';
		X[rSolider + 6][cSolider + 2] = ' ';
		X[rSolider + 6][cSolider + 4] = ' ';
		X[rSolider + 6][cSolider + 8] = ' ';
		X[rSolider + 6][cSolider + 9] = ' ';
		X[rSolider + 6][cSolider + 10] = ' ';
		X[rSolider + 6][cSolider + 12] = ' ';
		X[rSolider + 6][cSolider + 14] = ' ';
		X[rSolider + 6][cSolider + 15] = ' ';
		X[rSolider + 7][cSolider + 1] = ' ';
		X[rSolider + 7][cSolider + 3] = ' ';
		X[rSolider + 7][cSolider + 4] = ' ';
		X[rSolider + 7][cSolider + 5] = ' ';
		X[rSolider + 7][cSolider + 6] = ' ';
		X[rSolider + 7][cSolider + 8] = ' ';
		X[rSolider + 7][cSolider + 9] = ' ';
		X[rSolider + 7][cSolider + 10] = ' ';
		X[rSolider + 7][cSolider + 11] = ' ';
		X[rSolider + 7][cSolider + 12] = ' ';
		X[rSolider + 7][cSolider + 13] = ' ';
		X[rSolider + 7][cSolider + 15] = ' ';
		X[rSolider + 8][cSolider] = ' ';
		X[rSolider + 8][cSolider + 1] = ' ';
		X[rSolider + 8][cSolider + 2] = ' ';
		X[rSolider + 8][cSolider + 3] = ' ';
		X[rSolider + 8][cSolider + 4] = ' ';
		X[rSolider + 8][cSolider + 5] = ' ';
		X[rSolider + 8][cSolider + 6] = ' ';
		X[rSolider + 8][cSolider + 7] = ' ';
		X[rSolider + 8][cSolider + 8] = ' ';
		X[rSolider + 8][cSolider + 12] = ' ';
		X[rSolider + 8][cSolider + 13] = ' ';
		X[rSolider + 8][cSolider + 15] = ' ';
		X[rSolider + 9][cSolider] = ' ';
		X[rSolider + 9][cSolider + 2] = ' ';
		X[rSolider + 9][cSolider + 3] = ' ';
		X[rSolider + 9][cSolider + 4] = ' ';
		X[rSolider + 9][cSolider + 5] = ' ';
		X[rSolider + 9][cSolider + 6] = ' ';
		X[rSolider + 9][cSolider + 7] = ' ';
		X[rSolider + 9][cSolider + 8] = ' ';
		X[rSolider + 9][cSolider + 9] = ' ';
		X[rSolider + 9][cSolider + 10] = ' ';
		X[rSolider + 9][cSolider + 11] = ' ';
		X[rSolider + 9][cSolider + 12] = ' ';
		X[rSolider + 9][cSolider + 13] = ' ';
		X[rSolider + 9][cSolider + 15] = ' ';
		X[rSolider + 10][cSolider + 1] = ' ';
		X[rSolider + 10][cSolider + 2] = ' ';
		X[rSolider + 10][cSolider + 3] = ' ';
		X[rSolider + 10][cSolider + 4] = ' ';
		X[rSolider + 10][cSolider + 5] = ' ';
		X[rSolider + 10][cSolider + 6] = ' ';
		X[rSolider + 10][cSolider + 8] = ' ';
		X[rSolider + 10][cSolider + 12] = ' ';
		X[rSolider + 10][cSolider + 13] = ' ';
		X[rSolider + 10][cSolider + 15] = ' ';
		X[rSolider + 11][cSolider + 1] = ' ';
		X[rSolider + 11][cSolider + 2] = ' ';
		X[rSolider + 11][cSolider + 3] = ' ';
		X[rSolider + 11][cSolider + 4] = ' ';
		X[rSolider + 11][cSolider + 8] = ' ';
		X[rSolider + 11][cSolider + 10] = ' ';
		X[rSolider + 11][cSolider + 11] = ' ';
		X[rSolider + 11][cSolider + 12] = ' ';
		X[rSolider + 11][cSolider + 13] = ' ';
		X[rSolider + 11][cSolider + 15] = ' ';
		X[rSolider + 12][cSolider + 1] = ' ';
		X[rSolider + 12][cSolider + 2] = ' ';
		X[rSolider + 12][cSolider + 3] = ' ';
		X[rSolider + 12][cSolider + 4] = ' ';
		X[rSolider + 12][cSolider + 5] = ' ';
		X[rSolider + 12][cSolider + 6] = ' ';
		X[rSolider + 12][cSolider + 7] = ' ';
		X[rSolider + 12][cSolider + 8] = ' ';
		X[rSolider + 12][cSolider + 9] = ' ';
		X[rSolider + 12][cSolider + 10] = ' ';
		X[rSolider + 12][cSolider + 11] = ' ';
		X[rSolider + 12][cSolider + 12] = ' ';
		X[rSolider + 12][cSolider + 13] = ' ';
		X[rSolider + 12][cSolider + 14] = ' ';
		X[rSolider + 12][cSolider + 15] = ' ';
		X[rSolider + 13][cSolider + 4] = ' ';
		X[rSolider + 13][cSolider + 8] = ' ';
		X[rSolider + 13][cSolider + 12] = ' ';
		X[rSolider + 13][cSolider + 13] = ' ';
		X[rSolider + 13][cSolider + 14] = ' ';
		X[rSolider + 14][cSolider + 4] = ' ';
		X[rSolider + 14][cSolider + 8] = ' ';
		X[rSolider + 14][cSolider + 12] = ' ';
		X[rSolider + 15][cSolider + 4] = ' ';
		X[rSolider + 15][cSolider + 8] = ' ';
		X[rSolider + 15][cSolider + 12] = ' ';
		X[rSolider + 16][cSolider + 4] = ' ';
		X[rSolider + 16][cSolider + 8] = ' ';
		X[rSolider + 16][cSolider + 12] = ' ';
		X[rSolider + 17][cSolider + 4] = ' ';
		X[rSolider + 17][cSolider + 5] = ' ';
		X[rSolider + 17][cSolider + 6] = ' ';
		X[rSolider + 17][cSolider + 7] = ' ';
		X[rSolider + 17][cSolider + 8] = ' ';
		X[rSolider + 17][cSolider + 9] = ' ';
		X[rSolider + 17][cSolider + 10] = ' ';
		X[rSolider + 17][cSolider + 11] = ' ';
		X[rSolider + 17][cSolider + 12] = ' ';
		X[rSolider + 18][cSolider + 5] = ' ';
		X[rSolider + 18][cSolider + 6] = ' ';
		X[rSolider + 18][cSolider + 9] = ' ';
		X[rSolider + 18][cSolider + 10] = ' ';
		X[rSolider + 19][cSolider + 4] = ' ';
		X[rSolider + 19][cSolider + 5] = ' ';
		X[rSolider + 19][cSolider + 6] = ' ';
		X[rSolider + 19][cSolider + 7] = ' ';
		X[rSolider + 19][cSolider + 8] = ' ';
		X[rSolider + 19][cSolider + 9] = ' ';
		X[rSolider + 19][cSolider + 10] = ' ';
		X[rSolider + 19][cSolider + 11] = ' ';
		X[rSolider + 19][cSolider + 12] = ' ';
		X[rSolider + 20][cSolider + 5] = ' ';
		X[rSolider + 20][cSolider + 6] = ' ';
		X[rSolider + 20][cSolider + 7] = ' ';
		X[rSolider + 20][cSolider + 9] = ' ';
		X[rSolider + 20][cSolider + 10] = ' ';
		X[rSolider + 20][cSolider + 11] = ' ';
	}
}
void DrawSolider2(unsigned char X[][2200], int rSolider2, int cSolider2, int qq, int zz)
{
	if (qq == -1)
	{
		X[rSolider2][cSolider2 + 3] = '|';
		X[rSolider2][cSolider2 + 4] = '\\';
		X[rSolider2 + 1][cSolider2 + 3] = '|';
		X[rSolider2 + 1][cSolider2 + 4] = '|';
		X[rSolider2 + 1][cSolider2 + 6] = '.';
		X[rSolider2 + 1][cSolider2 + 7] = '-';
		X[rSolider2 + 1][cSolider2 + 8] = '-';
		X[rSolider2 + 1][cSolider2 + 9] = '-';
		X[rSolider2 + 1][cSolider2 + 10] = '.';
		X[rSolider2 + 2][cSolider2 + 3] = '|';
		X[rSolider2 + 2][cSolider2 + 4] = '|';
		X[rSolider2 + 2][cSolider2 + 5] = '/';
		X[rSolider2 + 2][cSolider2 + 6] = '_';
		X[rSolider2 + 2][cSolider2 + 7] = '_';
		X[rSolider2 + 2][cSolider2 + 8] = '_';
		X[rSolider2 + 2][cSolider2 + 9] = '_';
		X[rSolider2 + 2][cSolider2 + 10] = '_';
		X[rSolider2 + 2][cSolider2 + 11] = '\\';
		X[rSolider2 + 3][cSolider2 + 3] = '|';
		X[rSolider2 + 3][cSolider2 + 4] = '|';
		X[rSolider2 + 3][cSolider2 + 5] = '(';
		X[rSolider2 + 3][cSolider2 + 7] = 96;
		X[rSolider2 + 3][cSolider2 + 8] = '.';
		X[rSolider2 + 3][cSolider2 + 9] = 96;
		X[rSolider2 + 3][cSolider2 + 11] = ')';
		X[rSolider2 + 4][cSolider2 + 3] = '|';
		X[rSolider2 + 4][cSolider2 + 4] = '|';
		X[rSolider2 + 4][cSolider2 + 6] = '\\';
		X[rSolider2 + 4][cSolider2 + 7] = '_';
		X[rSolider2 + 4][cSolider2 + 8] = '-';
		X[rSolider2 + 4][cSolider2 + 9] = '_';
		X[rSolider2 + 4][cSolider2 + 10] = '/';
		X[rSolider2 + 4][cSolider2 + 11] = '_';
		X[rSolider2 + 5][cSolider2 + 3] = ':';
		X[rSolider2 + 5][cSolider2 + 4] = '-';
		X[rSolider2 + 5][cSolider2 + 5] = '"';
		X[rSolider2 + 5][cSolider2 + 6] = '`';
		X[rSolider2 + 5][cSolider2 + 7] = 96;
		X[rSolider2 + 5][cSolider2 + 8] = 'V';
		X[rSolider2 + 5][cSolider2 + 9] = 96;
		X[rSolider2 + 5][cSolider2 + 10] = '/';
		X[rSolider2 + 5][cSolider2 + 11] = '/';
		X[rSolider2 + 5][cSolider2 + 12] = '-';
		X[rSolider2 + 5][cSolider2 + 13] = '.';
		X[rSolider2 + 6][cSolider2 + 2] = '/';
		X[rSolider2 + 6][cSolider2 + 4] = ',';
		X[rSolider2 + 6][cSolider2 + 8] = '|';
		X[rSolider2 + 6][cSolider2 + 9] = '/';
		X[rSolider2 + 6][cSolider2 + 10] = '/';
		X[rSolider2 + 6][cSolider2 + 12] = ',';
		X[rSolider2 + 6][cSolider2 + 14] = '`';
		X[rSolider2 + 6][cSolider2 + 15] = '\\';
		X[rSolider2 + 7][cSolider2 + 1] = '/';
		X[rSolider2 + 7][cSolider2 + 3] = '/';
		X[rSolider2 + 7][cSolider2 + 4] = '|';
		X[rSolider2 + 7][cSolider2 + 5] = 'L';
		X[rSolider2 + 7][cSolider2 + 6] = 'l';
		X[rSolider2 + 7][cSolider2 + 8] = '/';
		X[rSolider2 + 7][cSolider2 + 9] = '/';
		X[rSolider2 + 7][cSolider2 + 10] = 'L';
		X[rSolider2 + 7][cSolider2 + 11] = 'l';
		X[rSolider2 + 7][cSolider2 + 12] = '|';
		X[rSolider2 + 7][cSolider2 + 13] = '|';
		X[rSolider2 + 7][cSolider2 + 15] = '|';
		X[rSolider2 + 8][cSolider2] = '/';
		X[rSolider2 + 8][cSolider2 + 1] = '_';
		X[rSolider2 + 8][cSolider2 + 2] = '/';
		X[rSolider2 + 8][cSolider2 + 3] = '|';
		X[rSolider2 + 8][cSolider2 + 4] = '|';
		X[rSolider2 + 8][cSolider2 + 5] = '_';
		X[rSolider2 + 8][cSolider2 + 6] = '_';
		X[rSolider2 + 8][cSolider2 + 7] = '/';
		X[rSolider2 + 8][cSolider2 + 8] = '/';
		X[rSolider2 + 8][cSolider2 + 12] = '|';
		X[rSolider2 + 8][cSolider2 + 13] = '|';
		X[rSolider2 + 8][cSolider2 + 15] = '|';
		X[rSolider2 + 9][cSolider2] = '\\';
		X[rSolider2 + 9][cSolider2 + 2] = '\\';
		X[rSolider2 + 9][cSolider2 + 3] = '/';
		X[rSolider2 + 9][cSolider2 + 4] = '-';
		X[rSolider2 + 9][cSolider2 + 5] = '-';
		X[rSolider2 + 9][cSolider2 + 6] = '-';
		X[rSolider2 + 9][cSolider2 + 7] = '|';
		X[rSolider2 + 9][cSolider2 + 8] = '[';
		X[rSolider2 + 9][cSolider2 + 9] = ']';
		X[rSolider2 + 9][cSolider2 + 10] = '=';
		X[rSolider2 + 9][cSolider2 + 11] = '=';
		X[rSolider2 + 9][cSolider2 + 12] = '|';
		X[rSolider2 + 9][cSolider2 + 13] = '|';
		X[rSolider2 + 9][cSolider2 + 15] = '|';
		X[rSolider2 + 10][cSolider2 + 1] = '\\';
		X[rSolider2 + 10][cSolider2 + 2] = '/';
		X[rSolider2 + 10][cSolider2 + 3] = '\\';
		X[rSolider2 + 10][cSolider2 + 4] = '_';
		X[rSolider2 + 10][cSolider2 + 5] = '_';
		X[rSolider2 + 10][cSolider2 + 6] = '/';
		X[rSolider2 + 10][cSolider2 + 8] = '|';
		X[rSolider2 + 10][cSolider2 + 12] = '\\';
		X[rSolider2 + 10][cSolider2 + 13] = '|';
		X[rSolider2 + 10][cSolider2 + 15] = '|';
		X[rSolider2 + 11][cSolider2 + 1] = '/';
		X[rSolider2 + 11][cSolider2 + 2] = '\\';
		X[rSolider2 + 11][cSolider2 + 3] = '|';
		X[rSolider2 + 11][cSolider2 + 4] = '_';
		X[rSolider2 + 11][cSolider2 + 8] = '|';
		X[rSolider2 + 11][cSolider2 + 10] = 'L';
		X[rSolider2 + 11][cSolider2 + 11] = 'l';
		X[rSolider2 + 11][cSolider2 + 12] = '_';
		X[rSolider2 + 11][cSolider2 + 13] = '\\';
		X[rSolider2 + 11][cSolider2 + 15] = '|';
		X[rSolider2 + 12][cSolider2 + 1] = '`';
		X[rSolider2 + 12][cSolider2 + 2] = '-';
		X[rSolider2 + 12][cSolider2 + 3] = '-';
		X[rSolider2 + 12][cSolider2 + 4] = '|';
		X[rSolider2 + 12][cSolider2 + 5] = '`';
		X[rSolider2 + 12][cSolider2 + 6] = '^';
		X[rSolider2 + 12][cSolider2 + 7] = '"';
		X[rSolider2 + 12][cSolider2 + 8] = '"';
		X[rSolider2 + 12][cSolider2 + 9] = '"';
		X[rSolider2 + 12][cSolider2 + 10] = '^';
		X[rSolider2 + 12][cSolider2 + 11] = '`';
		X[rSolider2 + 12][cSolider2 + 12] = '|';
		X[rSolider2 + 12][cSolider2 + 13] = '|';
		X[rSolider2 + 12][cSolider2 + 14] = '_';
		X[rSolider2 + 12][cSolider2 + 15] = '|';
		X[rSolider2 + 13][cSolider2 + 4] = '|';
		X[rSolider2 + 13][cSolider2 + 8] = '|';
		X[rSolider2 + 13][cSolider2 + 12] = '|';
		X[rSolider2 + 13][cSolider2 + 13] = '|';
		X[rSolider2 + 13][cSolider2 + 14] = '/';
		X[rSolider2 + 14][cSolider2 + 4] = '|';
		X[rSolider2 + 14][cSolider2 + 8] = '|';
		X[rSolider2 + 14][cSolider2 + 12] = '|';
		X[rSolider2 + 15][cSolider2 + 4] = '|';
		X[rSolider2 + 15][cSolider2 + 8] = '|';
		X[rSolider2 + 15][cSolider2 + 12] = '|';
		X[rSolider2 + 16][cSolider2 + 4] = '|';
		X[rSolider2 + 16][cSolider2 + 8] = '|';
		X[rSolider2 + 16][cSolider2 + 12] = '|';
		X[rSolider2 + 17][cSolider2 + 4] = 'L';
		X[rSolider2 + 17][cSolider2 + 5] = '_';
		X[rSolider2 + 17][cSolider2 + 6] = '_';
		X[rSolider2 + 17][cSolider2 + 7] = '_';
		X[rSolider2 + 17][cSolider2 + 8] = 'l';
		X[rSolider2 + 17][cSolider2 + 9] = '_';
		X[rSolider2 + 17][cSolider2 + 10] = '_';
		X[rSolider2 + 17][cSolider2 + 11] = '_';
		X[rSolider2 + 17][cSolider2 + 12] = 'J';
		X[rSolider2 + 18][cSolider2 + 5] = '|';
		X[rSolider2 + 18][cSolider2 + 6] = '_';
		X[rSolider2 + 18][cSolider2 + 9] = '_';
		X[rSolider2 + 18][cSolider2 + 10] = '|';
		X[rSolider2 + 19][cSolider2 + 4] = '(';
		X[rSolider2 + 19][cSolider2 + 5] = '_';
		X[rSolider2 + 19][cSolider2 + 6] = '_';
		X[rSolider2 + 19][cSolider2 + 7] = '_';
		X[rSolider2 + 19][cSolider2 + 8] = '|';
		X[rSolider2 + 19][cSolider2 + 9] = '_';
		X[rSolider2 + 19][cSolider2 + 10] = '_';
		X[rSolider2 + 19][cSolider2 + 11] = '_';
		X[rSolider2 + 19][cSolider2 + 12] = ')';
		X[rSolider2 + 20][cSolider2 + 5] = '^';
		X[rSolider2 + 20][cSolider2 + 6] = '^';
		X[rSolider2 + 20][cSolider2 + 7] = '^';
		X[rSolider2 + 20][cSolider2 + 9] = '^';
		X[rSolider2 + 20][cSolider2 + 10] = '^';
		X[rSolider2 + 20][cSolider2 + 11] = '^';
	}
	if (zz == 1 || qq == -2)
	{
		X[rSolider2][cSolider2 + 3] = ' ';
		X[rSolider2][cSolider2 + 4] = ' ';
		X[rSolider2 + 1][cSolider2 + 3] = ' ';
		X[rSolider2 + 1][cSolider2 + 4] = ' ';
		X[rSolider2 + 1][cSolider2 + 6] = ' ';
		X[rSolider2 + 1][cSolider2 + 7] = ' ';
		X[rSolider2 + 1][cSolider2 + 8] = ' ';
		X[rSolider2 + 1][cSolider2 + 9] = ' ';
		X[rSolider2 + 1][cSolider2 + 10] = ' ';
		X[rSolider2 + 2][cSolider2 + 3] = ' ';
		X[rSolider2 + 2][cSolider2 + 4] = ' ';
		X[rSolider2 + 2][cSolider2 + 5] = ' ';
		X[rSolider2 + 2][cSolider2 + 6] = ' ';
		X[rSolider2 + 2][cSolider2 + 7] = ' ';
		X[rSolider2 + 2][cSolider2 + 8] = ' ';
		X[rSolider2 + 2][cSolider2 + 9] = ' ';
		X[rSolider2 + 2][cSolider2 + 10] = ' ';
		X[rSolider2 + 2][cSolider2 + 11] = ' ';
		X[rSolider2 + 3][cSolider2 + 3] = ' ';
		X[rSolider2 + 3][cSolider2 + 4] = ' ';
		X[rSolider2 + 3][cSolider2 + 5] = ' ';
		X[rSolider2 + 3][cSolider2 + 7] = ' ';
		X[rSolider2 + 3][cSolider2 + 8] = ' ';
		X[rSolider2 + 3][cSolider2 + 9] = ' ';
		X[rSolider2 + 3][cSolider2 + 11] = ' ';
		X[rSolider2 + 4][cSolider2 + 3] = ' ';
		X[rSolider2 + 4][cSolider2 + 4] = ' ';
		X[rSolider2 + 4][cSolider2 + 6] = ' ';
		X[rSolider2 + 4][cSolider2 + 7] = ' ';
		X[rSolider2 + 4][cSolider2 + 8] = ' ';
		X[rSolider2 + 4][cSolider2 + 9] = ' ';
		X[rSolider2 + 4][cSolider2 + 10] = ' ';
		X[rSolider2 + 4][cSolider2 + 11] = ' ';
		X[rSolider2 + 5][cSolider2 + 3] = ' ';
		X[rSolider2 + 5][cSolider2 + 4] = ' ';
		X[rSolider2 + 5][cSolider2 + 5] = ' ';
		X[rSolider2 + 5][cSolider2 + 6] = ' ';
		X[rSolider2 + 5][cSolider2 + 7] = ' ';
		X[rSolider2 + 5][cSolider2 + 8] = ' ';
		X[rSolider2 + 5][cSolider2 + 9] = ' ';
		X[rSolider2 + 5][cSolider2 + 10] = ' ';
		X[rSolider2 + 5][cSolider2 + 11] = ' ';
		X[rSolider2 + 5][cSolider2 + 12] = ' ';
		X[rSolider2 + 5][cSolider2 + 13] = ' ';
		X[rSolider2 + 6][cSolider2 + 2] = ' ';
		X[rSolider2 + 6][cSolider2 + 4] = ' ';
		X[rSolider2 + 6][cSolider2 + 8] = ' ';
		X[rSolider2 + 6][cSolider2 + 9] = ' ';
		X[rSolider2 + 6][cSolider2 + 10] = ' ';
		X[rSolider2 + 6][cSolider2 + 12] = ' ';
		X[rSolider2 + 6][cSolider2 + 14] = ' ';
		X[rSolider2 + 6][cSolider2 + 15] = ' ';
		X[rSolider2 + 7][cSolider2 + 1] = ' ';
		X[rSolider2 + 7][cSolider2 + 3] = ' ';
		X[rSolider2 + 7][cSolider2 + 4] = ' ';
		X[rSolider2 + 7][cSolider2 + 5] = ' ';
		X[rSolider2 + 7][cSolider2 + 6] = ' ';
		X[rSolider2 + 7][cSolider2 + 8] = ' ';
		X[rSolider2 + 7][cSolider2 + 9] = ' ';
		X[rSolider2 + 7][cSolider2 + 10] = ' ';
		X[rSolider2 + 7][cSolider2 + 11] = ' ';
		X[rSolider2 + 7][cSolider2 + 12] = ' ';
		X[rSolider2 + 7][cSolider2 + 13] = ' ';
		X[rSolider2 + 7][cSolider2 + 15] = ' ';
		X[rSolider2 + 8][cSolider2] = ' ';
		X[rSolider2 + 8][cSolider2 + 1] = ' ';
		X[rSolider2 + 8][cSolider2 + 2] = ' ';
		X[rSolider2 + 8][cSolider2 + 3] = ' ';
		X[rSolider2 + 8][cSolider2 + 4] = ' ';
		X[rSolider2 + 8][cSolider2 + 5] = ' ';
		X[rSolider2 + 8][cSolider2 + 6] = ' ';
		X[rSolider2 + 8][cSolider2 + 7] = ' ';
		X[rSolider2 + 8][cSolider2 + 8] = ' ';
		X[rSolider2 + 8][cSolider2 + 12] = ' ';
		X[rSolider2 + 8][cSolider2 + 13] = ' ';
		X[rSolider2 + 8][cSolider2 + 15] = ' ';
		X[rSolider2 + 9][cSolider2] = ' ';
		X[rSolider2 + 9][cSolider2 + 2] = ' ';
		X[rSolider2 + 9][cSolider2 + 3] = ' ';
		X[rSolider2 + 9][cSolider2 + 4] = ' ';
		X[rSolider2 + 9][cSolider2 + 5] = ' ';
		X[rSolider2 + 9][cSolider2 + 6] = ' ';
		X[rSolider2 + 9][cSolider2 + 7] = ' ';
		X[rSolider2 + 9][cSolider2 + 8] = ' ';
		X[rSolider2 + 9][cSolider2 + 9] = ' ';
		X[rSolider2 + 9][cSolider2 + 10] = ' ';
		X[rSolider2 + 9][cSolider2 + 11] = ' ';
		X[rSolider2 + 9][cSolider2 + 12] = ' ';
		X[rSolider2 + 9][cSolider2 + 13] = ' ';
		X[rSolider2 + 9][cSolider2 + 15] = ' ';
		X[rSolider2 + 10][cSolider2 + 1] = ' ';
		X[rSolider2 + 10][cSolider2 + 2] = ' ';
		X[rSolider2 + 10][cSolider2 + 3] = ' ';
		X[rSolider2 + 10][cSolider2 + 4] = ' ';
		X[rSolider2 + 10][cSolider2 + 5] = ' ';
		X[rSolider2 + 10][cSolider2 + 6] = ' ';
		X[rSolider2 + 10][cSolider2 + 8] = ' ';
		X[rSolider2 + 10][cSolider2 + 12] = ' ';
		X[rSolider2 + 10][cSolider2 + 13] = ' ';
		X[rSolider2 + 10][cSolider2 + 15] = ' ';
		X[rSolider2 + 11][cSolider2 + 1] = ' ';
		X[rSolider2 + 11][cSolider2 + 2] = ' ';
		X[rSolider2 + 11][cSolider2 + 3] = ' ';
		X[rSolider2 + 11][cSolider2 + 4] = ' ';
		X[rSolider2 + 11][cSolider2 + 8] = ' ';
		X[rSolider2 + 11][cSolider2 + 10] = ' ';
		X[rSolider2 + 11][cSolider2 + 11] = ' ';
		X[rSolider2 + 11][cSolider2 + 12] = ' ';
		X[rSolider2 + 11][cSolider2 + 13] = ' ';
		X[rSolider2 + 11][cSolider2 + 15] = ' ';
		X[rSolider2 + 12][cSolider2 + 1] = ' ';
		X[rSolider2 + 12][cSolider2 + 2] = ' ';
		X[rSolider2 + 12][cSolider2 + 3] = ' ';
		X[rSolider2 + 12][cSolider2 + 4] = ' ';
		X[rSolider2 + 12][cSolider2 + 5] = ' ';
		X[rSolider2 + 12][cSolider2 + 6] = ' ';
		X[rSolider2 + 12][cSolider2 + 7] = ' ';
		X[rSolider2 + 12][cSolider2 + 8] = ' ';
		X[rSolider2 + 12][cSolider2 + 9] = ' ';
		X[rSolider2 + 12][cSolider2 + 10] = ' ';
		X[rSolider2 + 12][cSolider2 + 11] = ' ';
		X[rSolider2 + 12][cSolider2 + 12] = ' ';
		X[rSolider2 + 12][cSolider2 + 13] = ' ';
		X[rSolider2 + 12][cSolider2 + 14] = ' ';
		X[rSolider2 + 12][cSolider2 + 15] = ' ';
		X[rSolider2 + 13][cSolider2 + 4] = ' ';
		X[rSolider2 + 13][cSolider2 + 8] = ' ';
		X[rSolider2 + 13][cSolider2 + 12] = ' ';
		X[rSolider2 + 13][cSolider2 + 13] = ' ';
		X[rSolider2 + 13][cSolider2 + 14] = ' ';
		X[rSolider2 + 14][cSolider2 + 4] = ' ';
		X[rSolider2 + 14][cSolider2 + 8] = ' ';
		X[rSolider2 + 14][cSolider2 + 12] = ' ';
		X[rSolider2 + 15][cSolider2 + 4] = ' ';
		X[rSolider2 + 15][cSolider2 + 8] = ' ';
		X[rSolider2 + 15][cSolider2 + 12] = ' ';
		X[rSolider2 + 16][cSolider2 + 4] = ' ';
		X[rSolider2 + 16][cSolider2 + 8] = ' ';
		X[rSolider2 + 16][cSolider2 + 12] = ' ';
		X[rSolider2 + 17][cSolider2 + 4] = ' ';
		X[rSolider2 + 17][cSolider2 + 5] = ' ';
		X[rSolider2 + 17][cSolider2 + 6] = ' ';
		X[rSolider2 + 17][cSolider2 + 7] = ' ';
		X[rSolider2 + 17][cSolider2 + 8] = ' ';
		X[rSolider2 + 17][cSolider2 + 9] = ' ';
		X[rSolider2 + 17][cSolider2 + 10] = ' ';
		X[rSolider2 + 17][cSolider2 + 11] = ' ';
		X[rSolider2 + 17][cSolider2 + 12] = ' ';
		X[rSolider2 + 18][cSolider2 + 5] = ' ';
		X[rSolider2 + 18][cSolider2 + 6] = ' ';
		X[rSolider2 + 18][cSolider2 + 9] = ' ';
		X[rSolider2 + 18][cSolider2 + 10] = ' ';
		X[rSolider2 + 19][cSolider2 + 4] = ' ';
		X[rSolider2 + 19][cSolider2 + 5] = ' ';
		X[rSolider2 + 19][cSolider2 + 6] = ' ';
		X[rSolider2 + 19][cSolider2 + 7] = ' ';
		X[rSolider2 + 19][cSolider2 + 8] = ' ';
		X[rSolider2 + 19][cSolider2 + 9] = ' ';
		X[rSolider2 + 19][cSolider2 + 10] = ' ';
		X[rSolider2 + 19][cSolider2 + 11] = ' ';
		X[rSolider2 + 19][cSolider2 + 12] = ' ';
		X[rSolider2 + 20][cSolider2 + 5] = ' ';
		X[rSolider2 + 20][cSolider2 + 6] = ' ';
		X[rSolider2 + 20][cSolider2 + 7] = ' ';
		X[rSolider2 + 20][cSolider2 + 9] = ' ';
		X[rSolider2 + 20][cSolider2 + 10] = ' ';
		X[rSolider2 + 20][cSolider2 + 11] = ' ';
	}
}
void MoveSolider(int& cSolider, int& FlagSolider)
{
	if (FlagSolider == 0)
	{
		cSolider++;
		if (cSolider > 650)
		{
			FlagSolider = 1;
		}
	}
	else
	{
		cSolider--;
		if (cSolider == 600)
		{
			FlagSolider = 0;
		}
	}
}
//JUMPING
void jumping(int& rH, int& cH, int flag, int& ct3, int& p, int& ppos)
{
	if (ct3 < 20&&ppos==0)
	{
		rH--;
		cH++;
		ct3++;
	}
	
	if (ct3 >= 20 && ct3 < 40&&ppos==0)
	{
		rH++;
		cH++;
		ct3++;
	}
	if (ct3 == 40&&ppos==0)
	{
		
		cH++;
		ct3 = 0;
		
		ppos = 1;
		
	}
	
	//if (ct3 < 20&& ppos == 1)
	//{
	//	rH--;
	//	cH++;
	//	ct3++;
	//	
	//}
	//
	//if (ct3 >= 20 && ct3 < 40&& ppos == 1)
	//{
	//	rH++;
	//	cH++;
	//	ct3++;
	//}
	//if (ct3 == 40&&ppos == 1)
	//{
	//	cH++;
	//	ppos = 0;
	//	ct3 = 0;
	//
	//}



	//if (ct3 < 20 && ppos == 0)
	//{
	//	rH--;
	//	cH++;
	//	ct3++;
	//}
	//
	//if (ct3 >= 20 && ct3 < 40 && ppos == 0)
	//{
	//	rH++;
	//	cH++;
	//	ct3++;
	//}
	//if (ct3 == 40 && ppos == 0)
	//{
	//	cH++;
	//	ppos = 1;
	//	ct3 = 0;
	//}
	//if (ct3 < 20 && ppos == 1)
	//{
	//	rH--;
	//	cH++;
	//	ct3++;
	//}
	//
	//if (ct3 >= 20 && ct3 < 40 && ppos == 1)
	//{
	//	rH++;
	//	cH++;
	//	ct3++;
	//}
	//if (ct3 == 40 && ppos == 1)
	//{
	//	cH++;
	//	p = 0;
	//	ppos = 0;
	//	ct3 = 0;
	//}

}
void jumping2(int& rH, int& cH, int flag2, int& ct9, int& q)
{
	if (ct9 < 10)
	{
		rH--;
		ct9++;
	}

	if (ct9 == 10)
	{
		rH++;
		q = 0;
		ct9 = 0;
	}

}
void jumping3(int& rH, int& cH, int flag3, int& ct33, int& p3)
{
	if (ct33 < 20)
	{
		rH--;
		cH--;
		ct33++;
	}

	if (ct33 >= 20 && ct33 < 40)
	{
		cH--;
		rH++;

		ct33++;
	}
	if (ct33 == 40)
	{
		cH--;
		p3 = 0;
		ct33 = 0;
	}
}
//LASER
void DrawLaser(int rH, int cH, unsigned char X[][2200], int& ct4, int& w)
{
	for (int i = 0; i < ct4; i++)
	{
		X[rH + 14][cH + 19 + i] = '_';
	}

}
void Laser(int rH, int cH, unsigned char X[][2200], int& ct4, int& flaglaser, int& z)
{
	if (flaglaser == 0)
	{
		if (ct4 == 40)
		{
			flaglaser = 1;
		}
	}
	if (flaglaser == 1)
	{
		int ctt = 41;
		for (int i = ct4; i < ctt; i++)
		{
			X[rH + 14][cH + 19 + i] = ' ';
		}
		if (ct4 == 0)
		{
			flaglaser = 0;
			z = 0;
		}
	}
}
void DrawLaserWa7sh(int rWa7sh, int cWa7sh, unsigned char X[][2200], int& ct44, int& zZ)
{
	for (int i = 0; i < ct44; i++)
	{
		cWa7sh--;
		X[rWa7sh + 3][cWa7sh + 23 + i] = '/';
		rWa7sh++;
		cWa7sh--;
	}

}
void LaserWa7sh(int rWa7sh, int cWa7sh, unsigned char X[][2200], int& ct44, int& flaglaserWa7sh, int& zZ)
{
	if (zZ == 0)
	{
		ct44++;
		if (ct44 == 40)
		{

			zZ = 1;
		}

	}

	if (zZ == 1)
	{

		int ctt4 = 41;
		for (int i = ct44; i < ctt4; i++)
		{
			cWa7sh--;
			X[rWa7sh + 3][cWa7sh + 23 + i] = ' ';
			rWa7sh++;
			cWa7sh--;
		}
		ct44--;
		if (ct44 == 0)
		{

			zZ = 0;

		}



	}

}

void DrawLaserWa7sh2(int rWa7sh, int cWa7sh, unsigned char X[][2200], int& ct44, int& zZ)
{
	for (int i = 0; i < ct44; i++)
	{

		X[rWa7sh + 3][cWa7sh + 25 + i] = '\\';
		rWa7sh++;
		//cWa7sh++;
	}

}
void LaserWa7sh2(int rWa7sh, int cWa7sh, unsigned char X[][2200], int& ct44, int& flaglaserWa7sh, int& zZ)
{
	if (zZ == 0)
	{
		ct44++;
		if (ct44 == 40)
		{

			zZ = 1;
		}

	}

	if (zZ == 1)
	{

		int ctt4 = 41;
		for (int i = ct44; i < ctt4; i++)
		{
			cWa7sh++;
			X[rWa7sh + 3][cWa7sh + 25 + i] = ' ';
			rWa7sh++;
			cWa7sh++;
		}
		ct44--;
		if (ct44 == 0)
		{

			zZ = 0;

		}



	}

}

void Laser2(unsigned char X[][2200], int& countlaser2)
{
	int SR = 190; int SC = 531;
	if ((countlaser2) % 2 == 0)
	{
		for (int r = SR; r > SR - 6; r--)
		{
			X[r][SC] = (unsigned char)179;
		}
		SC = 537;
		for (int r = SR; r > SR - 6; r--)
		{
			X[r][SC] = (unsigned char)179;
		}
	}
	else
	{

		for (int r = SR; r > SR - 6; r--)
		{
			X[r][SC] = ' ';
		}
		SC = 537;
		for (int r = SR; r > SR - 6; r--)
		{
			X[r][SC] = ' ';
		}
	}
	countlaser2++;
}
void MotElhero(int rH, int cH, unsigned char X[][2200], int OVER, int alb1, int alb2, int alb3)
{
	for (int r = rH - 9; r <= rH + 12; r++)
	{
		for (int c = cH; c <= cH + 33; c++)
		{
			if (X[r][cH + 32] != ' ')
			{
				if (X[rH - 20][cH + 3] == 003)
				{
					alb1 = 1;
					X[rH - 20][cH + 3] = ' ';


				}
				else
				{
					if (X[rH - 20][cH + 1] = 003)
					{
						alb2 = 1;
						X[rH - 20][cH + 3] = ' ';
					}
					else
					{
						alb3 = 1;
						OVER = 1;
					}
				}

			}
		}
	}
}

void Live(unsigned char X[][2200], int rH, int cH)
{
	//if ()
	//	{
	//		X[rH - 20][cH - 7] = 'L';
	//		X[rH - 20][cH - 6] = 'i';
	//		X[rH - 20][cH - 5] = 'v';
	//		X[rH - 20][cH - 4] = 'e';
	//		X[rH - 20][cH - 3] = ':';
	//		X[rH - 20][cH - 1] = 003;
	//		X[rH - 20][cH + 1] = 003;
	//		X[rH - 20][cH + 3] = 003;
	//	}
	//if (X[rH + 22][cH - 3] == '|' || X[rH + 22][cH - 2] == '|' || X[rH + 22][cH - 1] == '|' || X[rH + 22][cH] == '|' || X[rH + 22][cH + 3] == '|' || X[rH + 22][cH + 4] == '|' || X[rH + 22][cH + 5] == '|' || X[rH + 22][cH + 6] == '|')
	//{
	//	X[rH - 20][cH - 7] = 'L';
	//	X[rH - 20][cH - 6] = 'i';
	//	X[rH - 20][cH - 5] = 'v';
	//	X[rH - 20][cH - 4] = 'e';
	//	X[rH - 20][cH - 3] = ':';
	//	X[rH - 20][cH - 1] = 003;
	//	X[rH - 20][cH + 1] = 003;
	//
	//}
}
void DrawTool(unsigned char X[][2200], int rH, int cH)
{
	X[rH + 13][cH + 14] = '/';
	X[rH + 13][cH + 15] = '_';
	X[rH + 13][cH + 16] = '_';
	X[rH + 13][cH + 17] = '\\';
	X[rH + 14][cH + 12] = 'O';
	X[rH + 14][cH + 13] = '(';
	X[rH + 14][cH + 14] = '_';
	X[rH + 14][cH + 15] = '_';
	X[rH + 14][cH + 16] = '<';
	X[rH + 14][cH + 17] = '<';
	X[rH + 14][cH + 18] = '<';
	X[rH + 15][cH + 14] = '\\';
	X[rH + 15][cH + 15] = '_';
	X[rH + 15][cH + 16] = '_';
	X[rH + 15][cH + 17] = '/';
}
void ProtectElHeroMnElTank(int rH, int cH, int rowD, int clmD, unsigned char X[][2200], int fUP)
{
	for (int r = rH; r <= rH + 22; r++)
	{
		if (r == rowD)
		{
			X[r][cH + 52] = 'M';
			X[rowD][clmD + 2] = ' ';
			if (cH + 52 == clmD + 2)
			{
				X[r][clmD + 3] = 'Z ';
			}
		}
	}
}
/// protect el herro
void MotElheroMnelsabara(int cElsbara, int cH, int rH, unsigned char X[][2200])
{
	if (cElsbara == cH + 31)
	{
		X[rH][cH] = ' ';
		X[rH][cH + 1] = ' ';
		X[rH][cH + 2] = ' ';
		X[rH][cH + 3] = ' ';
		X[rH][cH + 4] = ' ';
		X[rH][cH + 5] = ' ';
		X[rH + 1][cH - 1] = ' ';
		X[rH + 1][cH] = ' ';
		X[rH + 1][cH + 1] = ' ';
		X[rH + 1][cH + 2] = ' ';
		X[rH + 1][cH + 3] = ' ';
		X[rH + 1][cH + 6] = ' ';
		X[rH + 2][cH - 1] = ' ';
		X[rH + 2][cH + 1] = ' ';
		X[rH + 2][cH + 2] = ' ';
		X[rH + 2][cH + 3] = ' ';
		X[rH + 2][cH + 4] = ' ';
		X[rH + 2][cH + 5] = ' ';
		X[rH + 2][cH + 6] = ' ';
		X[rH + 3][cH - 1] = ' ';
		X[rH + 3][cH] = ' ';
		X[rH + 3][cH + 1] = ' ';
		X[rH + 3][cH + 2] = ' ';
		X[rH + 3][cH + 3] = ' ';
		X[rH + 3][cH + 5] = ' ';
		X[rH + 3][cH + 6] = ' ';
		X[rH + 4][cH] = ' ';
		X[rH + 4][cH + 2] = ' ';
		X[rH + 4][cH + 5] = ' ';
		X[rH + 5][cH - 5] = ' ';
		X[rH + 5][cH - 4] = ' ';
		X[rH + 5][cH - 3] = ' ';
		X[rH + 5][cH - 2] = ' ';
		X[rH + 5][cH - 1] = ' ';
		X[rH + 5][cH] = ' ';
		X[rH + 5][cH + 1] = ' ';
		X[rH + 5][cH + 2] = ' ';
		X[rH + 5][cH + 3] = ' ';
		X[rH + 5][cH + 4] = ' ';
		X[rH + 5][cH + 5] = ' ';
		X[rH + 5][cH + 6] = ' ';
		X[rH + 5][cH + 7] = ' ';
		X[rH + 5][cH + 8] = ' ';
		X[rH + 5][cH + 9] = ' ';
		X[rH + 5][cH + 10] = ' ';
		X[rH + 6][cH - 6] = ' ';
		X[rH + 6][cH] = ' ';
		X[rH + 6][cH + 1] = ' ';
		X[rH + 6][cH + 2] = ' ';
		X[rH + 6][cH + 3] = ' ';
		X[rH + 6][cH + 4] = ' ';
		X[rH + 6][cH + 5] = ' ';
		X[rH + 6][cH + 11] = ' ';

		X[rH + 7][cH - 7] = ' ';
		X[rH + 7][cH + 2] = ' ';
		X[rH + 7][cH + 3] = ' ';
		X[rH + 7][cH + 11] = ' ';

		X[rH + 8][cH - 7] = ' ';
		X[rH + 8][cH + 1] = ' ';
		X[rH + 8][cH + 2] = ' ';
		X[rH + 8][cH + 11] = ' ';

		X[rH + 9][cH - 7] = ' ';
		X[rH + 9][cH - 3] = ' ';
		X[rH + 9][cH + 1] = ' ';
		X[rH + 9][cH + 7] = ' ';
		X[rH + 9][cH + 12] = ' ';

		X[rH + 10][cH - 7] = ' ';
		X[rH + 10][cH - 2] = ' ';
		X[rH + 10][cH + 1] = ' ';
		X[rH + 10][cH + 2] = ' ';
		X[rH + 10][cH + 7] = ' ';
		X[rH + 10][cH + 12] = ' ';

		X[rH + 11][cH - 7] = ' ';
		X[rH + 11][cH - 6] = ' ';
		X[rH + 11][cH - 2] = ' ';
		X[rH + 11][cH - 1] = ' ';
		X[rH + 11][cH] = ' ';
		X[rH + 11][cH + 1] = ' ';
		X[rH + 11][cH + 2] = ' ';
		X[rH + 11][cH + 3] = ' ';
		X[rH + 11][cH + 4] = ' ';
		X[rH + 11][cH + 5] = ' ';
		X[rH + 11][cH + 6] = ' ';
		X[rH + 11][cH + 7] = ' ';
		X[rH + 11][cH + 10] = ' ';
		X[rH + 11][cH + 11] = ' ';
		X[rH + 11][cH + 12] = ' ';

		X[rH + 12][cH - 5] = ' ';;
		X[rH + 12][cH - 4] = ' ';
		X[rH + 12][cH - 3] = ' ';
		X[rH + 12][cH - 2] = ' ';
		X[rH + 12][cH - 1] = ' ';
		X[rH + 12][cH] = ' ';
		X[rH + 12][cH + 1] = ' ';
		X[rH + 12][cH + 2] = ' ';
		X[rH + 12][cH + 3] = ' ';
		X[rH + 12][cH + 4] = ' ';
		X[rH + 12][cH + 5] = ' ';
		X[rH + 12][cH + 6] = ' ';;
		X[rH + 12][cH + 7] = ' ';;
		X[rH + 12][cH + 8] = ' ';
		X[rH + 12][cH + 9] = ' ';
		X[rH + 12][cH + 10] = ' ';

		X[rH + 13][cH - 5] = ' ';
		X[rH + 13][cH - 3] = ' ';
		X[rH + 13][cH - 2] = ' ';
		X[rH + 13][cH - 1] = ' ';
		X[rH + 13][cH + 6] = ' ';
		X[rH + 13][cH + 7] = ' ';
		X[rH + 13][cH + 8] = ' ';
		X[rH + 13][cH + 10] = ' ';

		X[rH + 14][cH - 5] = ' ';
		X[rH + 14][cH - 4] = ' ';
		X[rH + 14][cH - 1] = ' ';
		X[rH + 14][cH] = ' ';
		X[rH + 14][cH + 1] = ' ';
		X[rH + 14][cH + 2] = ' ';
		X[rH + 14][cH + 3] = ' ';
		X[rH + 14][cH + 4] = ' ';
		X[rH + 14][cH + 5] = ' ';
		X[rH + 14][cH + 6] = ' ';
		X[rH + 14][cH + 9] = ' ';
		X[rH + 14][cH + 10] = ' ';

		X[rH + 15][cH - 1] = ' ';
		X[rH + 15][cH + 2] = ' ';
		X[rH + 15][cH + 6] = ' ';
		' ';
		X[rH + 15][cH - 1] = ' ';
		X[rH + 15][cH] = ' ';
		X[rH + 15][cH + 2] = ' ';
		X[rH + 15][cH + 3] = ' ';
		X[rH + 15][cH + 5] = ' ';
		X[rH + 15][cH + 6] = ' ';

		X[rH + 16][cH - 1] = ' ';
		X[rH + 16][cH + 2] = ' ';
		X[rH + 16][cH + 3] = ' ';
		X[rH + 16][cH + 6] = ' ';

		X[rH + 17][cH - 1] = ' ';
		X[rH + 17][cH + 2] = ' ';
		X[rH + 17][cH + 3] = ' ';
		X[rH + 17][cH + 6] = ' ';

		X[rH + 18][cH - 2] = ' ';
		X[rH + 18][cH + 2] = ' ';
		X[rH + 18][cH + 3] = ' ';
		X[rH + 18][cH + 7] = ' ';

		X[rH + 19][cH - 3] = ' ';
		X[rH + 19][cH + 2] = ' ';
		X[rH + 19][cH + 3] = ' ';
		X[rH + 19][cH + 8] = ' ';

		X[rH + 20][cH - 2] = ' ';
		X[rH + 20][cH - 1] = ' ';
		X[rH + 20][cH] = ' ';
		X[rH + 20][cH + 1] = ' ';
		X[rH + 20][cH + 2] = ' ';
		X[rH + 20][cH + 3] = ' ';
		X[rH + 20][cH + 4] = ' ';
		X[rH + 20][cH + 5] = ' ';
		X[rH + 20][cH + 6] = ' ';
		X[rH + 20][cH + 7] = ' ';
		X[rH + 20][cH + 8] = ' ';

		X[rH + 21][cH - 2] = ' ';
		X[rH + 21][cH + 1] = ' ';
		X[rH + 21][cH + 4] = ' ';
		X[rH + 21][cH + 7] = ' ';

		X[rH + 22][cH - 3] = ' ';
		X[rH + 22][cH - 2] = ' ';
		X[rH + 22][cH - 1] = ' ';
		X[rH + 22][cH] = ' ';
		X[rH + 22][cH + 3] = ' ';
		X[rH + 22][cH + 4] = ' ';
		X[rH + 22][cH + 5] = ' ';
		X[rH + 22][cH + 6] = ' ';
	}
}
//HILOCOPTER
void DrawHilo(unsigned char X[][2200], int rHilo, int cHilo)
{

	X[rHilo][cHilo] = '=';
	X[rHilo][cHilo + 1] = '=';
	X[rHilo][cHilo + 2] = '=';
	X[rHilo][cHilo + 3] = '=';
	X[rHilo][cHilo + 4] = '=';
	X[rHilo][cHilo + 5] = '=';
	X[rHilo][cHilo + 6] = '=';
	X[rHilo][cHilo + 7] = '=';
	X[rHilo][cHilo + 8] = '=';
	X[rHilo][cHilo + 9] = '=';
	X[rHilo][cHilo + 10] = '=';
	X[rHilo][cHilo + 11] = '=';
	X[rHilo][cHilo + 12] = '=';
	X[rHilo][cHilo + 13] = '=';
	X[rHilo][cHilo + 14] = '=';
	X[rHilo][cHilo + 15] = '=';
	X[rHilo][cHilo + 16] = '-';
	X[rHilo][cHilo + 17] = '-';
	X[rHilo][cHilo + 18] = '+';
	X[rHilo][cHilo + 19] = '-';
	X[rHilo][cHilo + 20] = '-';
	X[rHilo][cHilo + 21] = '=';
	X[rHilo][cHilo + 22] = '=';
	X[rHilo][cHilo + 23] = '=';
	X[rHilo][cHilo + 24] = '=';
	X[rHilo][cHilo + 25] = '=';
	X[rHilo][cHilo + 26] = '=';
	X[rHilo][cHilo + 27] = '=';
	X[rHilo][cHilo + 28] = '=';
	X[rHilo][cHilo + 29] = '=';
	X[rHilo][cHilo + 30] = '=';
	X[rHilo][cHilo + 31] = '=';
	X[rHilo][cHilo + 32] = '=';
	X[rHilo][cHilo + 33] = '=';
	X[rHilo][cHilo + 34] = '=';
	X[rHilo][cHilo + 35] = '=';
	X[rHilo][cHilo + 36] = '=';
	X[rHilo][cHilo + 37] = '=';
	X[rHilo + 1][cHilo + 17] = '~';
	X[rHilo + 1][cHilo + 18] = '|';
	X[rHilo + 1][cHilo + 19] = '~';
	X[rHilo + 1][cHilo + 44] = ',';
	X[rHilo + 1][cHilo + 45] = '-';
	X[rHilo + 1][cHilo + 46] = '~';
	X[rHilo + 1][cHilo + 47] = '~';
	X[rHilo + 1][cHilo + 48] = '-';
	X[rHilo + 1][cHilo + 49] = '.';
	X[rHilo + 2][cHilo + 9] = '_';
	X[rHilo + 2][cHilo + 10] = '_';
	X[rHilo + 2][cHilo + 11] = '_';
	X[rHilo + 2][cHilo + 12] = '_';
	X[rHilo + 2][cHilo + 13] = '/';
	X[rHilo + 2][cHilo + 14] = '~';
	X[rHilo + 2][cHilo + 15] = '~';
	X[rHilo + 2][cHilo + 16] = '~';
	X[rHilo + 2][cHilo + 17] = '~';
	X[rHilo + 2][cHilo + 18] = '~';
	X[rHilo + 2][cHilo + 19] = '~';
	X[rHilo + 2][cHilo + 20] = '~';
	X[rHilo + 2][cHilo + 21] = '=';
	X[rHilo + 2][cHilo + 22] = '=';
	X[rHilo + 2][cHilo + 23] = '=';
	X[rHilo + 2][cHilo + 24] = '=';
	X[rHilo + 2][cHilo + 25] = '=';
	X[rHilo + 2][cHilo + 26] = '=';
	X[rHilo + 2][cHilo + 27] = '-';
	X[rHilo + 2][cHilo + 28] = '=';

	X[rHilo + 2][cHilo + 43] = ':';
	X[rHilo + 2][cHilo + 46] = '/';
	X[rHilo + 2][cHilo + 47] = '~';
	X[rHilo + 2][cHilo + 48] = '>';
	X[rHilo + 2][cHilo + 50] = ':';
	X[rHilo + 3][cHilo + 7] = '/';
	X[rHilo + 3][cHilo + 8] = ',';
	X[rHilo + 3][cHilo + 9] = '~';
	X[rHilo + 3][cHilo + 10] = '~';
	X[rHilo + 3][cHilo + 11] = '|';
	X[rHilo + 3][cHilo + 12] = '|';
	X[rHilo + 3][cHilo + 13] = '~';
	X[rHilo + 3][cHilo + 14] = '|';

	X[rHilo + 3][cHilo + 16] = '|';
	X[rHilo + 3][cHilo + 17] = '=';
	X[rHilo + 3][cHilo + 18] = '=';
	X[rHilo + 3][cHilo + 20] = '=';
	X[rHilo + 3][cHilo + 21] = '=';
	X[rHilo + 3][cHilo + 23] = '|';
	X[rHilo + 3][cHilo + 24] = '-';
	X[rHilo + 3][cHilo + 25] = '-';
	X[rHilo + 3][cHilo + 27] = '~';
	X[rHilo + 3][cHilo + 28] = '-';
	X[rHilo + 3][cHilo + 29] = '_';
	X[rHilo + 3][cHilo + 30] = '_';
	X[rHilo + 3][cHilo + 31] = '_';
	X[rHilo + 3][cHilo + 32] = '_';
	X[rHilo + 3][cHilo + 33] = '_';
	X[rHilo + 3][cHilo + 34] = '_';
	X[rHilo + 3][cHilo + 35] = '_';
	X[rHilo + 3][cHilo + 36] = '_';
	X[rHilo + 3][cHilo + 37] = '_';
	X[rHilo + 3][cHilo + 38] = '_';
	X[rHilo + 3][cHilo + 39] = '_';
	X[rHilo + 3][cHilo + 40] = '_';
	X[rHilo + 3][cHilo + 41] = '_';
	X[rHilo + 3][cHilo + 42] = '_';
	X[rHilo + 3][cHilo + 43] = '_';
	X[rHilo + 3][cHilo + 44] = '_';
	X[rHilo + 3][cHilo + 45] = '/';
	X[rHilo + 3][cHilo + 48] = '/';
	X[rHilo + 4][cHilo + 5] = '_';
	X[rHilo + 4][cHilo + 6] = '/';
	X[rHilo + 4][cHilo + 7] = '_';
	X[rHilo + 4][cHilo + 8] = '|';
	X[rHilo + 4][cHilo + 9] = '_';
	X[rHilo + 4][cHilo + 10] = '_';
	X[rHilo + 4][cHilo + 11] = '|';
	X[rHilo + 4][cHilo + 12] = '|';
	X[rHilo + 4][cHilo + 13] = '_';
	X[rHilo + 4][cHilo + 14] = '|';
	X[rHilo + 4][cHilo + 16] = '|';
	X[rHilo + 4][cHilo + 17] = '|';
	X[rHilo + 4][cHilo + 18] = '_';
	X[rHilo + 4][cHilo + 19] = '|';
	X[rHilo + 4][cHilo + 20] = '|';
	X[rHilo + 4][cHilo + 21] = '_';
	X[rHilo + 4][cHilo + 22] = '|';
	X[rHilo + 4][cHilo + 23] = '|';
	X[rHilo + 4][cHilo + 29] = 'U';
	X[rHilo + 4][cHilo + 31] = 'S';
	X[rHilo + 4][cHilo + 33] = 'A';
	X[rHilo + 4][cHilo + 34] = 'R';
	X[rHilo + 4][cHilo + 35] = 'M';
	X[rHilo + 4][cHilo + 36] = 'Y';
	X[rHilo + 4][cHilo + 47] = '<';
	X[rHilo + 5][cHilo + 3] = '(';
	X[rHilo + 5][cHilo + 4] = '-';
	X[rHilo + 5][cHilo + 5] = '+';
	X[rHilo + 5][cHilo + 6] = '|';

	X[rHilo + 5][cHilo + 11] = '|';
	X[rHilo + 5][cHilo + 16] = '|';
	X[rHilo + 5][cHilo + 17] = '_';
	X[rHilo + 5][cHilo + 18] = '_';
	X[rHilo + 5][cHilo + 19] = '_';
	X[rHilo + 5][cHilo + 20] = '_';
	X[rHilo + 5][cHilo + 21] = '_';
	X[rHilo + 5][cHilo + 22] = '_';
	X[rHilo + 5][cHilo + 23] = '|';
	X[rHilo + 5][cHilo + 29] = '_';
	X[rHilo + 5][cHilo + 30] = '_';
	X[rHilo + 5][cHilo + 31] = '_';
	X[rHilo + 5][cHilo + 32] = '-';
	X[rHilo + 5][cHilo + 33] = '-';
	X[rHilo + 5][cHilo + 34] = '-';
	X[rHilo + 5][cHilo + 35] = '-';
	X[rHilo + 5][cHilo + 36] = '-';
	X[rHilo + 5][cHilo + 37] = '`';
	X[rHilo + 5][cHilo + 38] = '`';
	X[rHilo + 5][cHilo + 39] = '`';
	X[rHilo + 5][cHilo + 40] = '`';
	X[rHilo + 5][cHilo + 41] = '`';
	X[rHilo + 5][cHilo + 42] = '`';
	X[rHilo + 5][cHilo + 43] = '`';
	X[rHilo + 5][cHilo + 44] = '\\';
	X[rHilo + 5][cHilo + 45] = '_';
	X[rHilo + 5][cHilo + 46] = '_';
	X[rHilo + 5][cHilo + 47] = '\\';
	X[rHilo + 6][cHilo + 4] = '`';
	X[rHilo + 6][cHilo + 5] = '-';
	X[rHilo + 6][cHilo + 6] = '+';
	X[rHilo + 6][cHilo + 7] = '.';
	X[rHilo + 6][cHilo + 8] = '_';
	X[rHilo + 6][cHilo + 9] = '_';
	X[rHilo + 6][cHilo + 10] = '_';
	X[rHilo + 6][cHilo + 11] = '_';
	X[rHilo + 6][cHilo + 12] = '_';
	X[rHilo + 6][cHilo + 14] = '_';
	X[rHilo + 6][cHilo + 15] = '_';
	X[rHilo + 6][cHilo + 16] = '_';
	X[rHilo + 6][cHilo + 17] = '_';
	X[rHilo + 6][cHilo + 18] = '_';
	X[rHilo + 6][cHilo + 19] = '_';
	X[rHilo + 6][cHilo + 20] = '_';
	X[rHilo + 6][cHilo + 21] = '_';
	X[rHilo + 6][cHilo + 22] = '_';
	X[rHilo + 6][cHilo + 23] = '_';
	X[rHilo + 6][cHilo + 24] = '_';
	X[rHilo + 6][cHilo + 26] = '_';
	X[rHilo + 6][cHilo + 27] = '-';
	X[rHilo + 6][cHilo + 28] = '~';
	X[rHilo + 7][cHilo + 3] = '~';
	X[rHilo + 7][cHilo + 4] = '-';
	X[rHilo + 7][cHilo + 5] = '_';
	X[rHilo + 7][cHilo + 6] = '_';
	X[rHilo + 7][cHilo + 7] = '_';
	X[rHilo + 7][cHilo + 8] = '_';
	X[rHilo + 7][cHilo + 9] = '_';
	X[rHilo + 7][cHilo + 10] = '_';
	X[rHilo + 7][cHilo + 11] = '_';
	X[rHilo + 7][cHilo + 12] = '_';
	X[rHilo + 7][cHilo + 13] = '|';
	X[rHilo + 7][cHilo + 14] = '|';
	X[rHilo + 7][cHilo + 15] = '_';
	X[rHilo + 7][cHilo + 16] = '_';
	X[rHilo + 7][cHilo + 17] = '_';
	X[rHilo + 7][cHilo + 18] = '_';
	X[rHilo + 7][cHilo + 19] = '_';
	X[rHilo + 7][cHilo + 20] = '_';
	X[rHilo + 7][cHilo + 21] = '_';
	X[rHilo + 7][cHilo + 22] = '_';
	X[rHilo + 7][cHilo + 23] = '_';
	X[rHilo + 7][cHilo + 24] = '_';
	X[rHilo + 7][cHilo + 25] = '|';
	X[rHilo + 7][cHilo + 26] = '|';
	X[rHilo + 7][cHilo + 27] = '_';
	X[rHilo + 7][cHilo + 28] = '_';
	X[rHilo + 7][cHilo + 29] = '_';
	X[rHilo + 7][cHilo + 30] = '_';
	X[rHilo + 7][cHilo + 31] = '_';

}
void MoveHilo(int& rHilo, int& cHilo, int& Flagg, int& ct8, int& E, int& QQ)
{
	if (Flagg == 1 && ct8 == 0)
	{
		rHilo--;
		cHilo--;

		if (rHilo == 155)
		{
			Flagg = -1;
		}
	}
	//if (Flagg == -1 && ct8 == 6)
	//{
	//	rHilo--;
	//	cHilo++;
	//
	//	if (rHilo == 155)
	//	{
	//		ct8 = 0;
	//		Flagg = 1;
	//	}
	//}
	//if (Flagg == 1 && ct8 == 5)
	//{
	//	rHilo++;
	//	cHilo++;
	//
	//	if (rHilo == 163)
	//	{
	//		ct8 ++;
	//		Flagg = -1;
	//	}
	//}
	//if (Flagg == -1 && ct8 == 4)
	//{
	//	rHilo--;
	//	cHilo++;
	//
	//	if (rHilo == 155)
	//	{
	//		ct8 ++;
	//		Flagg = 1;
	//	}
	//}
	//if (Flagg == 1 && ct8 == 3)
	//{
	//	
	//	cHilo++;
	//	rHilo++;
	//	if (rHilo == 163)
	//	{
	//		ct8++;
	//		Flagg = -1;
	//	}
	//}
	//if (Flagg == -1&&ct8==2)
	//{
	//	rHilo--;
	//	cHilo--;
	//
	//	if (rHilo == 155)
	//	{
	//		ct8++;
	//
	//		Flagg = 1;
	//	}
	//}
	if (Flagg == 1 && ct8 == 1)
	{
		cHilo++;

		if (cHilo == 40)
		{
			ct8 = 0;
			//E = 1;
			Flagg = -1;
		}
	}

	if (Flagg == -1 && ct8 == 0)
	{
		cHilo--;
		if (cHilo == 10)
		{
			ct8++;

			Flagg = 1;
		}
		if (cHilo == 120)
		{
			E = 1;
			QQ = 1;
		}
	}
}
void DrawParachot(int E, unsigned char X[][2200], int w, int rParachot, int cParachot)
{
	if (E == 1 || w == 0)
	{
		X[rParachot][cParachot] = '_';
		X[rParachot][cParachot + 1] = '_';
		X[rParachot][cParachot + 2] = '_';
		X[rParachot][cParachot + 3] = '_';
		X[rParachot][cParachot + 4] = '_';
		X[rParachot][cParachot + 5] = '_';
		X[rParachot][cParachot + 6] = '_';
		X[rParachot][cParachot + 7] = '_';
		X[rParachot][cParachot + 8] = '_';
		X[rParachot + 1][cParachot - 1] = '/';
		X[rParachot + 1][cParachot + 9] = '\\';
		X[rParachot + 2][cParachot - 2] = '/';
		X[rParachot + 2][cParachot] = '_';
		X[rParachot + 2][cParachot + 4] = '_';
		X[rParachot + 2][cParachot + 8] = '_';
		X[rParachot + 2][cParachot + 10] = '\\';
		X[rParachot + 3][cParachot - 2] = '|';
		X[rParachot + 3][cParachot - 1] = '/';
		X[rParachot + 3][cParachot + 1] = '\\';
		X[rParachot + 3][cParachot + 3] = '/';
		X[rParachot + 3][cParachot + 5] = '\\';
		X[rParachot + 3][cParachot + 7] = '/';
		X[rParachot + 3][cParachot + 9] = '\\';
		X[rParachot + 3][cParachot + 10] = '|';
		X[rParachot + 4][cParachot - 1] = '\\';
		X[rParachot + 4][cParachot + 2] = '|';
		X[rParachot + 4][cParachot + 4] = '_';
		X[rParachot + 4][cParachot + 6] = '|';
		X[rParachot + 4][cParachot + 9] = '/';
		X[rParachot + 5][cParachot] = 'o';
		X[rParachot + 5][cParachot + 2] = '`';
		X[rParachot + 5][cParachot + 3] = '(';
		X[rParachot + 5][cParachot + 4] = '_';
		X[rParachot + 5][cParachot + 5] = '}';
		X[rParachot + 5][cParachot + 6] = ',';
		X[rParachot + 5][cParachot + 8] = 'o';
		X[rParachot + 6][cParachot + 1] = '\\';
		X[rParachot + 6][cParachot + 2] = '/';
		X[rParachot + 6][cParachot + 3] = '.';
		X[rParachot + 6][cParachot + 4] = 'X';
		X[rParachot + 6][cParachot + 5] = '.';
		X[rParachot + 6][cParachot + 6] = '\\';
		X[rParachot + 6][cParachot + 7] = '/';
		X[rParachot + 7][cParachot + 3] = '|';
		X[rParachot + 7][cParachot + 4] = '_';
		X[rParachot + 7][cParachot + 5] = '|';
		X[rParachot + 8][cParachot + 2] = '/';
		X[rParachot + 8][cParachot + 3] = '/';
		X[rParachot + 8][cParachot + 5] = '\\';
		X[rParachot + 8][cParachot + 6] = '\\';
		X[rParachot + 9][cParachot + 2] = '\\';
		X[rParachot + 9][cParachot + 3] = '\\';
		X[rParachot + 9][cParachot + 5] = '/';
		X[rParachot + 9][cParachot + 6] = '/';
		X[rParachot + 10][cParachot + 3] = 'U';
		X[rParachot + 10][cParachot + 5] = 'U';


		//X[172][144] = '_';
		//X[172][156] = '_';
		//X[173][143] = '|';
		//X[173][145] = '|';
		//X[173][155] = '|';
		//X[173][157] = '|';
		//X[174][117] = '_';
		//X[174][119] = '_';
		//X[174][120] = '_';
		//X[174][124] = '_';
		//X[174][125] = '_';
		//X[174][127] = '_';
		//X[174][129] = '_';
		//X[174][131] = '_';
		//X[174][132] = '_';
		//X[174][134] = '_';
		//X[174][135] = '_';
		//X[174][137] = '_';
		//X[174][140] = '_';
		//X[174][141] = '_';
		//X[174][142] = '_';
		//X[174][143] = '|';
		//X[174][145] = '|';
		//X[174][146] = '_';
		//X[174][147] = '_';
		//X[174][150] = '_';
		//X[174][154] = '_';
		//X[174][155] = '|';
		//X[174][157] = '|';
		//X[174][158] = '_';
		//X[174][160] = '_';
		//X[174][161] = '_';
		//X[174][162] = '_';
		//X[175][116] = '|';
		//X[175][118] = ',';
		//	X[175][119] = '_';
		//X[175][121] = '\\';
		//	X[175][123] = '/';
		//X[175][125] = '_';
		//X[175][126] = '`';
		//X[175][128] = '|';
		//X[175][130] = ',';
		//	X[175][131] = '_';
		//X[175][132] = '_';
		//X[175][133] = '/';
		//X[175][135] = '_';
		//X[175][136] = '`';
		//X[175][138] = '|';
		//X[175][139] = '/';
		//X[175][141] = '_';
		//X[175][142] = '_';
		//X[175][143] = '|';
		//X[175][145] = ',';
		//	X[175][146] = '_';
		//X[175][148] = '\\';
		//	X[175][149] = '|';
		//X[175][151] = '|';
		//X[175][153] = '|';
		//X[175][155] = '|';
		//X[175][157] = '_';
		//X[175][158] = '_';
		//X[175][159] = '/';
		//X[175][161] = '_';
		//X[175][163] = '\\';
		//	X[176][116] = '|';
		//X[176][118] = '|';
		//X[176][119] = '_';
		//X[176][120] = ')';
		//X[176][122] = '|';
		//X[176][124] = '(';
		//X[176][125] = '_';
		//X[176][126] = '|';
		//X[176][128] = '|';
		//X[176][130] = '|';
		//X[176][132] = '|';
		//X[176][134] = '(';
		//X[176][135] = '_';
		//X[176][136] = '|';
		//X[176][138] = '|';
		//X[176][140] = '(';
		//X[176][141] = '_';
		//X[176][142] = '_';
		//X[176][143] = '|';
		//X[176][145] = '|';
		//X[176][147] = '|';
		//X[176][149] = '|';
		//X[176][151] = '|';
		//X[176][152] = '_';
		//X[176][153] = '|';
		//X[176][155] = '|';
		//X[176][157] = '|';
		//X[176][158] = '|';
		//X[176][161] = '_';
		//X[176][162] = '_';
		//X[176][163] = '/';
		//X[177][116] = '|';
		//X[177][118] = '.';
		//X[177][119] = '_';
		//X[177][120] = '_';
		//X[177][121] = '/';
		//X[177][123] = '\\';
		//	X[177][124] = '_';
		//X[177][125] = '_';
		//X[177][126] = ',';
		//X[177][127] = '_';
		//X[177][128] = '|';
		//X[177][129] = '_';
		//X[177][130] = '|';
		//X[177][133] = '\\';
		//	X[177][134] = '_';
		//X[177][135] = '_';
		//X[177][136] = ',';
		//X[177][137] = '_';
		//X[177][138] = '|';
		//X[177][139] = '\\';
		//	X[177][140] = '_';
		//X[177][141] = '_';
		//X[177][142] = '_';
		//X[177][143] = '|';
		//X[177][144] = '_';
		//X[177][145] = '|';
		//X[177][147] = '|';
		//X[177][148] = '_';
		//X[177][149] = '|';
		//X[177][150] = '\\';
		//	X[177][151] = '_';
		//X[177][152] = '_';
		//X[177][153] = ',';
		//X[177][154] = '_';
		//X[177][155] = '|';
		//X[177][156] = '\\';
		//	X[177][157] = '_';
		//X[177][158] = '_';
		//X[177][159] = '\\';
		//	X[177][160] = '_';
		//X[177][161] = '_';
		//X[177][162] = '_';
		//X[177][163] = '|';
		//X[178][116] = '|';
		//X[178][118] = '|';
		//X[179][116] = '|';
		//X[179][117] = '_';
		//X[179][118] = '|';
	}


}
void MoveParachot(int& w, int& rParachot, int& cParachot)
{
	if (w == 0)
	{
		cParachot--;
		rParachot++;
		if (rParachot == 188)
		{
			w = -1;
		}
	}
}
void DrawParachot2(int QQ, unsigned char X[][2200], int qq, int rParachot2, int cParachot2)
{
	if (QQ == 1 || qq == 0)
	{
		X[rParachot2][cParachot2] = '_';
		X[rParachot2][cParachot2 + 1] = '_';
		X[rParachot2][cParachot2 + 2] = '_';
		X[rParachot2][cParachot2 + 3] = '_';
		X[rParachot2][cParachot2 + 4] = '_';
		X[rParachot2][cParachot2 + 5] = '_';
		X[rParachot2][cParachot2 + 6] = '_';
		X[rParachot2][cParachot2 + 7] = '_';
		X[rParachot2][cParachot2 + 8] = '_';
		X[rParachot2 + 1][cParachot2 - 1] = '/';
		X[rParachot2 + 1][cParachot2 + 9] = '\\';
		X[rParachot2 + 2][cParachot2 - 2] = '/';
		X[rParachot2 + 2][cParachot2] = '_';
		X[rParachot2 + 2][cParachot2 + 4] = '_';
		X[rParachot2 + 2][cParachot2 + 8] = '_';
		X[rParachot2 + 2][cParachot2 + 10] = '\\';
		X[rParachot2 + 3][cParachot2 - 2] = '|';
		X[rParachot2 + 3][cParachot2 - 1] = '/';
		X[rParachot2 + 3][cParachot2 + 1] = '\\';
		X[rParachot2 + 3][cParachot2 + 3] = '/';
		X[rParachot2 + 3][cParachot2 + 5] = '\\';
		X[rParachot2 + 3][cParachot2 + 7] = '/';
		X[rParachot2 + 3][cParachot2 + 9] = '\\';
		X[rParachot2 + 3][cParachot2 + 10] = '|';
		X[rParachot2 + 4][cParachot2 - 1] = '\\';
		X[rParachot2 + 4][cParachot2 + 2] = '|';
		X[rParachot2 + 4][cParachot2 + 4] = '_';
		X[rParachot2 + 4][cParachot2 + 6] = '|';
		X[rParachot2 + 4][cParachot2 + 9] = '/';
		X[rParachot2 + 5][cParachot2] = 'o';
		X[rParachot2 + 5][cParachot2 + 2] = '`';
		X[rParachot2 + 5][cParachot2 + 3] = '(';
		X[rParachot2 + 5][cParachot2 + 4] = '_';
		X[rParachot2 + 5][cParachot2 + 5] = '}';
		X[rParachot2 + 5][cParachot2 + 6] = ',';
		X[rParachot2 + 5][cParachot2 + 8] = 'o';
		X[rParachot2 + 6][cParachot2 + 1] = '\\';
		X[rParachot2 + 6][cParachot2 + 2] = '/';
		X[rParachot2 + 6][cParachot2 + 3] = '.';
		X[rParachot2 + 6][cParachot2 + 4] = 'X';
		X[rParachot2 + 6][cParachot2 + 5] = '.';
		X[rParachot2 + 6][cParachot2 + 6] = '\\';
		X[rParachot2 + 6][cParachot2 + 7] = '/';
		X[rParachot2 + 7][cParachot2 + 3] = '|';
		X[rParachot2 + 7][cParachot2 + 4] = '_';
		X[rParachot2 + 7][cParachot2 + 5] = '|';
		X[rParachot2 + 8][cParachot2 + 2] = '/';
		X[rParachot2 + 8][cParachot2 + 3] = '/';
		X[rParachot2 + 8][cParachot2 + 5] = '\\';
		X[rParachot2 + 8][cParachot2 + 6] = '\\';
		X[rParachot2 + 9][cParachot2 + 2] = '\\';
		X[rParachot2 + 9][cParachot2 + 3] = '\\';
		X[rParachot2 + 9][cParachot2 + 5] = '/';
		X[rParachot2 + 9][cParachot2 + 6] = '/';
		X[rParachot2 + 10][cParachot2 + 3] = 'U';
		X[rParachot2 + 10][cParachot2 + 5] = 'U';


		//X[172][144] = '_';
		//X[172][156] = '_';
		//X[173][143] = '|';
		//X[173][145] = '|';
		//X[173][155] = '|';
		//X[173][157] = '|';
		//X[174][117] = '_';
		//X[174][119] = '_';
		//X[174][120] = '_';
		//X[174][124] = '_';
		//X[174][125] = '_';
		//X[174][127] = '_';
		//X[174][129] = '_';
		//X[174][131] = '_';
		//X[174][132] = '_';
		//X[174][134] = '_';
		//X[174][135] = '_';
		//X[174][137] = '_';
		//X[174][140] = '_';
		//X[174][141] = '_';
		//X[174][142] = '_';
		//X[174][143] = '|';
		//X[174][145] = '|';
		//X[174][146] = '_';
		//X[174][147] = '_';
		//X[174][150] = '_';
		//X[174][154] = '_';
		//X[174][155] = '|';
		//X[174][157] = '|';
		//X[174][158] = '_';
		//X[174][160] = '_';
		//X[174][161] = '_';
		//X[174][162] = '_';
		//X[175][116] = '|';
		//X[175][118] = ',';
		//	X[175][119] = '_';
		//X[175][121] = '\\';
		//	X[175][123] = '/';
		//X[175][125] = '_';
		//X[175][126] = '`';
		//X[175][128] = '|';
		//X[175][130] = ',';
		//	X[175][131] = '_';
		//X[175][132] = '_';
		//X[175][133] = '/';
		//X[175][135] = '_';
		//X[175][136] = '`';
		//X[175][138] = '|';
		//X[175][139] = '/';
		//X[175][141] = '_';
		//X[175][142] = '_';
		//X[175][143] = '|';
		//X[175][145] = ',';
		//	X[175][146] = '_';
		//X[175][148] = '\\';
		//	X[175][149] = '|';
		//X[175][151] = '|';
		//X[175][153] = '|';
		//X[175][155] = '|';
		//X[175][157] = '_';
		//X[175][158] = '_';
		//X[175][159] = '/';
		//X[175][161] = '_';
		//X[175][163] = '\\';
		//	X[176][116] = '|';
		//X[176][118] = '|';
		//X[176][119] = '_';
		//X[176][120] = ')';
		//X[176][122] = '|';
		//X[176][124] = '(';
		//X[176][125] = '_';
		//X[176][126] = '|';
		//X[176][128] = '|';
		//X[176][130] = '|';
		//X[176][132] = '|';
		//X[176][134] = '(';
		//X[176][135] = '_';
		//X[176][136] = '|';
		//X[176][138] = '|';
		//X[176][140] = '(';
		//X[176][141] = '_';
		//X[176][142] = '_';
		//X[176][143] = '|';
		//X[176][145] = '|';
		//X[176][147] = '|';
		//X[176][149] = '|';
		//X[176][151] = '|';
		//X[176][152] = '_';
		//X[176][153] = '|';
		//X[176][155] = '|';
		//X[176][157] = '|';
		//X[176][158] = '|';
		//X[176][161] = '_';
		//X[176][162] = '_';
		//X[176][163] = '/';
		//X[177][116] = '|';
		//X[177][118] = '.';
		//X[177][119] = '_';
		//X[177][120] = '_';
		//X[177][121] = '/';
		//X[177][123] = '\\';
		//	X[177][124] = '_';
		//X[177][125] = '_';
		//X[177][126] = ',';
		//X[177][127] = '_';
		//X[177][128] = '|';
		//X[177][129] = '_';
		//X[177][130] = '|';
		//X[177][133] = '\\';
		//	X[177][134] = '_';
		//X[177][135] = '_';
		//X[177][136] = ',';
		//X[177][137] = '_';
		//X[177][138] = '|';
		//X[177][139] = '\\';
		//	X[177][140] = '_';
		//X[177][141] = '_';
		//X[177][142] = '_';
		//X[177][143] = '|';
		//X[177][144] = '_';
		//X[177][145] = '|';
		//X[177][147] = '|';
		//X[177][148] = '_';
		//X[177][149] = '|';
		//X[177][150] = '\\';
		//	X[177][151] = '_';
		//X[177][152] = '_';
		//X[177][153] = ',';
		//X[177][154] = '_';
		//X[177][155] = '|';
		//X[177][156] = '\\';
		//	X[177][157] = '_';
		//X[177][158] = '_';
		//X[177][159] = '\\';
		//	X[177][160] = '_';
		//X[177][161] = '_';
		//X[177][162] = '_';
		//X[177][163] = '|';
		//X[178][116] = '|';
		//X[178][118] = '|';
		//X[179][116] = '|';
		//X[179][117] = '_';
		//X[179][118] = '|';
	}


}
void MoveParachot2(int& qq, int& rParachot2, int& cParachot2)
{
	if (qq == 0)
	{
		cParachot2++;
		rParachot2++;
		if (rParachot2 == 188)
		{
			qq = -1;
		}
	}
}
void DrawWa7sh(unsigned char X[][2200], int rWa7sh, int cWa7sh)
{
	X[rWa7sh][cWa7sh] = '_';
	X[rWa7sh][cWa7sh + 1] = '_';
	X[rWa7sh][cWa7sh + 2] = '_';
	X[rWa7sh][cWa7sh + 3] = '_';
	X[rWa7sh][cWa7sh + 4] = '_';
	X[rWa7sh][cWa7sh + 5] = '_';
	X[rWa7sh][cWa7sh + 6] = '_';
	X[rWa7sh][cWa7sh + 7] = '_';
	X[rWa7sh][cWa7sh + 8] = '_';
	X[rWa7sh][cWa7sh + 9] = '_';
	X[rWa7sh][cWa7sh + 10] = '_';
	X[rWa7sh][cWa7sh + 11] = '_';
	X[rWa7sh][cWa7sh + 12] = '_';
	X[rWa7sh][cWa7sh + 13] = '_';
	X[rWa7sh][cWa7sh + 14] = '_';
	X[rWa7sh][cWa7sh + 15] = '_';
	X[rWa7sh][cWa7sh + 16] = '_';

	X[rWa7sh][cWa7sh + 32] = '_';
	X[rWa7sh][cWa7sh + 33] = '_';
	X[rWa7sh][cWa7sh + 34] = '_';
	X[rWa7sh][cWa7sh + 35] = '_';
	X[rWa7sh][cWa7sh + 36] = '_';
	X[rWa7sh][cWa7sh + 37] = '_';
	X[rWa7sh][cWa7sh + 38] = '_';
	X[rWa7sh][cWa7sh + 39] = '_';
	X[rWa7sh][cWa7sh + 40] = '_';
	X[rWa7sh][cWa7sh + 41] = '_';
	X[rWa7sh][cWa7sh + 42] = '_';
	X[rWa7sh][cWa7sh + 43] = '_';
	X[rWa7sh][cWa7sh + 44] = '_';
	X[rWa7sh][cWa7sh + 45] = '_';
	X[rWa7sh][cWa7sh + 46] = '_';
	X[rWa7sh][cWa7sh + 47] = '_';
	X[rWa7sh][cWa7sh + 48] = '_';

	X[rWa7sh + 1][cWa7sh + 1] = '~';
	X[rWa7sh + 1][cWa7sh + 2] = '-';
	X[rWa7sh + 1][cWa7sh + 3] = '.';
	X[rWa7sh + 1][cWa7sh + 18] = '\\';
	X[rWa7sh + 1][cWa7sh + 21] = '|';
	X[rWa7sh + 1][cWa7sh + 22] = '\\';
	X[rWa7sh + 1][cWa7sh + 23] = '_';
	X[rWa7sh + 1][cWa7sh + 24] = '_';
	X[rWa7sh + 1][cWa7sh + 25] = '_';
	X[rWa7sh + 1][cWa7sh + 26] = '/';
	X[rWa7sh + 1][cWa7sh + 27] = '|';

	X[rWa7sh + 1][cWa7sh + 30] = '/';
	X[rWa7sh + 1][cWa7sh + 45] = '.';
	X[rWa7sh + 1][cWa7sh + 46] = '-';
	X[rWa7sh + 1][cWa7sh + 47] = '~';
	X[rWa7sh + 2][cWa7sh + 5] = '~';
	X[rWa7sh + 2][cWa7sh + 6] = '-';
	X[rWa7sh + 2][cWa7sh + 7] = '.';
	X[rWa7sh + 2][cWa7sh + 21] = '\\';
	X[rWa7sh + 2][cWa7sh + 21] = '/';
	X[rWa7sh + 2][cWa7sh + 23] = 'o';
	X[rWa7sh + 2][cWa7sh + 25] = 'o';
	X[rWa7sh + 2][cWa7sh + 27] = '\\';
	X[rWa7sh + 2][cWa7sh + 29] = '/';
	X[rWa7sh + 2][cWa7sh + 41] = '.';
	X[rWa7sh + 2][cWa7sh + 42] = '-';
	X[rWa7sh + 2][cWa7sh + 43] = '~';
	X[rWa7sh + 3][cWa7sh + 8] = '>';
	X[rWa7sh + 3][cWa7sh + 20] = '\\';
	X[rWa7sh + 3][cWa7sh + 21] = '\\';
	X[rWa7sh + 3][cWa7sh + 24] = 'W';
	X[rWa7sh + 3][cWa7sh + 27] = '/';
	X[rWa7sh + 3][cWa7sh + 28] = '/';
	X[rWa7sh + 3][cWa7sh + 40] = '<';
	X[rWa7sh + 4][cWa7sh + 7] = '/';
	X[rWa7sh + 4][cWa7sh + 21] = '/';
	X[rWa7sh + 4][cWa7sh + 22] = '~';
	X[rWa7sh + 4][cWa7sh + 23] = '-';
	X[rWa7sh + 4][cWa7sh + 24] = '-';
	X[rWa7sh + 4][cWa7sh + 25] = '-';
	X[rWa7sh + 4][cWa7sh + 26] = '~';
	X[rWa7sh + 4][cWa7sh + 27] = '\\';
	X[rWa7sh + 4][cWa7sh + 41] = '\\';
	X[rWa7sh + 5][cWa7sh + 6] = '/';
	X[rWa7sh + 5][cWa7sh + 7] = '_';
	X[rWa7sh + 5][cWa7sh + 20] = '|';
	X[rWa7sh + 5][cWa7sh + 28] = '|';
	X[rWa7sh + 5][cWa7sh + 41] = '_';
	X[rWa7sh + 5][cWa7sh + 42] = '\\';
	X[rWa7sh + 6][cWa7sh + 9] = '~';
	X[rWa7sh + 6][cWa7sh + 10] = '-';
	X[rWa7sh + 6][cWa7sh + 11] = '.';
	X[rWa7sh + 6][cWa7sh + 20] = '|';
	X[rWa7sh + 6][cWa7sh + 28] = '|';
	X[rWa7sh + 6][cWa7sh + 37] = '.';
	X[rWa7sh + 6][cWa7sh + 38] = '-';
	X[rWa7sh + 6][cWa7sh + 39] = '~';

	X[rWa7sh + 7][cWa7sh + 12] = ';';
	X[rWa7sh + 7][cWa7sh + 21] = '\\';
	X[rWa7sh + 7][cWa7sh + 27] = '/';
	X[rWa7sh + 7][cWa7sh + 36] = 'i';
	X[rWa7sh + 8][cWa7sh + 11] = '/';
	X[rWa7sh + 8][cWa7sh + 12] = '_';
	X[rWa7sh + 8][cWa7sh + 13] = '_';
	X[rWa7sh + 8][cWa7sh + 14] = '_';
	X[rWa7sh + 8][cWa7sh + 21] = '/';
	X[rWa7sh + 8][cWa7sh + 22] = '\\';
	X[rWa7sh + 8][cWa7sh + 26] = '/';
	X[rWa7sh + 8][cWa7sh + 27] = '\\';
	X[rWa7sh + 8][cWa7sh + 34] = '_';
	X[rWa7sh + 8][cWa7sh + 35] = '_';
	X[rWa7sh + 8][cWa7sh + 36] = '_';
	X[rWa7sh + 8][cWa7sh + 37] = '\\';
	X[rWa7sh + 9][cWa7sh + 16] = '~';
	X[rWa7sh + 9][cWa7sh + 17] = '-';
	X[rWa7sh + 9][cWa7sh + 18] = '.';
	X[rWa7sh + 9][cWa7sh + 20] = '/';
	X[rWa7sh + 9][cWa7sh + 23] = '\\';
	X[rWa7sh + 9][cWa7sh + 24] = '_';
	X[rWa7sh + 9][cWa7sh + 25] = '/';
	X[rWa7sh + 9][cWa7sh + 28] = '\\';
	X[rWa7sh + 9][cWa7sh + 30] = '.';
	X[rWa7sh + 9][cWa7sh + 31] = '-';
	X[rWa7sh + 9][cWa7sh + 32] = '~';
	X[rWa7sh + 10][cWa7sh + 19] = 'V';
	X[rWa7sh + 10][cWa7sh + 29] = 'V';
}
void MoveWa7sh()
{

}
void DrawWorm(unsigned char X[][2200], int& rWorm, int& cWorm)
{
	X[rWorm][cWorm] = 'o';
	X[rWorm][cWorm + 8] = 'o';
	X[rWorm + 1][cWorm + 1] = '\\';
	X[rWorm + 1][cWorm + 2] = '_';
	X[rWorm + 1][cWorm + 3] = '_';
	X[rWorm + 1][cWorm + 4] = '_';
	X[rWorm + 1][cWorm + 5] = '_';
	X[rWorm + 1][cWorm + 6] = '_';
	X[rWorm + 1][cWorm + 7] = '/';

	X[rWorm + 2][cWorm + 1] = '/';
	X[rWorm + 2][cWorm + 2] = '=';
	X[rWorm + 2][cWorm + 3] = 'O';
	X[rWorm + 2][cWorm + 4] = '=';
	X[rWorm + 2][cWorm + 5] = 'O';
	X[rWorm + 2][cWorm + 6] = '=';
	X[rWorm + 2][cWorm + 7] = '\\';

	X[rWorm + 2][cWorm + 13] = '_';
	X[rWorm + 2][cWorm + 14] = '_';
	X[rWorm + 2][cWorm + 15] = '_';
	X[rWorm + 2][cWorm + 16] = '_';
	X[rWorm + 2][cWorm + 17] = '_';
	X[rWorm + 2][cWorm + 18] = '_';
	X[rWorm + 2][cWorm + 19] = '_';

	X[rWorm + 3][cWorm] = '/';
	X[rWorm + 3][cWorm + 4] = '^';
	X[rWorm + 3][cWorm + 8] = '\\';
	X[rWorm + 3][cWorm + 12] = '/';
	X[rWorm + 3][cWorm + 13] = '\\';
	X[rWorm + 3][cWorm + 14] = '\\';
	X[rWorm + 3][cWorm + 15] = '\\';
	X[rWorm + 3][cWorm + 16] = '\\';
	X[rWorm + 3][cWorm + 17] = '\\';
	X[rWorm + 3][cWorm + 18] = '\\';
	X[rWorm + 3][cWorm + 19] = '\\';
	X[rWorm + 3][cWorm + 20] = '\\';

	X[rWorm + 4][cWorm] = '\\';
	X[rWorm + 4][cWorm + 2] = '\\';
	X[rWorm + 4][cWorm + 3] = '_';
	X[rWorm + 4][cWorm + 4] = '_';
	X[rWorm + 4][cWorm + 5] = '_';
	X[rWorm + 4][cWorm + 6] = '/';
	X[rWorm + 4][cWorm + 8] = '/';

	X[rWorm + 4][cWorm + 11] = '/';
	X[rWorm + 4][cWorm + 12] = '\\';
	X[rWorm + 4][cWorm + 16] = '_';
	X[rWorm + 4][cWorm + 17] = '_';
	X[rWorm + 4][cWorm + 18] = '_';
	X[rWorm + 4][cWorm + 21] = '\\';
	X[rWorm + 5][cWorm + 1] = '\\';
	X[rWorm + 5][cWorm + 2] = '_';
	X[rWorm + 5][cWorm + 4] = '<';
	X[rWorm + 5][cWorm + 6] = '_';
	X[rWorm + 5][cWorm + 7] = '/';
	X[rWorm + 5][cWorm + 10] = '/';
	X[rWorm + 5][cWorm + 11] = '\\';
	X[rWorm + 5][cWorm + 15] = '/';
	X[rWorm + 5][cWorm + 16] = '\\';
	X[rWorm + 5][cWorm + 17] = '\\';
	X[rWorm + 5][cWorm + 18] = '\\';
	X[rWorm + 5][cWorm + 19] = '\\';
	X[rWorm + 5][cWorm + 22] = '\\';
	X[rWorm + 6][cWorm + 3] = '\\';
	X[rWorm + 6][cWorm + 6] = '\\';
	X[rWorm + 6][cWorm + 7] = '_';
	X[rWorm + 6][cWorm + 8] = '_';
	X[rWorm + 6][cWorm + 9] = '/';
	X[rWorm + 6][cWorm + 10] = '\\';
	X[rWorm + 6][cWorm + 14] = '/';
	X[rWorm + 6][cWorm + 15] = '\\';
	X[rWorm + 6][cWorm + 17] = '@';
	X[rWorm + 6][cWorm + 18] = '_';
	X[rWorm + 6][cWorm + 19] = '/';
	X[rWorm + 6][cWorm + 22] = '/';
	X[rWorm + 7][cWorm + 4] = '\\';
	X[rWorm + 7][cWorm + 5] = '_';
	X[rWorm + 7][cWorm + 6] = '_';
	X[rWorm + 7][cWorm + 7] = '_';
	X[rWorm + 7][cWorm + 8] = '_';
	X[rWorm + 7][cWorm + 9] = '\\';
	X[rWorm + 7][cWorm + 10] = '_';
	X[rWorm + 7][cWorm + 11] = '_';
	X[rWorm + 7][cWorm + 12] = '_';
	X[rWorm + 7][cWorm + 13] = '_';
	X[rWorm + 7][cWorm + 14] = '\\';
	X[rWorm + 7][cWorm + 15] = '_';
	X[rWorm + 7][cWorm + 16] = '_';
	X[rWorm + 7][cWorm + 17] = '_';
	X[rWorm + 7][cWorm + 18] = '_';
	X[rWorm + 7][cWorm + 19] = '_';
	X[rWorm + 7][cWorm + 20] = '_';
	X[rWorm + 7][cWorm + 21] = '/';
}
void MoveWorm(unsigned char X[][2200], int& rWorm, int& cWorm, int& dirFlag)
{
	if (dirFlag == 1)
	{
		cWorm--;
		if (cWorm == 970)
		{
			dirFlag = -1;
		}
	}
	else
	{
		cWorm++;
		if (cWorm == 990)
		{
			dirFlag = 1;
		}
	}
}
void LaserWorm(unsigned char X[][2200], int& countlaser22, int& rWorm, int& cWorm)
{
	int SR = rWorm + 5; int SC = cWorm + 2;
	if ((countlaser22) % 4 == 0)
	{
		for (int c = SC; c > SC - 15; c--)
		{
			X[SR][c] = '-';
		}

	}
	else
	{

		for (int c = SC; c > SC - 15; c--)
		{
			X[SR][c] = ' ';
		}

	}
	countlaser22++;
}
void DrawDoor(unsigned char X[][2200], int rDoor, int cDoor)
{
	X[rDoor][cDoor + 1] = '_';
	X[rDoor][cDoor + 2] = '_';
	X[rDoor][cDoor + 3] = '_';
	X[rDoor][cDoor + 4] = '_';
	X[rDoor][cDoor + 5] = '_';
	X[rDoor][cDoor + 6] = '_';
	X[rDoor][cDoor + 7] = '_';
	X[rDoor][cDoor + 8] = '_';
	X[rDoor][cDoor + 9] = '_';
	X[rDoor][cDoor + 10] = '_';
	X[rDoor][cDoor + 11] = '_';
	X[rDoor][cDoor + 12] = '_';
	X[rDoor][cDoor + 13] = '_';
	X[rDoor][cDoor + 14] = '_';
	X[rDoor + 1][cDoor] = '|';
	X[rDoor + 1][cDoor + 1] = '\\';
	X[rDoor + 1][cDoor + 3] = '_';
	X[rDoor + 1][cDoor + 4] = '_';
	X[rDoor + 1][cDoor + 5] = '_';
	X[rDoor + 1][cDoor + 6] = '_';
	X[rDoor + 1][cDoor + 7] = '_';
	X[rDoor + 1][cDoor + 8] = '_';
	X[rDoor + 1][cDoor + 9] = '_';
	X[rDoor + 1][cDoor + 10] = '_';
	X[rDoor + 1][cDoor + 11] = '_';
	X[rDoor + 1][cDoor + 12] = '_';
	X[rDoor + 1][cDoor + 13] = '_';
	X[rDoor + 1][cDoor + 15] = '/';
	X[rDoor + 1][cDoor + 16] = '|';
	X[rDoor + 2][cDoor] = '|';
	X[rDoor + 2][cDoor + 2] = '|';
	X[rDoor + 2][cDoor + 5] = '/';
	X[rDoor + 2][cDoor + 6] = '|';
	X[rDoor + 2][cDoor + 7] = ',';
	X[rDoor + 2][cDoor + 8] = '|';
	X[rDoor + 2][cDoor + 10] = '|';
	X[rDoor + 2][cDoor + 14] = '|';
	X[rDoor + 2][cDoor + 16] = '|';
	X[rDoor + 3][cDoor] = '|';
	X[rDoor + 3][cDoor + 2] = '|';
	X[rDoor + 3][cDoor + 4] = '|';
	X[rDoor + 3][cDoor + 5] = ',';
	X[rDoor + 3][cDoor + 6] = 'x';
	X[rDoor + 3][cDoor + 7] = ',';
	X[rDoor + 3][cDoor + 8] = '|';
	X[rDoor + 3][cDoor + 10] = '|';
	X[rDoor + 3][cDoor + 14] = '|';
	X[rDoor + 3][cDoor + 16] = '|';
	X[rDoor + 4][cDoor] = '|';
	X[rDoor + 4][cDoor + 2] = '|';
	X[rDoor + 4][cDoor + 4] = '|';
	X[rDoor + 4][cDoor + 5] = ',';
	X[rDoor + 4][cDoor + 6] = 'x';
	X[rDoor + 4][cDoor + 7] = ',';
	X[rDoor + 4][cDoor + 8] = ',';
	X[rDoor + 4][cDoor + 10] = '|';
	X[rDoor + 4][cDoor + 14] = '|';
	X[rDoor + 4][cDoor + 16] = '|';
	X[rDoor + 5][cDoor] = '|';
	X[rDoor + 5][cDoor + 2] = '|';
	X[rDoor + 5][cDoor + 4] = '|';
	X[rDoor + 5][cDoor + 5] = ',';
	X[rDoor + 5][cDoor + 6] = 'x';
	X[rDoor + 5][cDoor + 10] = ',';
	X[rDoor + 5][cDoor + 14] = '|';
	X[rDoor + 5][cDoor + 16] = '|';
	X[rDoor + 6][cDoor] = '|';
	X[rDoor + 6][cDoor + 2] = '|';
	X[rDoor + 6][cDoor + 4] = '|';
	X[rDoor + 6][cDoor + 5] = '/';
	X[rDoor + 6][cDoor + 10] = '|';
	X[rDoor + 6][cDoor + 14] = '|';
	X[rDoor + 6][cDoor + 16] = '|';
	X[rDoor + 7][cDoor] = '|';
	X[rDoor + 7][cDoor + 2] = '|';
	X[rDoor + 7][cDoor + 7] = '/';
	X[rDoor + 7][cDoor + 8] = ']';
	X[rDoor + 7][cDoor + 10] = ',';
	X[rDoor + 7][cDoor + 14] = '|';
	X[rDoor + 7][cDoor + 16] = '|';
	X[rDoor + 8][cDoor] = '|';
	X[rDoor + 8][cDoor + 2] = '|';
	X[rDoor + 8][cDoor + 6] = '[';
	X[rDoor + 8][cDoor + 7] = '/';
	X[rDoor + 8][cDoor + 9] = '(';
	X[rDoor + 8][cDoor + 10] = ')';
	X[rDoor + 8][cDoor + 14] = '|';
	X[rDoor + 8][cDoor + 16] = '|';
	X[rDoor + 9][cDoor] = '|';
	X[rDoor + 9][cDoor + 2] = '|';
	X[rDoor + 9][cDoor + 10] = '|';
	X[rDoor + 9][cDoor + 14] = '|';
	X[rDoor + 9][cDoor + 16] = '|';
	X[rDoor + 10][cDoor] = '|';
	X[rDoor + 10][cDoor + 2] = '|';
	X[rDoor + 10][cDoor + 10] = '|';
	X[rDoor + 10][cDoor + 14] = '|';
	X[rDoor + 10][cDoor + 16] = '|';
	X[rDoor + 11][cDoor] = '|';
	X[rDoor + 11][cDoor + 2] = '|';
	X[rDoor + 11][cDoor + 10] = '|';
	X[rDoor + 11][cDoor + 14] = '|';
	X[rDoor + 11][cDoor + 16] = '|';
	X[rDoor + 12][cDoor] = '|';
	X[rDoor + 12][cDoor + 2] = '|';
	X[rDoor + 12][cDoor + 9] = ',';
	X[rDoor + 12][cDoor + 10] = ',';
	X[rDoor + 12][cDoor + 14] = '|';
	X[rDoor + 12][cDoor + 16] = '|';
	X[rDoor + 13][cDoor] = '|';
	X[rDoor + 13][cDoor + 2] = '|';
	X[rDoor + 13][cDoor + 6] = ',';
	X[rDoor + 13][cDoor + 7] = ',';
	X[rDoor + 13][cDoor + 14] = '|';
	X[rDoor + 13][cDoor + 16] = '|';
	X[rDoor + 14][cDoor] = '|';
	X[rDoor + 14][cDoor + 1] = '_';
	X[rDoor + 14][cDoor + 2] = '|';
	X[rDoor + 14][cDoor + 3] = ',';
	X[rDoor + 14][cDoor + 4] = ',';
	X[rDoor + 14][cDoor + 5] = '_';
	X[rDoor + 14][cDoor + 6] = '_';
	X[rDoor + 14][cDoor + 7] = '_';
	X[rDoor + 14][cDoor + 8] = '_';
	X[rDoor + 14][cDoor + 9] = '_';
	X[rDoor + 14][cDoor + 10] = '_';
	X[rDoor + 14][cDoor + 11] = '_';
	X[rDoor + 14][cDoor + 12] = '_';
	X[rDoor + 14][cDoor + 13] = '_';
	X[rDoor + 14][cDoor + 14] = '|';
	X[rDoor + 14][cDoor + 15] = '_';
	X[rDoor + 14][cDoor + 6] = '|';
}

void main()
{
	int ffff = 0; int g = 0; int OVER = 0; int fffff = 0;
	int rBulet = 157, cBulet = 10, cBulletM = 10;
	int FBulet = 0;
	int rEL = 195, cEL = 600;
	int rEL2 = 136, cEL2 = 1150;
	int ct = 0; int ff = 0;
	int rH = 173, cH = 10;
	unsigned char X[198][2200];
	int rRocket = 160; int dirFlag = 1;
	int rPlane = 154, cPlane = 120;
	int h = cPlane + 5; int i = 0; int j = 0;
	int f = 0; int cTank = 100; int rTank = 171;
	int fUM = 0; int TTT = 0;
	int rowD = rTank + 4, clmD = cTank + 21;
	int FlagElevetor = 2;
	int FlagElevetor2 = 2;
	int A = 0; int ctB = 0;
	int T = 0; int CT = 0;
	int r = 0; int c = 0; int FBuletM = 0;
	int FE = 0; int z = 0; int p = 0;
	int yr[2000], yc[2000]; int CTM = 0;
	int flag = 0; int ct2 = 0;
	int rSolider = 175; int cSolider = 100;
	int ct3 = 0; int Q = 0;
	int ct4 = 0; int flaglaser = 0;
	int countlaser2 = 0; int rElsbara = 171;
	int cElsbara = 378; int FlagSolider = 0;
	int rFrog = 191; int cFrog = 530;
	int o = 0, e = 0, q = 0, flag2 = 0, ct9 = 0; int ppos = 0;
	int fUP = 0; int alb1 = 0, alb2 = 0, alb3 = 0;
	int rHilo = 188; int cHilo = 180; int Flagg = 1;
	int ct8 = 0; int E = 0; int w = 0; int QQ = 0; int qq = 0;
	int rParachot = 160; int cParachot = 130; int ct99 = 0;
	int rParachot2 = 160; int cParachot2 = 140; int xx = 0;
	int rSolider2 = 175; int cSolider2 = 160; int zz = 0;
	int cWa7sh = 730; int rWa7sh = 95; int zZ = 0; int flaglaserWa7sh = 0;int  ct44 = 0;
	int countlaser22 = 0; int cWorm = 1050; int rWorm = 106;
	int rDoor = 122; int cDoor = 1200; int p3 = 0; int flag3 = 0; int ct33 = 0;


	for (int i = 0; i < 2000; i++)
	{
		yr[i] = 0;
		yc[i] = 0;
	}
	for (;;)
	{
		for (; !_kbhit();)
		{
			DrawMem(X);
			DrawElsbara(X, rElsbara, cElsbara);
			Frog(X, rFrog, cFrog);
			DrawWorm(X, rWorm, cWorm);
			MoveWorm(X, rWorm, cWorm, dirFlag);
			DrawWa7sh(X, rWa7sh, cWa7sh);
			DrawDoor(X, rDoor, cDoor);
			
			DrawElevetor(X, rEL, cEL);
			DrawElevetor2(X, rEL2, cEL2);
			if (FlagElevetor == 2)
			{
				MoveElevetorU(rEL, FlagElevetor);
				if (FE == 0 && q == 0 && p == 0 && p3 == 0)
				{
					for (;;)
					{
						if (X[rH + 23][cH - 1] == ' ' &&
							X[rH + 23][cH] == ' ' &&
							X[rH + 23][cH + 1] == ' ' &&
							X[rH + 23][cH + 2] == ' ' &&
							X[rH + 23][cH + 5] == ' ' &&
							X[rH + 23][cH + 6] == ' ' &&
							X[rH + 23][cH + 7] == ' ' &&
							X[rH + 23][cH + 8] == ' ')
						{
							rH++;
						}
						else
						{
							break;
						}
					}
				}
			}
			if (E == 1 && w == 0)
			{
				DrawParachot(E, X, w, rParachot, cParachot);
				MoveParachot(w, rParachot, cParachot);

			}
			if (QQ == 1 && qq == 0)
			{
				DrawParachot2(QQ, X, qq, rParachot2, cParachot2);
				MoveParachot2(qq, rParachot2, cParachot2);

			}
			if (w == -1 || w == -2)
			{
				DrawSolider(X, rSolider, cSolider, w);

			}
			if (qq == -1 || qq == -2)
			{
				DrawSolider2(X, rSolider2, cSolider2, qq, zz);

			}
			if (FlagElevetor == 1)
			{
				MoveElevetorD(rEL, FlagElevetor);

			}
			if (FlagElevetor2 == 1)
			{

				MoveElevetorL(cEL2, rEL2, FlagElevetor2);


			}
			if (FlagElevetor2 == 5)
			{

				MoveElevetorR(cEL2, rEL2, FlagElevetor2);

			}
			if (FlagElevetor2 == 4)
			{
				MoveElevetorDD(cEL2, rEL2, FlagElevetor2);

			}
			if (FlagElevetor2 == 2)
			{

				MoveElevetorUU(cEL2, rEL2, FlagElevetor2);
				if (FE == 0 && q == 0 && p == 0 && p3 == 0)
				{
					for (;;)
					{
						if (X[rH + 23][cH - 1] == ' ' &&
							X[rH + 23][cH] == ' ' &&
							X[rH + 23][cH + 1] == ' ' &&
							X[rH + 23][cH + 2] == ' ' &&
							X[rH + 23][cH + 5] == ' ' &&
							X[rH + 23][cH + 6] == ' ' &&
							X[rH + 23][cH + 7] == ' ' &&
							X[rH + 23][cH + 8] == ' ')
						{
							rH++;
						}
						else
						{
							break;
						}
					}
				}

			}

			if (p == 1)
			{
				jumping(rH, cH, flag, ct3, p, ppos);

			}
			if (p3 == 1)
			{
				jumping3(rH, cH, flag3, ct33, p3);

			}
			if (q == 1)
			{
				jumping2(rH, cH, flag2, ct9, q);

			}
			DrawHero(X, rH, cH);
			MoveElherElevetor(cEL, cH, rEL, rH, FlagElevetor);
			MoveElherElevetor2(cEL2, cH, rEL2, rH, FlagElevetor2);
			if (FE == 0 && q == 0 && p == 0 && p3 == 0)
			{
				for (;;)
				{
					if (X[rH + 23][cH - 1] == ' ' &&
						X[rH + 23][cH] == ' ' &&
						X[rH + 23][cH + 1] == ' ' &&
						X[rH + 23][cH + 2] == ' ' &&
						X[rH + 23][cH + 5] == ' ' &&
						X[rH + 23][cH + 6] == ' ' &&
						X[rH + 23][cH + 7] == ' ' &&
						X[rH + 23][cH + 8] == ' ')
					{
						rH++;
					}
					else
					{
						break;
					}
				}
			}

			if (o == 1)
			{
				Mosades(X, rH, cH);
			}
			if (e == 1)
			{
				DrawTool(X, rH, cH);
			}
			for (int i = CTM; i <= CTM + 1; i++)
			{
				yr[i] = rH + 12;
				yc[i] = cH + 23;
			}

			if (FBuletM == 1)
			{
				MoveElBulletM(X, yr, yc, CTM, w, ct99);
			}

			//DrawPlane(X, cPlane, rPlane);
			//MovePlane(cPlane, rPlane, dirFlag);
			//DrawRocket(X, rRocket, cPlane, h);
			//MoveRocket(rRocket, cPlane, h);
			DrawHilo(X, rHilo, cHilo);
			MoveHilo(rHilo, cHilo, Flagg, ct8, E, QQ);
			//DrawTank(X, rTank, cTank);
			//MoveTank(cTank, f);
			//MotElheroMnelsabara(cElsbara, cH, rH, X);
			if (FBulet == 1)
			{
				MoveElBullets(cBulet, X, rBulet, zz);
				ctB = 1;
			}

			for (int k = cH - 3; k <= cH + 6; k++)
			{
				if (k >= cEL && k <= cEL + 15)
				{
					CT++;
				}
			}

			if (CT > 0)
			{
				FE = 1;
			}
			else
			{
				FE = 0;
			}
			CT = 0;
			if (cBulet > cH + 200)
				ctB = 0;

			BulletDbaba(X, rTank, cTank, rowD, clmD, ff);
			ProtectEleroMnEltyara(rRocket, rH, h, cH, X, fUM, TTT);
			DrawProtecrMnElTank(X, rH, cH);

			DrawLaser(rH, cH, X, ct4, w);
			if (z == 1)
			{
				if (flaglaser == 0)
				{
					ct4++;
				}
				if (flaglaser == 1)
				{
					ct4--;
				}
				Laser(rH, cH, X, ct4, flaglaser, z);

			}
			Laser2(X, countlaser2);
			LaserWorm(X, countlaser22, rWorm, cWorm);
			if (zZ == 0 || zZ == 1)
			{
				DrawLaserWa7sh(rWa7sh, cWa7sh, X, ct44, w);

				LaserWa7sh(rWa7sh, cWa7sh, X, ct44, flaglaserWa7sh, zZ);
				DrawLaserWa7sh2(rWa7sh, cWa7sh, X, ct44, w);

				LaserWa7sh2(rWa7sh, cWa7sh, X, ct44, flaglaserWa7sh, zZ);
			}

			BulletDbaba(X, rTank, cTank, rowD, clmD, ff);
			
			if (xx == 0)
			{
				
				MoveBulletDbaba(clmD, rowD, X, ct, cTank, A, rTank, ff, xx);
			}

			DrawSolider(X, rSolider, cSolider,w);
			MoveSolider(cSolider, FlagSolider);
			if (fUP == 1)
			{
				DrawProtecrMnElTank(X, rH, cH);
				//if (fUP == 1)
				ProtectElHeroMnElTank(rH, cH, rowD, clmD, X, fUP);
			}

			MotElhero(rH, cH, X, OVER, alb1, alb2, alb3);
			scrolling(rH, cH, X, fffff);
		}

		char key = _getch();
		MoveHero(rH, cH, key, X, ffff);
		if (key == 'Z')
		{

			fUM = 1;
		}
		else if (key == 'X')
		{
			fUM = 0;
		}

		if (ctB == 0)
		{
			if (key == 'B')
			{
				FBulet = 1;
				cBulet = cH; rBulet = rH;
			}
		}
		if (key == 'M')
		{
			FBuletM = 1;
			CTM++;
		}
		if (key == 'J')
		{
			p = 1;

		}
		if (key == 'j')
		{
			p3 = 1;
		}
		if (key == 'G')
		{
			o = 1;
		}
		if (key == 'g')
		{
			o = 0;
		}
		if (key == 'L')
		{
			z = 1;

		}
		if (key == 'R')
		{
			e = 1;
		}
		if (key == 'r')
		{
			e = 0;
		}
		if (key == 'P')
		{
			fUP = 1;
		}
		else if (key == 'p')
		{
			fUP = 0;
		}
		if (key == 'N')
		{
			q = 1;
		}
	}
}
