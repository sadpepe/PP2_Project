/*
File: main.c
Description:
14/04/2017 - This file will be the playground for a while.
------------//---------------//------------//---------------//------------//---------------
Name: Pedro Silva
Email: pmiguelfs@gmail.com
Date Log:
------------//---------------//------------//---------------//------------//---------------
Name: Diogo Portela
Email:
Date Log:
*/

#include "estructs.h"

int main(void)
{
	//Important variables.
	Master GameMaster;
	char DrawingTable[MAX_HEIGHT][MAX_WIDTH];

	LoadMaster(&GameMaster);

	int aux = Menu();
	CardPtr database = CreateDatabase();
	//AddCards(*database);

	return 0;
}