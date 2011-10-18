#include "Point.h"

Point::Point()
{

}

bool Point::operator< (const Point & pt)
{
    return ((_x < pt._x) || ((_x == pt._x) && (_y<pt._y)));
}

Point::~Point()
{

}

