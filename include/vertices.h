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
        void sort();
    protected:
    private:
        vector<Point> v;
};

#endif // VERTICES_H
