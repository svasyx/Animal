#pragma once
#include "Animal.h"
class Bird : public Animal
{
public:

	Bird();
	Bird(string name, string clss, float weight, float _kmperDay);

	float GetFloat() const override;
	void SetFloat(const float _kmperDay) override;

	void Print() override;

	Bird* Clone() override;

protected:
	float _kmperDay;
};

