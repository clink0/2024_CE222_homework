#pragma once
#include "circleType.h"

class cylinderType : public circleType
{
private:
    double height;

public:
    cylinderType(double r = 0, double h = 0);
    double getHeight() const;
    double getArea() const;
    double getVolume() const;
    void print() const;
    void setDimensions(double r, double h);
};