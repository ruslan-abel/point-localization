#include <iostream>
#include "Point.h"
#include "vertices.h"

#include <vector>
#include <algorithm>

using std::sort;
using std::vector;
using std::mem_fun;
using std::bind1st;

using namespace std;

int main()
{
    Point A(10,53);
    Point B(9,21);
    Point C(1,21);
    Point D(15,31);
    Point E(2,41);

    Vertices v;
    v.add(A).add(B).add(C).add(A).add(B);

    vector<Point> pt;
    pt.push_back(A);
    pt.push_back(B);
    pt.push_back(C);

    v.sort_v();

    cout<<v[0].get_x();

    //cout<<pt[0].get_x()<<"\n"<<v.size()<<"\n";

    return 0;
}
