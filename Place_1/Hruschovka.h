#pragma once
#include "Apartment.h"
class Hruschovka : public Apartment
{
public:

	Hruschovka();
	Hruschovka(string address, int rooms, float space, int age);

	int GetInt() const override;
	void SetInt(const int age) override;

	void Print() override;

	Hruschovka* Clone() override;

protected:
	int _age;
};

