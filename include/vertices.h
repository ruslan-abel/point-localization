#ifndef VERTICES_H
#define VERTICES_H

//множество вершин состоит из точек
#include "Point.h"
//для алгоритмов сортировки
#include "Predicat.h"
//множество представим вектором
#include <vector>

class Vertices
{
    public:
        //конструкторы
        Vertices();
        Vertices(const std::vector<Point>& p);
        //добавить точку
        Vertices& add(const Point&);
        //удалить заданную точку
        Vertices& del(const Point&);
        //сортировка точек по заданному условию
        void sort(const Predicat&);
        //перегрузка оператора индексации
        Point& operator[](int);
        //получение точки, зная её ID
        Point& vert(int);
        //количество точек
        const int size();

        //эмуляция итерации
        std::vector<Point>::iterator begin();
        std::vector<Point>::iterator end();

        const std::vector<Point>& getVerticesVector() // добавлено (russell)
        {
            return v;
        }    // плохо, нарушается инкапсуляция. мне нужен вектор, чтобы использовать на нем
                                                    // алгоритмы lower_bound и upper_bound. думаю надо сделать итераторы для этого
                                                    // класса, тогда можно будет обойтись без этого
    private:
        std::vector<Point> v; // сделать mutable, а функцию sort сделать const ? чтобы константный объект можно было сортировать
};

#endif // VERTICES_H

