#ifndef POINT_H
#define POINT_H

class Point
{
    public:
        Point();
        Point(double x,double y):_x(x),_y(y){};
        bool operator<(const Point&);
        virtual ~Point();
    protected:
    private:
        double _x,_y;
};

#endif // POINT_H
