#ifndef EDGE_H
#define EDGE_H

#include <utility>

class Edge
{
    public:
        Edge(const int,const int);
        Edge& change(const int,const int);
        int get_first() const;
        int get_second() const;
        bool operator==(const Edge&);
    private:
        std::pair<int,int> e;
};

#endif // EDGE_H
