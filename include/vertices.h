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
    protected:
    private:
        vector<Point> v;
};

#endif // VERTICES_H
