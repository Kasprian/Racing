#ifndef RACING_POINT_HPP_
#define RACING_POINT_HPP_

#include <iostream>
#include <cmath>
#include "Shape.hpp"


class Point: public Shape
{
private:
    double x, y;
    
public:
    // Default Constructor
    Point();
    
    // Overload Constructor
    Point(double xCoord, double yCoord);
    
    ~Point();

    double const getXCoord();
    double const getYCoord();
    double distanceTo(Point &);

    void rotate();
    void setXCoord(double);
    void setYCoord(double);
    
};

#endif//RACING__POINT_HPP_