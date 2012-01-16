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
        //конструктор
        PPLG(const Vertices&,const Edges&);
        //построить РСДС
        int create_rsds(void);
        PPLG& set_vertices(const Vertices&);
        PPLG& set_edges(const Edges&);
        //вывод отладочной информации
        void print_verticies();
        void print_edges();
        void print_rsds();

        int calc_first(const int& cur);
        int calc_second(const int& cur);
        //вычисление угла между рёбрами
        double angle(const Point&,const Point&,const Point&,const Point&) const;

        Vertices& getVertices(); // ссылку на объект Vertices надо бы возвращать константной.
                                    //Но так как Vertices::sort() пока не const, то нельзя
    private:
        //множество вершин
        Vertices v;
        //множество рёбер
        Edges e;
        //РСДС
        Edge_List rsds;
        //переменная статуса (ППЛГ и.п.)
        int status;
};

#endif // PPLG_H
