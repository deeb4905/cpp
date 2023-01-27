#include <iostream>
#include "Point.hpp"

int Point::counter = 0;

Point::Point(int vx, int vy):x(vx), y(vy)
{
    counter++;
}
Point::Point():Point(0, 0){}



int Point::getX()
{
    return x;
}

int Point::getY()
{
    return y;
}

int Point::getCounter()
{
    return counter;
}

void Point::display()
{
    std::cout << "Coordinates x = " << getX() << " y = " << getY() << std::endl;
}



void Point::setX(int val)
{
    x = val;
}

void Point::setY(int val)
{
    y = val;
}



void Point::deplacerDe(int vx, int vy)
{
    x += vx;
    y += vy;
}

void Point::deplacerVers(int vx, int vy)
{
    x = vx;
    y = vy;
}