#pragma once
#include <iostream>
#include <string>
#include "Shop.h"
#include "Knife.h"

#define CLEEN system("cls");
#define QUIT system("cls"); system("pause");

using namespace std;

void showMenu()
{
	CLEEN;
	Knife k("Kerambit","Ultra-rar","100$");
	string action;
	cout << " ------------------------" << endl;
	cout << "| 1. Add product in db   |" << endl;
	cout << " ------------------------" << endl;
	cout << "| 2. Delete product      |" << endl;
	cout << " ------------------------" << endl;
	cout << "| 3. Show all product    |" << endl;
	cout << " ------------------------" << endl;
	cout << "| 4. Exit                |" << endl;
	cout << " ------------------------" << endl;
	cout << "Enter action : ";
	getline(cin, action);
	if (action == "1")
	{
		k.input();
	}
	if (action == "2")
	{
		k.buySkin();
	}
	if (action == "3")
	{
		k.showSkin();
	}
	if (action == "4")
	{
		QUIT;
	}

}