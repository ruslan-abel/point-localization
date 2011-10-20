#ifndef POINT_H
#define POINT_H

class Point
{
    public:
        Point(double x=0,double y=0):_x(x),_y(y){};
        Point(const Point& m);
        Point& operator=(const Point&);
        double get_x(void)const;
        double get_y(void)const;
        bool operator==(const Point&);
        bool operator<(const Point&);
    private:
        double _x,_y;
};
#endif // POINT_H
