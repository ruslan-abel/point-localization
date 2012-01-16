#include "Edges.h"

Edges::Edges()
{
}

Edges& Edges::add(const Edge& e)
{
    std::vector<Edge>::iterator i=std::find(edges.begin(),edges.end(),e);
    if(i==edges.end())
        edges.push_back(e);
    return *this;
}

Edges& Edges::del(const Edge& e)
{
    std::vector<Edge>::iterator i=std::find(edges.begin(),edges.end(),e);
    if(i!=edges.end())
        edges.erase(i);
    return *this;
}

const int Edges::size()
{
    return edges.size();
}

Edge& Edges::operator[](int a)
{
     if(a<edges.size()&&a>=0)
        return edges[a];
}

std::vector<Edge>::iterator Edges::begin()
{
    return edges.begin();
}

std::vector<Edge>::iterator Edges::end()
{
    return edges.end();
}
