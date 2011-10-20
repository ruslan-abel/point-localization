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
