#ifndef SLABDECOMPOSITION_H
#define SLABDECOMPOSITION_H

#include "PPLG.h"
#include "Point.h"
#include "Predicat.h"

class SlabPredicat : public Predicat
{
    public:
        bool operator()(const Point& p1,const Point& p2)
        {
            return (p1.get_y()<p2.get_y())||(p1.get_y()==p2.get_y()&&p1.get_x()<p2.get_x());
        };
};

class SlabDecomposition
{
    public:
        SlabDecomposition( PPLG&, const Point& );
        //virtual ~SlabDecomposition();

        void findSlab();

    protected:
    private:
        // ������ �� ��� ����
        PPLG& graph;
        // ������� ������
        int top, bottom;
        // �������� �����
        Point pointToLocate;
};

#endif // SLABDECOMPOSITION_H
