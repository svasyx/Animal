#include "Apartment.h"
#include "List.h"
#include "Header.h"
#include "Hruschovka.h"
#include "Modern.h"
#include "PentHouse.h"



int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
 
    Modern obj("MPI", 1 , 2, 3);

    Apartment** apart = new Apartment * []
    {
            new Modern("MPI_1", 1, 150000, 121),
            new PentHouse("PP1", 2, 200, 22),
            new Hruschovka("HPI", 3, 30000000, 20),
            new Modern("MPI_2", 4, 150000, 121)

    };

    List list;
    list + apart[0];
    list + apart[1];
    list + apart[2];
    list + apart[3];
    list + &obj;

    cout << "-----------------------------------" << endl;
    cout << endl;

    list.Print();
    cout << "-----------------------------------" << endl;
    cout << endl;
    list - apart[2];
    list - &obj;

    cout <<"-----------------------------------" << endl;
    cout << endl;

    list.Print();
    cout << "-----------------------------------" << endl;
    cout << endl;
    return 0;
}

