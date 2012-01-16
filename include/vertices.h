#ifndef VERTICES_H
#define VERTICES_H

//��������� ������ ������� �� �����
#include "Point.h"
//��� ���������� ����������
#include "Predicat.h"
//��������� ���������� ��������
#include <vector>

class Vertices
{
    public:
        //������������
        Vertices();
        Vertices(const std::vector<Point>& p);
        //�������� �����
        Vertices& add(const Point&);
        //������� �������� �����
        Vertices& del(const Point&);
        //���������� ����� �� ��������� �������
        void sort(const Predicat&);
        //���������� ��������� ����������
        Point& operator[](int);
        //��������� �����, ���� � ID
        Point& vert(int);
        //���������� �����
        const int size();

        //�������� ��������
        std::vector<Point>::iterator begin();
        std::vector<Point>::iterator end();

        const std::vector<Point>& getVerticesVector() // ��������� (russell)
        {
            return v;
        }    // �����, ���������� ������������. ��� ����� ������, ����� ������������ �� ���
                                                    // ��������� lower_bound � upper_bound. ����� ���� ������� ��������� ��� �����
                                                    // ������, ����� ����� ����� �������� ��� �����
    private:
        std::vector<Point> v; // ������� mutable, � ������� sort ������� const ? ����� ����������� ������ ����� ���� �����������
};

#endif // VERTICES_H

