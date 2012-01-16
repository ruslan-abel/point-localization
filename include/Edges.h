#ifndef EDGES_H
#define EDGES_H

#include "Edge.h"
#include <vector>
#include <utility>
#include <algorithm>

//рёбра
class Edges
{
    public:
        //конструктор
        Edges();
        //добавить ребро
        Edges& add(const Edge&);
        //удалить заданное ребро
        Edges& del(const Edge&);
        //перегрузка оператора индексаации
        Edge& operator[](int);
        //количество рёбер
        const int size();
    private:
        //множество рёбер
        std::vector<Edge> edges;
};

#endif // EDGES_H
