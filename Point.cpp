#include <iostream>
#include <cmath>
#include "Point.hpp"


Point::Point()
{
    setXCoord(0.0);
    setYCoord(0.0);
}

Point::Point(double xCoord, double yCoord)
{
    setXCoord(xCoord);
    setYCoord(yCoord);
}

Point::~Point()
{
    
}

double Point::distanceTo(Point &Point_2)
{
    double xCoord1, xCoord2, yCoord1, yCoord2, tempX, tempY, temp;
    
    xCoord1 = getXCoord();
    xCoord2 = Point_2.getXCoord();
    yCoord1 = getYCoord();
    yCoord2 = Point_2.getYCoord();
    
    tempX = xCoord2 - xCoord1;
    tempY = yCoord2 - yCoord1;
    
    temp = pow(tempX, 2) + pow(tempY, 2);
    
    return sqrt(temp);
}

void Point::setXCoord(double xCoord)
{
    x = xCoord;
}

void Point::setYCoord(double yCoord)
{
    y = yCoord;
}

double const Point::getXCoord()
{
    return x;
}

double const Point::getYCoord()
{
    return y;
}