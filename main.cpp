#include <iostream>
#include "Point.h"
#include "vertices.h"

#include <vector>
#include <algorithm>

using std::sort;
using std::vector;

using namespace std;

int main()
{
    Point A(10,53);
    Point B(9,21);
    Point C(1,21);
    Point D(15,31);
    Point E(2,41);

    Vertices v;
    v.add(A).add(B).add(C);
    v.sort();


    //cout<<pts[0].get_x();

    return 0;
}
