#ifndef EDGE_H
#define EDGE_H

#include <utility>

class Edge
{
    public:
        Edge(const int,const int);
        Edge& change(const int,const int);
    private:
        std::pair<int,int> e;
};

#endif // EDGE_H
