#include "Node.h"

Apartment* Node::Get_data() const
{
    return _data;
}

//Node::Node(const Node& node)
//{
//    _data = node.Get_data()->Clone();
//    _next = node._next;
//}

Node::~Node()
{
    delete _data;
}

Node::Node(Apartment* obj)
{
    _data = obj->Clone();

    this->_next = nullptr;
}
