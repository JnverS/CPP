//
// Created by Егор on 11.05.2022.
//

#ifndef EX03_POINT_H
#define EX03_POINT_H

#include "Fixed.h"

class Point {
private:
    Fixed const _x;
    Fixed const _y;
public:
    Point();
    Point(const float, const float);
    Point(const Point&);
    ~Point();

    float getX(void);
    float getY(void);
    Point& operator = (const Point&);
};
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif //EX03_POINT_H
