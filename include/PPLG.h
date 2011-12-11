#ifndef PPLG_H
#define PPLG_H

#include <map>
#include <vector>
#include <cmath>
#include <iostream>
#include "Point.h"
#include "vertices.h"
#include "Edges.h"
#include "Edge_List.h"

class PPLG
{
    public:
        PPLG(const Vertices&,const Edges&);
        int create_rsds(void);
        PPLG& set_vertices(const Vertices&);
        PPLG& set_edges(const Edges&);
        void print_verticies();
        void print_edges();
        void print_rsds();
        int calc_first(const int& cur);
        int calc_second(const int& cur);
        double angle(const Point&,const Point&,const Point&,const Point&) const;

        Vertices& getVertices(); // ссылку на объект Vertices надо бы возвращать константной.
                                    //Но так как Vertices::sort() пока не const, то нельзя
    private:
        Vertices v;
        Edges e;
        Edge_List rsds;
        int status;
};

#endif // PPLG_H
