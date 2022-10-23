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
    
    double getXCoord();
    double getYCoord();
    double distanceTo(Point &);

    virtual void rotate(double, double, double);
    virtual void moveByVector(double, double);
    void setXCoord(double);
    void setYCoord(double);
    
};

#endif//RACING__POINT_HPP_