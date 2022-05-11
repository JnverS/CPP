#include "Point.h"

float sign (Point a, Point b, Point c)
{
    return (a.getX() - c.getX()) * (b.getY() - c.getY()) - (b.getX() - c.getX()) * (a.getY() - c.getY());
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float d1, d2, d3;
    bool neg, pos;

    d1 = sign(point, a, b);
    d2 = sign(point, b, c);
    d3 = sign(point, c, a);

    neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
    pos = (d1 >= 0) || (d2 >= 0) || (d3 >= 0);

    return !(neg && pos);
}
