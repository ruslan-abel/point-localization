#include "Edge_List.h"
#include<algorithm>

Edge_List::Edge_List()
{
}

Edge_List& Edge_List::add(const Edge_Node& p)
{
    std::vector<Edge_Node>::iterator i=std::find(list.begin(),list.end(),p);
    if(i==list.end())
    {
        list.push_back(p);
    }
    return *this;
}

Edge_List& Edge_List::del(const Edge_Node& p)
{
    std::vector<Edge_Node>::iterator i=std::find(list.begin(),list.end(),p);
    if(i!=list.end())
        list.erase(i);
    return *this;
}

Edge_List& Edge_List::clear()
{
    list.clear();
    return *this;
}

Edge_Node& Edge_List::operator[](int a)
{
    if(a>=0&&a<list.size())
        return list[a];
}

int Edge_List::size()
{
    return list.size();
}
