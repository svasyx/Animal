#include "Modern.h"

Modern::Modern()
{
    _floor = 0;
}

Modern::Modern(string address, int rooms, float space, int floor) : Apartment(address, rooms, space)
{
    CheckInt(floor);
    _floor = floor;
}

int Modern::GetInt() const
{
    return _floor;
}

void Modern::SetInt(const int floor)
{
    CheckInt(floor);
    _floor = floor;
}

void Modern::Print()
{
    cout << typeid(*this).name() << endl;
    cout << " Address: " << _address << endl;
    cout << " Rooms: " << _rooms << endl;
    cout << " Space: " << _space << endl;
    cout << " Floor: " << _floor << endl;
}

Modern* Modern::Clone()
{
    Modern* copied = new Modern(_address, _rooms, _space, _floor);

    return copied;
}
