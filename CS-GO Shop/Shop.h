#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

__interface Skin
{
	virtual void input() = 0;
	virtual void setTypeSkin(const string& type) = 0;
	virtual void setRareSkin(const string& rare) = 0;
	virtual void setPriceSkin(const string& price) = 0;
	virtual void print() const = 0;
	virtual void showSkin() = 0;
	virtual void buySkin() = 0;
};

//class Skin
//{
//public:
//	AddSkin()
//	{
//
//	}
//private:
//};