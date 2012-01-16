#ifndef EDGE_LIST_H
#define EDGE_LIST_H

#include "Edge.h"
#include "Edge_Node.h"

//для использования вектора как множества
#include <vector>

//класс реализации РСДС
class Edge_List
{
    public:
        //конструктор
        Edge_List();
        //добавить рёберный узел
        Edge_List& add(const Edge_Node&);
        //удалить рёберный узел
        Edge_List& del(const Edge_Node&);
        //очистка РСДС
        Edge_List& clear();
        //перегрузка оператора индексации
        Edge_Node&operator[](int);
        //количество узлов
        const int size();
    private:
        //список рёберых узлов
        std::vector<Edge_Node> list;
};

#endif // EDGE_LIST_H
