#include "vertices.h"
#include <algorithm>

Vertices::Vertices()
{
}

Vertices::Vertices(const std::vector<Point>& p)
{
    v=p;
}

Vertices& Vertices::add(const Point& p)
{
    std::vector<Point>::iterator i=find(v.begin(),v.end(),p);
    if(i==v.end())
        v.push_back(p);
    return *this;
}

Vertices& Vertices::del(const Point& p)
{
    std::vector<Point>::iterator i=find(v.begin(),v.end(),p);
    if(i!=v.end())
        v.erase(i);
    return *this;
}

Point& Vertices::operator[](int a)
{
    if(a<v.size()&&a>=0)
        return v[a];
}

int Vertices::size()
{
    return v.size();
}

void Vertices::sort(const Predicat& a)
{
    std::sort(v.begin(),v.end(),a);
}
