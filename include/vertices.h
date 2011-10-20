#ifndef VERTICES_H
#define VERTICES_H

#include "Point.h"
#include <vector>

using std::vector;

class Less
{
    public:
        bool operator()(const Point& p1,const Point& p2)
        {
            return p1.get_x()<p2.get_x();
        }
};

class Vertices
{
    public:
        Vertices();
        virtual ~Vertices();
        Vertices& add(const Point&);
        Vertices& del(const Point&);
        friend bool operator<(const Point& a, const Point& b);
        void sort_v();
        Point& operator[](int);
        int size();
    protected:
    private:
        vector<Point> v;
};

#endif // VERTICES_H

