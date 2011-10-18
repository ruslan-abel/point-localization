#ifndef POINT_H
#define POINT_H

class Point
{
    public:
        Point(double x=0,double y=0):_x(x),_y(y){};
        Point(const Point& m);
        Point& operator=(const Point&);
        double get_x(void);
        double get_y(void);
        bool operator==(const Point&);
        friend bool operator==(const Point&,const Point&);
        bool operator<(const Point&);
        friend bool operator< (const Point& a, const Point& b);
        friend bool rule_comp(Point& a,Point& b);
        virtual ~Point();
    private:
        double _x,_y;
};
#endif // POINT_H
