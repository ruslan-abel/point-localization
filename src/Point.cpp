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

double Point::get_x(void)
{
    return _x;
}

double Point::get_y(void)
{
    return _y;
}

bool Point::operator==(const Point& pt)
{
    return _x==pt._x&&_y==pt._y;
}

bool Point::operator<(const Point& pt)
{
   return (_x<pt._x)||(_x==pt._x&&_y<pt._y);
}

bool rule_comp(Point& a,Point& b)
{
    return (a._x<b._x)||(a._x==b._x&&a._y<b._y);
}

bool operator<(const Point& a, const Point& b){ return (a._x<b._x)||(a._x==b._x&&a._y<b._y);}

bool operator==(const Point& a, const Point& b){ return (a._x==b._x)||(a._y==b._y);
}
