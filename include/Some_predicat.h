#ifndef SOME_PREDICAT_INCLUDED
#define SOME_PREDICAT_INCLUDED

#include "Predicat.h"

//Здесь пишем свои предикаты Пример:

class Compare_y: public Predicat
{
    public:
        bool operator()(const Point& p1,const Point& p2)
        {
            return (p1.get_y()<p2.get_y())||(p1.get_y()==p2.get_y()&&p1.get_x()<p2.get_x());
        };
};
#endif // SOME_PREDICAT_INCLUDED
