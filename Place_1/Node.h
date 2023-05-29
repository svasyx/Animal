#pragma once
#include "Header.h"
#include "Apartment.h"
#include "Modern.h"
#include "PentHouse.h"
#include "Hruschovka.h"

class Node
{
    friend class List;
public:
    Apartment* Get_data() const;
    // Node(const Node& node);
    ~Node();
private:
    Apartment* _data;
    Node* _next;
    Node(Apartment* obj);
};
