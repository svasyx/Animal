#include "Even_toed.h"

Even_toed::Even_toed()
{
    _population = 0;
}

Even_toed::Even_toed(string name, string clss, float weight, float pop) : Animal(name, clss, weight)
{
    _population = pop;
}

float Even_toed::GetFloat() const
{
    return _population;
}

void Even_toed::SetFloat(const float pop)
{
    _population = pop;
}

void Even_toed::Print()
{
    cout << typeid(*this).name() << endl;
    cout << " Address: " << _name << endl;
    cout << " Rooms: " << _clss << endl;
    cout << " Space: " << _weight << endl;
    cout << " Population: " << _population << endl;
}

Even_toed* Even_toed::Clone()
{
    Even_toed* copied = new Even_toed(_name, _clss, _weight, _population);

    return copied;
}
