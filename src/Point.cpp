#include "Point.h"

Point::~Point()
{
}

Point::Point(const Point & pt)
{
    *this=pt;
}

Point& Point::operator=(const Point & pt)
{
    _x=pt._x;
    _y=pt._y;
    return *this;
}

double Point::get_x(void) const
{
    return _x;
}

double Point::get_y(void) const
{
    return _y;
}

bool Point::operator==(const Point& pt)
{
    return _x==pt._x&&_y==pt._y;
}

bool Point::operator<(const Point& p)
{
    return (_x<p._x)||(_x==p._x&&_y<p._y);
}
