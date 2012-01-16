#ifndef SOME_PREDICAT_INCLUDED  //гварды на исключение множественного включения
#define SOME_PREDICAT_INCLUDED

//наследуем от базового класса сравнения, для использования в любом месте программы
#include "Predicat.h"

//Здесь пишем свои предикаты Пример:

class Compare_y: public Predicat
{
    public:
        bool operator()(const Point& p1,const Point& p2)
        {
            //сравнение по координате y и в случает равенства по x
            return (p1.get_y()<p2.get_y())||(p1.get_y()==p2.get_y()&&p1.get_x()<p2.get_x());
        };
};
#endif // SOME_PREDICAT_INCLUDED
