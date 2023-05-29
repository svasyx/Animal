#include "Apartment.h"

Apartment::Apartment()
{
    _address = "name";
    _rooms = 1;
    _space = 0;
}

Apartment::Apartment(string address, int rooms, float space)
{
    CheckInt(rooms);
    _rooms = rooms;
    _address = address;
    _space = space;
}

int Apartment::GetRooms() const
{
    return _rooms;
}

float Apartment::GetSpace() const
{
    return _space;
}

string Apartment::GetAddress() const
{
    return _address;
}

bool Apartment::Compare(Apartment* obj)
{
    if (_address == obj->GetAddress() && _rooms == obj->GetRooms() && _space == obj->GetSpace() && GetInt() == obj->GetInt())
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Apartment::SetSpace(const float space)
{
   
    _space = space;
}

void Apartment::SetRooms(const int Rooms)
{
    CheckInt(Rooms);
    _rooms = Rooms;
}

void Apartment::SetAddress(const string address)
{
    _address = address;
}

void Apartment::CheckInt(const int num)
{
    if (num < 0)
    {
        cout << "Bad" << endl;
        exit(0);
    }
}

