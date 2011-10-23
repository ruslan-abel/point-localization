#ifndef EDGE_LIST_H
#define EDGE_LIST_H

#include "Edge.h"
#include "Edge_Node.h"

#include <vector>


class Edge_List
{
    public:
        Edge_List();
        Edge_List& add(const Edge_Node&);
        Edge_List& del(const Edge_Node&);
        Edge_List& clear();
        Edge_Node&operator[](int);
        int size();
    private:
        std::vector<Edge_Node> list;
};

#endif // EDGE_LIST_H
