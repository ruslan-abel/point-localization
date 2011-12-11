#include "SlabDecomposition.h"
#include "vertices.h"
#include "PPLG.h"

#include <algorithm>

SlabDecomposition::SlabDecomposition( PPLG& graph, const Point& point ) :
    graph( graph ), pointToLocate( point )
{ }

void SlabDecomposition::findSlab()
{
    Vertices& vertices = graph.getVertices();
    vertices.sort( SlabPredicat() );
    std::vector<Point> points = vertices.getVerticesVector();
    top = ( std::lower_bound( points.begin(), points.end(), pointToLocate, SlabPredicat() ) )->get_y();
    bottom = ( std::upper_bound( points.begin(), points.end(), pointToLocate, SlabPredicat() ) )->get_y();

}


