#pragma once
#include "Apartment.h"
class PentHouse :public Apartment
{
public:
	PentHouse();
	PentHouse(string address, int rooms, float space, int price);

	int GetInt() const override;
	void SetInt(const int buildings) override;

	void Print() override;

	PentHouse* Clone() override;
protected:
	int _price;
};

