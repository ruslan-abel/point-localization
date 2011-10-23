#ifndef EDGES_H
#define EDGES_H

#include "Edge.h"
#include <vector>
#include <utility>
#include <algorithm>


class Edges
{
    public:
        Edges();
        Edges& add(const Edge&);
        Edges& del(const Edge&);
        Edge& operator[](int);
        int size();
    protected:
    private:
        std::vector<Edge> edges;
};

#endif // EDGES_H
