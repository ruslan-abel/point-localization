#ifndef EDGE_NODE_H_INCLUDED
#define EDGE_NODE_H_INCLUDED

class Edge_Node
{
    public:
        Edge_Node(const int&,const int&);
        Edge_Node& set(const int &,const int &);
        int get_next() const;
        int get_prev() const;
        bool operator==(const Edge_Node& );
    private:
        int next,prev;
};


#endif // EDGE_NODE_H_INCLUDED
