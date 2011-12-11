#ifndef VERTICES_H
#define VERTICES_H

#include "Point.h"
#include "Predicat.h"
#include <vector>

class Vertices
{
    public:
        Vertices();
        Vertices(const std::vector<Point>& p);
        Vertices& add(const Point&);
        Vertices& del(const Point&);
        void sort(const Predicat&);
        Point& operator[](int);
        Point& vert(int);
        int size();

        const std::vector<Point>& getVerticesVector() // добавлено (russell)
        {
            return v;
        }    // плохо, нарушаетс€ инкапсул€ци€. мне нужен вектор, чтобы использовать на нем
                                                    // алгоритмы lower_bound и upper_bound. думаю надо сделать итераторы дл€ этого
                                                    // класса, тогда можно будет обойтись без этого
    protected:
    private:
        std::vector<Point> v; // сделать mutable, а функцию sort сделать const ? чтобы константный объект можно было сортировать
};

#endif // VERTICES_H

