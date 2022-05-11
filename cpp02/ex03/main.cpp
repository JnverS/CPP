#include "Fixed.h"
#include "Point.h"

int main( void ) {
    Point a(0, 0);
    Point b(0, 15);
    Point c(6, 7);
    Point point(0, 0);

    std::cout << "Point x = " << point.getX() << ", y = " << point.getY() << " ";
    if (bsp(a, b, c, point) == true)
        std::cout << "is in" << std::endl;
    else
        std::cout << "is out" << std::endl;
    point = Point(2, 5);
    std::cout << "Point x = " << point.getX() << ", y = " << point.getY() << " ";
    if (bsp(a, b, c, point) == true)
        std::cout << "is in" << std::endl;
    else
        std::cout << "is out" << std::endl;
    point = Point(8, 3);
    std::cout << "Point x = " << point.getX() << ", y = " << point.getY() << " ";
    if (bsp(a, b, c, point) == true)
        std::cout << "is in" << std::endl;
    else
        std::cout << "is out" << std::endl;

    return 0;
}