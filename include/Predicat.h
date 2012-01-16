#ifndef PREDICAT_H //гварды на исключение множественного включения
#define PREDICAT_H

//используемые в сравнении классы
#include "Point.h"

//базовый класс для сравнения,
//для использования своего правила,
//прошу наследовать от данного класса
//ЗА ПРИМЕРОМ ОБРАЩАТЬСЯ В ФАЙЛ "Some_Predicat.h"

//класс-функция (функтор)
class Predicat
{
    public:
        bool operator()(const Point& p1,const Point& p2);
};

#endif // PREDICAT_H
