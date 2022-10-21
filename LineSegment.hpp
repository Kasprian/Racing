#include <cmath>
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
    
    // Accessor Functions
    Point getEnd1();
    Point getEnd2();
    double length();
    void rotate();
    bool isPointOnLine(Point);
    
    // Mutator Functions
    void setEnd1(Point);
    void setEnd2(Point);
};

#endif /* LineSegment_h */