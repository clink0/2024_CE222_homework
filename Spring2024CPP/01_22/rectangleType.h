#pragma once

//rectangleType interface
class rectangleType
{
private:
    double length;
    double width;

public:
    //setter
    void setDimension(double l, double w);
    //getters
    double getLength() const;
    double getWidth() const;
    double getArea() const;
    double getPerimeter() const;
    void print() const;
    //constructor
    rectangleType(double l = 0, double w = 0); //default constructor w/ parameters
};