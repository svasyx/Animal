#include "Animal.h"
#include "List.h"
#include "Header.h"
#include "Bird.h"
#include "Even_toed.h"
#include "Mammals.h"



int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
 
    Mammals obj("Elephant", "mammals", 1200, 116.1);

    Animal** animals = new Animal * []
    {
            new Bird("Eagle", "eagles", 12, 0.2),
            new Mammals("Kyt2", "mammals", 1223, 123.1),
            new Even_toed("Horse", "horsee", 123, 12.1),
            new Mammals("Kyt", "mammals", 12333, 11123.1)

    };

    List list;
    list + animals[0];
    list + animals[1];
    list + animals[2];
    list + animals[3];
    list + &obj;

    cout << "-----------------------------------" << endl;
    cout << endl;

    list.Print();
    cout << "-----------------------------------" << endl;
    cout << endl;
    list - animals[2];
    list - &obj;

    cout <<"-----------------------------------" << endl;
    cout << endl;

    list.Print();
    cout << "-----------------------------------" << endl;
    cout << endl;
    return 0;
}

