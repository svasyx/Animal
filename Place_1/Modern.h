#pragma once
#include "Apartment.h"
class Modern :public Apartment
{
public:
	Modern();
	Modern(string address, int rooms, float space, int floor);

	int GetInt() const override;
	void SetInt(const int num) override;

	void Print() override;

	Modern* Clone() override;
protected:
	int _floor;
};

