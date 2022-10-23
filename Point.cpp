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

void Point::moveByVector(double xCoord,double yCoord){
    x = x + xCoord;
    y = y + yCoord;
}

void Point::rotate(double theta, double ox, double oy){
    //  If you rotate point (px, py) around point o(ox, oy) by angle theta you'll get:
    //TODO: Requires futher investigation, not all cases work.
    x = cos(theta) * (x-ox) - sin(M_PI - theta) * (y-oy) + ox;
    y = sin(M_PI - theta) * (x-ox) + cos(theta) * (y-oy) + oy;
}

void Point::setXCoord(double xCoord)
{
    this -> x = xCoord;
}

void Point::setYCoord(double yCoord)
{
    this -> y = yCoord;
}

double Point::getXCoord()
{
    return x;
}

double Point::getYCoord()
{
    return y;
}