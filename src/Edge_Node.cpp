#include "Edge_Node.h"

Edge_Node::Edge_Node(const int & pr,const int & nx)
{
    prev=pr;
    next=nx;
}

Edge_Node& Edge_Node::set(const int & pr,const int & nx)
{
    prev=pr;
    next=nx;
    return *this;
}

int Edge_Node::get_next()const
{
    return next;
}

int Edge_Node::get_prev()const
{
    return prev;
}

bool Edge_Node::operator==(const Edge_Node& pt)
{
    return (prev==pt.get_prev())&&(next==pt.get_next());
}
