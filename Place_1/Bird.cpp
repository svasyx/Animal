
#include "Bird.h"

Bird::Bird()
{
    _kmperDay = 0;
}

Bird::Bird(string name, string clss, float weight, float kmperDay) : Animal(name, clss, weight)
{
    _kmperDay = kmperDay;
}

float Bird::GetFloat() const
{
    return _kmperDay;
}

void Bird::SetFloat(const float kmperDay)
{
    _kmperDay = kmperDay;
}

void Bird::Print()
{
    cout << typeid(*this).name() << endl;
    cout << " Address: " << _name << endl;
    cout << " Rooms: " << _clss << endl;
    cout << " Space: " << _weight << endl;
    cout << " KmPerDay: " << _kmperDay << endl;
}

Bird* Bird::Clone()
{
    Bird* copied = new Bird(_name, _clss, _weight, _kmperDay);

    return copied;
}
