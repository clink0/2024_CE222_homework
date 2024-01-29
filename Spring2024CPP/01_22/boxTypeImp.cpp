#include "boxType.h"
#include <iostream>
using namespace std;

//setter
void boxType::setDimension(double l, double w, double h)
{
    if (h >= 0)
    {
        height = h;
    } else {
        cout << "Youe entered a negative height, so its been set to 0" << endl;
        height = 0;
    }
    rectangleType::setDimension(l, w);
}

//getters
double boxType::getHeight() const
{
    return height;
}

double boxType::getArea() const
{
    return 2 * rectangleType::getArea() + 2 * getLength() * height + 2 * getWidth() * height;
}

double boxType::getVolume() const
{
    return rectangleType::getArea() * height;
}

void boxType::print() const
{
    rectangleType::print();
    cout << "Height is: " << height << endl;
}
/*
boxType::boxType(double l, double w, double h)
    : rectangleType(l,w)
{
    if (h >= 0)
        height = h;
    else   
        cout << "You entered a negative height, so it was set to 0" << endl;
        height = 0;
}
*/

boxType::boxType(double l, double w, double h)
{
    setDimension(l,w,h);
}


