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

void Triangle::setPointA(Point newA)
{
    A = newA;
}

void Triangle::setPointB(Point newB)
{
    B = newB;
}

void Triangle::setPointA(Point newB)
{
    B = newB;
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