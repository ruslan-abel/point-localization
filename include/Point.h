#ifndef POINT_H //гварды на защиту
#define POINT_H

//точка в двухмерном пространстве
class Point
{
public:
    //конструкторы
    Point(double x=0,double y=0,int n=0):_x(x),_y(y),num(n) {};
    Point(const Point& m);
    Point& operator=(const Point&);
    //становка заданных условий
    Point& set_point(const Point&);
    //функции получения координат
    const double get_x(void)const;
    const double get_y(void)const;
    //получение ID точки
    const int get_num(void)const;
    //перегрузка оператора индексации
    const double operator[](int);
    //для сравнения
    bool operator==(const Point&);
    bool operator<(const Point&);
    //разность точек (для вектора)
    Point& operator-(const Point&);
    //сумма точек
    Point& operator+(const Point&);
private:
    //координаты точки
    double _x,_y;
    //номер точки (ID точки)
    int num;
};
#endif // POINT_H
