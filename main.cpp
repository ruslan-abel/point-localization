#include <iostream>
#include "Point.h"
#include "vertices.h"
#include "Some_predicat.h"
#include "Edge.h"
#include "PPLG.h"
#include "Edges.h"

#include <vector>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;

int main()
{
    Point A(0,20,0);
    Point B(10,15,1);
    Point C(15,10,2);
    Point D(5,5,3);

    Vertices v;
    v.add(A).add(B).add(C).add(D);

    Edges e;
    e.add(Edge(0,1)).add(Edge(1,3)).add(Edge(1,2)).add(Edge(2,3));

    PPLG g(v,e);

    g.create_rsds();

    g.print_rsds();

    return 0;
}
