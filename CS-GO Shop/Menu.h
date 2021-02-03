#pragma once
#include <iostream>
#include <string>
#include "Shop.h"

#define CLEEN system("cls");
#define QUIT system("cls"); system("pause");

using namespace std;

void showMenu()
{
	CLEEN;
	AddSkin skin;
	string action;
	const char* dir = "Students.db";
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
		skin.createTable(dir);
		skin.createDB(dir);
		skin.insertData(dir);
	}
	if (action == "2")
	{
		skin.deleteData(dir);
	}
	if (action == "3")
	{
		skin.updateData(dir);
		skin.selectData(dir);
		skin.updateData(dir);

	}
	if (action == "4")
	{
		QUIT;
	}

}