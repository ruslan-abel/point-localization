#include <iostream>
#include "Point.h"
#include "vertices.h"
#include "Some_predicat.h"
#include "Edge.h"


#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main()
{
    Point A(10,53);
    Point B(9,21);
    Point C(1,21);
    Point D(15,31);
    Point E(2,41);

    vector<Point> pt;
    pt.push_back(A);
    pt.push_back(B);
    pt.push_back(C);
    pt.push_back(D);

    Vertices v(pt);


    v.add(A).add(B).add(C).add(A).add(B);

    v.sort(Compare_y());

    cout<<v[0][0];

    return 0;
}
