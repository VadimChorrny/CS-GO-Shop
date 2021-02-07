#pragma once
#include "Shop.h"

class Knife : public Skin
{
public:
	Knife(const string& type,const string& rare,const string& price)
	{
		setTypeSkin(type);
		setRareSkin(rare);
		setPriceSkin(price);
	}
	void input() override;
	void showSkin() override;
	void buySkin() override;
	void setTypeSkin(const string& type) override;
	void setRareSkin(const string& rare) override;
	void setPriceSkin(const string& price) override;
	void print() const override;
private:
	string type_;
	string rare_;
	string price_;
};

