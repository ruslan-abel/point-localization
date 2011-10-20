#include "vertices.h"
#include <algorithm>
#include <functional>

using std::sort;
using std::find;


Vertices::Vertices()
{
}

Vertices& Vertices::add(const Point& p)
{
    vector<Point>::iterator i=find(v.begin(),v.end(),p);
    if(i==v.end())
        v.push_back(p);
    return *this;
}

Vertices& Vertices::del(const Point& p)
{
    vector<Point>::iterator i=find(v.begin(),v.end(),p);
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

void Vertices::sort_v()
{
    sort(v.begin(),v.end(),Less());
}

Vertices::~Vertices()
{
}
