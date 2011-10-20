#ifndef PREDICAT_H
#define PREDICAT_H

#include "Point.h"


class Predicat
{
    public:
        bool operator()(const Point& p1,const Point& p2);
};

#endif // PREDICAT_H
