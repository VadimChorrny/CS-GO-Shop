#include "Knife.h"

void Knife::input()
{
	ofstream out;
	out.open("knife.csv");
	cout << "Enter type knife : "; cin >> type_;
	out << type_ << endl;

	cout << endl;

	cout << "Enter rare knife : "; cin >> rare_;
	out << rare_ << endl;

	cout << endl;

	cout << "Enter price knife : "; cin >> price_;
	out << price_ << endl;

	cout << endl;

	print();
}

void Knife::showSkin()
{
	string line;
	ifstream myfile("knife.csv");
	if (myfile.is_open())
	{
		while (!myfile.eof())
		{
			getline(myfile, line);
			cout << line << endl;
		}
	}
	myfile.close();
}

void Knife::buySkin()
{
	ofstream f("knife.csv");
	f.open("knife.csv", ofstream::binary | ofstream::out | ofstream::in);
	f.seekp(1);
	f.close();
}

void Knife::setTypeSkin(const string& type)
{
	if (!type.empty())
		this->type_ = type;
	else
		cerr << "error with type knife!" << endl;
}

void Knife::setRareSkin(const string& rare)
{
	if (!rare.empty())
		this->rare_ = rare;
	else
		cerr << "error with rare knife!" << endl;
}

void Knife::setPriceSkin(const string& price)
{
	if (!price.empty())
		this->price_ = price;
	else
		cerr << "error with price knife!" << endl;
}

void Knife::print() const
{
	system("cls");
	cout << "~~~~~~~~KNIFE PRINT~~~~~~~" << endl;
	cout << "Type knife : " << type_ << endl;
	cout << "Rare knife : " << rare_ << endl;
	cout << "Price knife : " << price_ << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}
