#pragma once
#include "rectangleType.h"

//boxType interface
class boxType : public rectangleType
{
private:
    double height;

public:
    //setter
    void setDimension(double l, double w, double h); //overload
    //getters
    double getHeight() const; //overload
    double getArea() const; //override
    double getVolume() const; //overload
    void print() const; //override
    boxType(double l = 0, double w = 0, double h = 0); //constructor with parameters
};