
#include <cmath>
#include <iostream>
#include "LineSegment.hpp"

// Default Constructor
LineSegment::LineSegment()
{
    
}

// Overload Constructor
LineSegment::LineSegment(Point Point_1, Point Point_2)
{
    setEnd1(Point_1);
    setEnd2(Point_2);
}

LineSegment::~LineSegment()
{
    // DeStructor
}

double LineSegment::length()
{
    return Point_1.distanceTo(Point_2);
}

void LineSegment::rotate()
{

}

bool LineSegment::isPointOnLine(Point Point)
{
    if (Point_1.distanceTo(Point)+ Point.distanceTo(Point_2) == Point_1.distanceTo(Point_2))
        return true; // Point is on the line.
    return false;    // Point is not on the line.
}

//getters and setters
Point LineSegment::getEnd1()
{
    return Point_1;
}

Point LineSegment::getEnd2()
{
    return Point_2;
}
void LineSegment::setEnd1(Point Point_1)
{
    Point_1.getXCoord();
    Point_1.getYCoord();
}

void LineSegment::setEnd2(Point Point_2)
{
    Point_2.getXCoord();
    Point_2.getYCoord();
}