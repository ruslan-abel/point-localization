#ifndef VERTICES_H
#define VERTICES_H

#include "Point.h"
#include "Predicat.h"
#include <vector>

class Vertices
{
    public:
        Vertices();
        Vertices(const std::vector<Point>& p);
        Vertices& add(const Point&);
        Vertices& del(const Point&);
        void sort(const Predicat&);
        Point& operator[](int);
        Point& vert(int);
        int size();
    protected:
    private:
        std::vector<Point> v;
};

#endif // VERTICES_H

