#pragma once
#include <iostream>
#include <string>
#include "Shop.h"
#include "Knife.h"
#include "Knife.h"
#include "Gun.h"
#include "Pistols.h"

#define CLEEN system("cls");
#define QUIT system("cls"); system("pause");

using namespace std;

void showMenu();

void User()
{
	int action;

	do
	{
		cout << "_______USER MENU_______" << endl;
		cout << "| 1. Show all skin    |" << endl;
		cout << "-----------------------" << endl;
		cout << "| 2. Buy skin         |" << endl;
		cout << "-----------------------" << endl;
		cout << "| 3. Show my basket   |" << endl;
		cout << "-----------------------" << endl;
		cout << endl;
		cout << "Enter action : "; cin >> action;
		switch (action)
		{
		case 1:
		{
			string type;
			cout << "Enter type skin : "; cin >> type;
			if (type == "Knife" || type == "knife")
			{
				Knife k;
				k.showSkin();
			}
			else if (type == "Gun" || type == "gun")
			{
				Gun g;
				g.showSkin();
			}
			else if (type == "Pistol" || type == "Pistols" || type == "pistol" || type == "pistols")
			{
				Pistols p;
				p.showSkin();
			}
		}break;
		case 2:
		{
			string type;
			cout << "Enter type skin : "; cin >> type;
			if (type == "Knife" || type == "knife")
			{
				Knife k;
				k.buySkin();
			}
			else if (type == "Gun" || type == "gun")
			{
				Gun g;
				g.buySkin();
			}
			else if (type == "Pistol" || type == "Pistols" || type == "pistol" || type == "pistols")
			{
				Pistols p;
				p.buySkin();
			}
		}break;
		case 3:
		{

		}break;
		}
	} while (action != 3);

}

void Admin()
{
	string action;

	do
	{
		cout << " ------------------------" << endl;
		cout << "| 1. Add skin in db      |" << endl;
		cout << " ------------------------" << endl;
		cout << "| 2. Delete product      |" << endl;
		cout << " ------------------------" << endl;
		cout << "| 3. Show all product    |" << endl;
		cout << " ------------------------" << endl;
		cout << "| 0. Exit                |" << endl;
		cout << " ------------------------" << endl;
		cout << "Enter action : ";
		cin >> action;
		if (action == "1")
		{
			string type;
			cout << "Enter type skin : "; cin >> type;
			if (type == "Knife" || type == "knife")
			{
				Knife k;
				k.input();
			}
			else if (type == "Gun" || type == "gun")
			{
				Gun g;
				g.input();
			}
			else if (type == "Pistol" || type == "Pistols" || type == "pistol" || type == "pistols")
			{
				Pistols p;
				p.input();
			}
		}
		else if (action == "2")
		{
			string type;
			cout << "Enter type skin : "; cin >> type;
			if (type == "Knife" || type == "knife")
			{
				Knife k;
				k.buySkin();
			}
			else if (type == "Gun" || type == "gun")
			{
				Gun g;
				g.buySkin();
			}
			else if (type == "Pistol" || type == "Pistols" || type == "pistol" || type == "pistols")
			{
				Pistols p;
				p.buySkin();
			}
		}
		else if (action == "3")
		{
			string type;
			cout << "Enter type skin : "; cin >> type;
			if (type == "Knife" || type == "knife")
			{
				Knife k;
				k.showSkin();
			}
			else if (type == "Gun" || type == "gun")
			{
				Gun g;
				g.showSkin();
			}
			else if (type == "Pistol" || type == "Pistols" || type == "pistol" || type == "pistols")
			{
				Pistols p;
				p.showSkin();
			}
		}
		else if (action == "0")
		{
			QUIT;
		}
	} while (true);
}

void quest()
{
	int action;
	do
	{
		CLEEN;
		cout << "1. Admin Panel" << endl;
		cout << "2. User Panel" << endl;
		cout << "3. EXIT" << endl;
		cout << endl;
		cin >> action;
		switch (action)
		{
		case 1:
		{
			Admin();
		}break;
		case 2:
		{
			User();
		}
		case 3:
		{
			CLEEN;
		}
		}
	} while (action != 3);
	CLEEN;
}

void showMenu()
{
	CLEEN;
	quest();
}