#ifndef EDGES_H
#define EDGES_H

#include "Edge.h"
#include <vector>
#include <utility>
#include <algorithm>

//рЄбра
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
        //количество рЄбер
        const int size();

        //эмул€ци€ итерации
        std::vector<Edge>::iterator begin();
        std::vector<Edge>::iterator end();

    private:
        //множество рЄбер
        std::vector<Edge> edges;
};

#endif // EDGES_H
