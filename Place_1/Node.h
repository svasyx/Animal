#pragma once
#include "Header.h"
#include "Animal.h"
#include "Bird.h"
#include "Even_toed.h"
#include "Mammals.h"

class Node
{
    friend class List;
public:
    Animal* Get_data() const;
    // Node(const Node& node);
    ~Node();
private:
    Animal* _data;
    Node* _next;
    Node(Animal* obj);
};
