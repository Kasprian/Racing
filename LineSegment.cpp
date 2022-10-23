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

// Destructor
LineSegment::~LineSegment()
{

}

double LineSegment::length()
{
    return Point_1.distanceTo(Point_2);
}

double LineSegment::slope()
{
    double xCoordIn1, xCoordIn2, yCoordIn1, yCoordIn2, tempX, tempY, slope;
    
    xCoordIn1 = Point_1.getXCoord();
    xCoordIn2 = Point_2.getXCoord();
    yCoordIn1 = Point_1.getYCoord();
    yCoordIn2 = Point_2.getYCoord();
    
    tempX = xCoordIn2 - xCoordIn1;
    tempY = yCoordIn2 - yCoordIn1;
    
    slope = tempY / tempX;
    
    return slope;
}

void LineSegment::rotate(double theta, double ox, double oy)
{
     //TODO: Copy  solution from Point.cpp when all cases will work & apply to both points of line segment.
}

void LineSegment::moveByVector(double xCoord,double yCoord)
{
    Point_1.setXCoord(Point_1.getXCoord()+xCoord);
    Point_1.setYCoord(Point_1.getYCoord()+yCoord);
    Point_2.setXCoord(Point_2.getXCoord()+xCoord);
    Point_2.setYCoord(Point_2.getYCoord()+yCoord);
}


bool LineSegment::isPointOnLine(Point Point)
{
    if (Point_1.distanceTo(Point)+ Point.distanceTo(Point_2) == Point_1.distanceTo(Point_2))
        return true; // Point is on the line.
    return false;    // Point is not on the line.
}

bool LineSegment::isLineSegmentPararell(LineSegment &LineSegment)
{
    if (slope() == LineSegment.slope())
        return true;
    return false;
}

bool LineSegment::isLineSegmentPerpendicular(LineSegment &LineSegment)
{
    if (slope() == INFINITY && LineSegment.slope() == 0 || slope() == 0 && LineSegment.slope() == INFINITY)
        return true;
    if (slope() == -INFINITY && LineSegment.slope() == 0 || slope() == 0 && LineSegment.slope() == -INFINITY)
        return true;
    if (slope() * LineSegment.slope() == -1)
        return true;
    return false;
}


// Return true if line segments AB and CD intersect
Point LineSegment::intersect(LineSegment &LineSegment){
    Point C = LineSegment.getEnd1();
    Point D = LineSegment.getEnd2();
    double a1 = Point_2.getYCoord() - Point_1.getYCoord();
    double b1 = Point_1.getXCoord() - Point_2.getXCoord() ;
    double c1 = a1*(Point_1.getXCoord()) + b1*(Point_1.getYCoord());
 
    // Line CD represented as a2x + b2y = c2
    double a2 = D.getYCoord() - C.getYCoord() ;
    double b2 = C.getXCoord() - D.getXCoord() ;
    double c2 = a2*(C.getXCoord() )+ b2*(C.getYCoord());
 
    double determinant = a1*b2 - a2*b1;
 
    if (determinant == 0)
    {
        // The lines are parallel. This is simplified
        // by returning a pair of FLT_MAX
        return Point(0.0, 0.0);
    }
    else
    {
        double x = (b2*c1 - b1*c2)/determinant;
        double y = (a1*c2 - a2*c1)/determinant;
        return Point(x, y);
    }
}


//Getters and setters
Point LineSegment::getEnd1()
{
    return Point_1;
}

Point LineSegment::getEnd2()
{
    return Point_2;
}

void LineSegment::setEnd1(Point Point)
{
    this->Point_1 = Point;
}

void LineSegment::setEnd2(Point Point)
{
    this->Point_2 = Point;
}