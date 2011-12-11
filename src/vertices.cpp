#include "vertices.h"
#include <algorithm>
#include <iostream>

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
    {
        v.push_back(p);
    }
    return *this;
}

Vertices& Vertices::del(const Point& p)
{
    std::vector<Point>::iterator i=find(v.begin(),v.end(),p);
    if(i!=v.end())
        v.erase(i);
    return *this;
}

Point& Vertices::vert(int a)
{
    for(int i=0;i<v.size();i++)
    {
        if(v[i].get_num()==a)
            return v[i];
    }
}

Point& Vertices::operator[](int a)
{
    if(a>=0&&a<size())
    {
        return v[a];
    };
}

int Vertices::size()
{
    return v.size();
}

void Vertices::sort(const Predicat& a)
{
    std::sort(v.begin(),v.end(),a);
}
