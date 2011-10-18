#ifndef PPLG_H
#define PPLG_H

#include <map>
#include <vector>
#include "Point.h"

using std::vector;
using std::map;


class PPLG
{
    public:
        PPLG();
        virtual ~PPLG();
    protected:
    private:
        map<Point,int> ids;
        vector<Point> p;
        vector <vector<int> > g;
};

#endif // PPLG_H
