#include "vertices.h"
#include <algorithm>
#include <functional>

using std::sort;
using std::find;
using std::less;


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

void Vertices::sort()
{
    //sort(v.begin(),v.end(),less<Point>());
}

Vertices::~Vertices()
{
}
