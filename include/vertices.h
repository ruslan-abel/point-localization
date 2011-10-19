#ifndef VERTICES_H
#define VERTICES_H

#include "Point.h"
#include <vector>

using std::vector;

class Vertices
{
    public:
        Vertices();
        virtual ~Vertices();
        Vertices& add(const Point&);
        Vertices& del(const Point&);
        friend bool operator<(const Point& a, const Point& b);
        void sort();
        Point& operator[](int);
        int size();
    protected:
    private:
        vector<Point> v;
};

#endif // VERTICES_H

