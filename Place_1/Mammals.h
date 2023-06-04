#pragma once
#include "Animal.h"
class Mammals :public Animal
{
public:
	Mammals();
	Mammals(string name, string clss, float weight, float size);

	float GetFloat() const override;
	void SetFloat(const float size) override;

	void Print() override;

	Mammals* Clone() override;
protected:
	float _size;
};

