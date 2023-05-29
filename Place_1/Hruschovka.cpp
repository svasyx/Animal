
#include "Hruschovka.h"

Hruschovka::Hruschovka()
{
    _age = 0;
}

Hruschovka::Hruschovka(string address, int rooms, float space, int age) : Apartment(address, rooms, space)
{
    CheckInt(age);
    _age = age;
}

int Hruschovka::GetInt() const
{
    return _age;
}

void Hruschovka::SetInt(const int age)
{
    CheckInt(age);
    _age = age;
}

void Hruschovka::Print()
{
    cout << typeid(*this).name() << endl;
    cout << " Address: " << _address << endl;
    cout << " Rooms: " << _rooms << endl;
    cout << " Space: " << _space << endl;
    cout << " Age: " << _age << endl;
}

Hruschovka* Hruschovka::Clone()
{
    Hruschovka* copied = new Hruschovka(_address, _rooms, _space, _age);

    return copied;
}
