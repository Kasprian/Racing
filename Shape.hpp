#pragma once
#ifndef RACING_SHAPE_HPP_
#define RACING_SHAPE_HPP_

#include <iostream>

class Shape {
    public:
    virtual ~Shape() {}
    virtual void moveByVector(double, double) = 0;
    virtual void rotate(double, double, double) = 0;
};

#endif//RACING__SHAPE_HPP_