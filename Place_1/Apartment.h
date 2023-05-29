#pragma once
#include "Header.h"
class Apartment
{
public:

	Apartment();
	Apartment(string _address, int _rooms, float _space);
	int GetRooms()const;
	float GetSpace()const;
	string GetAddress()const;
	void SetRooms(const int rooms);
	void SetAddress(const string address);
	void SetSpace(const float space);
	void CheckInt(const int num);


	virtual void SetInt(const int rooms) = 0;
	virtual int GetInt() const = 0;
	virtual void Print() = 0;
	virtual Apartment* Clone() = 0;

	bool Compare(Apartment* obj);


protected:
	string _address;
	int _rooms;
	float _space;

};
