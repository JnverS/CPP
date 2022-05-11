
#include "Point.h"

Point::Point() : _x(Fixed(0)), _y(Fixed(0)){
//    _x = Fixed(0);
//    _y = Fixed(0);
}
Point::Point(const float f1, const float f2)  : _x(Fixed(f1)), _y(Fixed(f2)){
//    _x = Fixed(f1);
//    _y = Fixed(f2);
}
Point::Point(const Point& point)  : _x(Fixed(point._x)), _y(Fixed(point._y)){
//    _x = point._x;
//    _y = point._y;
}
Point::~Point(){
}

Point& Point::operator = (const Point& point){
    Fixed *x = (Fixed*)&this->_x;
    Fixed *y = (Fixed*)&this->_y;

    if (this == &point)
        return *this;
    *x = point._x;
    *y = point._y;
    return *this;
}

float Point::getX(void){
    return _x.toFloat();
}

float Point::getY(void){
    return _y.toFloat();
}