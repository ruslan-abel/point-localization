#ifndef EDGE_H
#define EDGE_H

#include <utility>  //для использования пар

//класс представления ребра
class Edge
{
    public:
        //конструктор
        Edge(const int,const int);
        //изменение ребра
        Edge& change(const int,const int);
        //получить начало ребра (ID точки)
        int get_first() const;
        //получить конец ребра (ID точки)
        int get_second() const;
        //операции сравнения рёбер
        bool operator==(const Edge&);
    private:
        //пара ID точек для ребра
        std::pair<int,int> e;
};

#endif // EDGE_H
