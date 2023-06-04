#include "Mammals.h"

Mammals::Mammals()
{
    _size = 0;
}

Mammals::Mammals(string name, string clss, float weight, float size) : Animal(name, clss, weight)
{
    _size = size;
}

float Mammals::GetFloat() const
{
    return _size;
}

void Mammals::SetFloat(const float size)
{
    _size = size;
}

void Mammals::Print()
{
    cout << typeid(*this).name() << endl;
    cout << " Adress: " << _name << endl;
    cout << " Rooms: " << _clss << endl;
    cout << " Space: " << _weight << endl;
    cout << " Size: " << _size << endl;
}

Mammals* Mammals::Clone()
{
    Mammals* copied = new Mammals(_name, _clss, _weight, _size);

    return copied;
}

