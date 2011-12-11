#include "PPLG.h"
#define PI 3.14

PPLG::PPLG(const Vertices& vert,const Edges& edg)
{
    v=vert;
    e=edg;
    status=0;
}

PPLG& PPLG::set_edges(const Edges& edg)
{
    e=edg;
    return *this;
}

PPLG& PPLG::set_vertices(const Vertices& vert)
{
    v=vert;
    return *this;
}

void PPLG::print_edges()
{
    for(int i=0;i<e.size();i++)
        std::cout<<e[i].get_first()<<":"<<e[i].get_second()<<" ";
    std::cout<<std::endl;
}

void PPLG::print_verticies()
{
    for(int i=0;i<v.size();i++)
        std::cout<<v[i][0]<<","<<v[i][1]<<" ";
    std::cout<<std::endl;
}

int PPLG::calc_first(const int& a)
{
    double m=10;
    double buf;
    int n;
    for(int i=0;i<e.size();i++)
    {
        if(i!=a){
            if(e[i].get_first()==e[a].get_first())
            {
                buf=angle(v.vert(e[a].get_first()),v.vert(e[a].get_second()),v.vert(e[i].get_first()),v.vert(e[i].get_second()));
                if(buf<m)
                {
                    n=i;
                    m=buf;
                }
            }
            if(e[i].get_second()==e[a].get_first())
            {
                buf=angle(v.vert(e[a].get_first()),v.vert(e[a].get_second()),v.vert(e[i].get_second()),v.vert(e[i].get_first()));
                buf=PI-buf;
                if(buf<m)
                {
                    n=i;
                    m=buf;
                }
            }
        }
    }
    if(m!=10)
    {
        return n;
    }
    else
    {
        return -1;
    }
}

int PPLG::calc_second(const int& a)
{
    double m=10;
    double buf;
    int n;
    for(int i=0;i<e.size();i++)
    {
        if(i!=a){
            if(e[i].get_first()==e[a].get_second())
            {
                buf=angle(v.vert(e[a].get_second()),v.vert(e[a].get_first()),v.vert(e[i].get_first()),v.vert(e[i].get_second()));
                if(buf<m)
                {
                    n=i;
                    m=buf;
                }
            }
            if(e[i].get_second()==e[a].get_second())
            {
                buf=angle(v.vert(e[a].get_second()),v.vert(e[a].get_first()),v.vert(e[i].get_second()),v.vert(e[i].get_first()));
                buf=PI-buf;
                if(buf<m)
                {
                    n=i;
                    m=buf;
                }
            }
        }
    }
    if(m!=10)
    {
        return n;
    }
    else
    {
        return -1;
    }
}

double PPLG::angle(const Point& p1,const Point& p2,const Point& p3,const Point& p4) const
{
    Point v1(p2.get_x()-p1.get_x(),p2.get_y()-p1.get_y());
    Point v2(p4.get_x()-p3.get_x(),p4.get_y()-p3.get_y());
    return acos(((v1.get_x()*v2.get_x())+(v1.get_y()*v2.get_y()))/(sqrt((v1.get_x()*v1.get_x())+(v1.get_y()*v1.get_y()))*sqrt((v2.get_x()*v2.get_x())+(v2.get_y()*v2.get_y()))));
}

int PPLG::create_rsds()
{
    int n,m;
    rsds.clear();
    for(int i=0;i<e.size();i++)
    {
        n=calc_first(i);
        m=calc_second(i);
        if(n==-1){n=i;}
        if(m==-1){m=i;}
        rsds.add(Edge_Node(n,m));
    }
    return 0;
}

void PPLG::print_rsds()
{
    for(int i=0;i<rsds.size();i++)
    {
        std::cout<<i<<" "<<rsds[i].get_prev()<<" "<<rsds[i].get_next()<<std::endl;
    }
}

Vertices& PPLG::getVertices()
{
    return v;
}
