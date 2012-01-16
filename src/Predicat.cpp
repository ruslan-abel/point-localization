#include "Predicat.h"

//записываем сюда правило для сравнения
//в данном случае происходит сортировка по координате x, затем по y
bool Predicat::operator()(const Point& p1,const Point& p2)
{
    return (p1.get_x()<p2.get_x())||(p1.get_x()==p2.get_x()&&p1.get_y()<p2.get_y());
}
