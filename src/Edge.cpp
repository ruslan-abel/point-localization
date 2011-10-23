#include "Edge.h"

Edge::Edge(const int a,const int b)
{
    e.first=a;
    e.second=b;
}

Edge& Edge::change(const int a,const int b)
{
    e.first=a;
    e.second=b;
    return *this;
}

int Edge::get_first() const
{
    return e.first;
}

int Edge::get_second() const
{
    return e.second;
}

bool Edge::operator==(const Edge& p)
{
    return (e.first==p.get_first())&&(e.second==p.get_second());
}
