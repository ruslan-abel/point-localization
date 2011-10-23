#ifndef POINT_H
#define POINT_H

class Point
{
    public:
        Point(double x=0,double y=0,int n=0):_x(x),_y(y),num(n){};
        Point(const Point& m);
        Point& operator=(const Point&);
        double get_x(void)const;
        double get_y(void)const;
        int get_num(void)const;
        double operator[](int);
        bool operator==(const Point&);
        bool operator<(const Point&);
        Point& operator-(const Point&);
    private:
        double _x,_y;
        int num;
};
#endif // POINT_H
