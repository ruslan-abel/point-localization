#ifndef NODE_H
#define NODE_H


class Node
{
    public:
        Node ():_next (this) , _prev (this){};
        Node *next(void);
        Node *prev(void);
        Node *insert(Node*);  // вставить узел после текущего
        Node *remove(void);  // удалить узел из списка, возвратить его указатель
        void splice(Node*);
        virtual ~Node (void);
    protected:
        Node *_next;
        Node *_prev;
};

#endif // NODE_H
