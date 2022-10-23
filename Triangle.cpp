#include <iostream>
#include <cmath>
#include "Triangle.hpp"


Triangle::Triangle()
{
    setPointA(Point(1.0,0.0));
    setPointB(Point(0.0,0.0));
    setPointC(Point(0.0,1.0));
}

Triangle::Triangle(Point A, Point B, Point C)
{
    setPointA(A);
    setPointB(B);
    setPointC(C);
}

Triangle::~Triangle()
{
    
}

void Triangle::moveByVector(double xCoord,double yCoord)
{
    A.setXCoord(A.getXCoord()+xCoord);
    A.setYCoord(A.getYCoord()+yCoord);
    B.setXCoord(B.getXCoord()+xCoord);
    B.setYCoord(B.getYCoord()+yCoord);
    C.setXCoord(C.getXCoord()+xCoord);
    C.setYCoord(C.getYCoord()+yCoord);
}

void Triangle::rotate(double theta, double ox, double oy)
{
    //TODO: Copy  solution from Point.cpp when all cases will work & apply to all points of triangle.
}

double Triangle::getArea()
{
    double s = getCircuit() / 2 ;
    return sqrt( s * (s - A.distanceTo(B) ) * (s - A.distanceTo(C) ) * (s - B.distanceTo(C)));
}

double Triangle::getCircuit()
{
    return A.distanceTo(B) + A.distanceTo(C) + B.distanceTo(C);
}

void Triangle::setPointA(Point newA)
{
    this->A = newA;
}

void Triangle::setPointB(Point newB)
{
    this->B = newB;
}

void Triangle::setPointC(Point newC)
{
    this->C = newC;
}

Point const Triangle::getPointA()
{
    return A;
}

Point const Triangle::getPointB()
{
    return B;
}

Point const Triangle::getPointC()
{
    return C;
}