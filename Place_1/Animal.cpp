#include "Animal.h"

Animal::Animal()
{
    _name = "name";
    _clss = "1";
    _weight = 0;
}

Animal::Animal(string name, string clss, float weight)
{
    _clss = clss;
    _name = name;
    _weight = weight;
}

string Animal::GetClss() const
{
    return _clss;
}

float Animal::GetWeight() const
{
    return _weight;
}

string Animal::GetName() const
{
    return _name;
}

bool Animal::Compare(Animal* obj)
{
    if (_name == obj->GetName() && _clss == obj->GetClss() && _weight == obj->GetWeight() && GetFloat() == obj->GetFloat())
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Animal::SetSpace(const float space)
{
   
    _weight = space;
}

void Animal::SetClss(const string clss)
{
   
    _clss = clss;
}

void Animal::SetAddress(const string address)
{
    _name = address;
}

