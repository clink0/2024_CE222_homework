#include <iostream>
#include "circleType.h"
using namespace std;

//circle member function implementation
//circle constructor
circleType::circleType(double r)
{
    setDimensions(r);
}

//circle setter
void circleType::setDimensions(double r)
{
    if (r >= 0)
    {
        radius = r;  
    } else {
        radius = 0;
        cout << "You entered a negative radius, so radius was set to 0" << endl;
    }
}

//circle getters
double circleType::getRadius() const
{
    return radius;
}

double circleType::getCircumference() const
{
    double pi = 3.14;
    return radius*pi;
}

double circleType::getArea() const
{
    double pi = 3.14;
    return 2*pi*radius*radius;
}

void circleType::print() const
{
    cout << "Radius is: " << radius << endl;
    cout << "Area is: " << getArea() << endl;
    cout << "Circumference is: " << getCircumference() << endl;
}