#include "Point.h"

Point::Point(const Point & pt)
{
    *this=pt;
}

Point& Point::operator=(const Point & pt)
{
    _x=pt._x;
    _y=pt._y;
    num=pt.num;
    return *this;
}

int Point::get_num(void) const
{
    return num;
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

Point& Point::operator-(const Point& pt)
{
    _x=pt.get_x()-_x;
    _y=pt.get_y()-_y;
    return *this;
}

bool Point::operator<(const Point& p)
{
    return (_x<p._x)||(_x==p._x&&_y<p._y);
}

double Point::operator[](int x)
{
    if(x==0)
        return get_x();
    return get_y();
}
