#ifndef EDGE_NODE_H_INCLUDED
#define EDGE_NODE_H_INCLUDED

//основная структура РСДС - рёберный узел
class Edge_Node
{
    public:
        //конструктор
        Edge_Node(const int&,const int&);
        //изменить состояние узла
        Edge_Node& set(const int &,const int &);
        //получить следующий узел
        int get_next() const;
        //получить предыдущий узел
        int get_prev() const;
        //перегрузка операторов сравнения
        bool operator==(const Edge_Node& );
    private:
        //следующий и предыдуший узел
        int next,prev;
};


#endif // EDGE_NODE_H_INCLUDED
