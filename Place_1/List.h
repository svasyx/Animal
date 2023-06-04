#pragma once
#include "Node.h"

class List
{
public:
    List();
    List(Node obj);
    List(const List& lst);

    int GetSize()const;

    void DelList();
    void Print();

    

    Animal*& operator[](const int pos);
    List& operator+(Animal* obj);
    List& operator-(Animal* obj);
    List& operator=(const List& lst);
    bool operator!=(const List& lst);
    ~List();
private:
    void Add(const Node& obj);
    Node* _head;
};

