#include <cmath>
#include <float.h>
#include "Point.hpp"
#include "Shape.hpp"


#ifndef LineSegment_h
#define LineSegment_h

class LineSegment : public Shape
{
private:
    // Member Variables
    Point Point_1;
    Point Point_2;
    
public:
    // Default Constructor
    LineSegment();
    
    // Overload Constructor
    LineSegment(Point, Point);
    
    // Destructor
    ~LineSegment();
    
    double length();
    double slope();
    bool isPointOnLine(Point);
    bool isLineSegmentPararell(LineSegment &);
    bool isLineSegmentPerpendicular(LineSegment &);
    Point intersect(LineSegment &);
    virtual void rotate(double, double , double);
    virtual void moveByVector(double, double);
    
    Point getEnd1();
    Point getEnd2();
    void setEnd1(Point);
    void setEnd2(Point);
};

#endif /* LineSegment_h */