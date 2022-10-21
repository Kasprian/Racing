#ifndef RACING_TRIANGLE_HPP_
#define RACING_TRIANGLE_HPP_

#include <iostream>
#include <cmath>
#include "Shape.hpp"
#include "Point.hpp"

class Triangle : public Shape
{
private:
    Point A, B, C;
    
public:
    // Default Constructor
    Triangle();
    
    // Overload Constructor
    Triangle(Point A, Point B, Point C);
    
    ~Triangle();

    Point const getPointA();
    Point const getPointB();
    Point const getPointC();
    
    void setPointA(Point);
    void setPointB(Point);
    void setPointC(Point);
    
};

#endif//RACING_TRIANGLE_HPP_