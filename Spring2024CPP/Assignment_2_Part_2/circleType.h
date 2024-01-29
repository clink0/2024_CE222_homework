#pragma once

using namespace std;

class circleType
{
protected:
    double radius;


public:
    circleType(double r = 0);
    //getters
    double getRadius() const;
    double getCircumference() const;
    double getArea() const;
    void print() const;
    //setters
    void setDimensions(double r);
};