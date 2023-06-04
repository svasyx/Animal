#pragma once
#include "Animal.h"
class Even_toed :public Animal
{
public:
	Even_toed();
	Even_toed(string name, string clss, float weight, float pop);

	float GetFloat() const override;
	void SetFloat(const float pop) override;

	void Print() override;

	Even_toed* Clone() override;
protected:
	float _population;
};

