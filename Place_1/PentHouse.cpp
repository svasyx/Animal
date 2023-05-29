#include "PentHouse.h"

PentHouse::PentHouse()
{
    _price = 0;
}

PentHouse::PentHouse(string address, int rooms, float space, int price) : Apartment(address, rooms, space)
{
    CheckInt(price);
    _price = price;
}

int PentHouse::GetInt() const
{
    return _price;
}

void PentHouse::SetInt(const int price)
{
    CheckInt(price);
    _price = price;
}

void PentHouse::Print()
{
    cout << typeid(*this).name() << endl;
    cout << " Adress: " << _address << endl;
    cout << " Rooms: " << _rooms << endl;
    cout << " Space: " << _space << endl;
    cout << " Price: " << _price << endl;
}

PentHouse* PentHouse::Clone()
{
    PentHouse* copied = new PentHouse(_address, _rooms, _space, _price);

    return copied;
}

