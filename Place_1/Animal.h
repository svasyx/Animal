#pragma once
#include "Header.h"
class Animal
{
public:

	Animal();
	Animal(string _name, string _clss, float _weight);
	string GetClss()const;
	float GetWeight()const;
	string GetName()const;
	void SetClss(const string _clss);
	void SetAddress(const string _name);
	void SetSpace(const float _weight);


	virtual void SetFloat(const float weight) = 0;
	virtual float GetFloat() const = 0;
	virtual void Print() = 0;
	virtual Animal* Clone() = 0;

	bool Compare(Animal* obj);


protected:
	string _name;
	string _clss;
	float _weight;

};
