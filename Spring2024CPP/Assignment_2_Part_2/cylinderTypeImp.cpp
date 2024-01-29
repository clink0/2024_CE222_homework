#include <iostream>
#include "circleType.h"
#include "cylinderType.h"
using namespace std;

//cylinder class member functions
//cylinder constructor
cylinderType::cylinderType(double r, double h)
    :circleType(r)
{
    if (h > 0)
    {
        height = h;
    } else {
        cout << "You entered a negative height, so height was set to 0" << endl;
        height = 0;
    }
}

//setter
void cylinderType::setDimensions(double r, double h)
{
    if (h > 0)
    {
        height = h;
    } else {
        cout << "You entered a negative height, so height was set to 0" << endl;
        height = 0;
    }
    circleType::setDimensions(r);
}

//getters
double cylinderType::getHeight() const
{
    return height;
}

double cylinderType::getArea() const
{
    double pi = 3.14;
    return ((2 * pi * radius * height) + (2 * pi * radius * radius));
}

double cylinderType::getVolume() const
{
    double pi = 3.14;
    return pi * radius * radius * height;
}

void cylinderType::print() const
{
    cout << "Height is: " << height << endl;
    cout << "Radius is: " << radius << endl;
    cout << "Area is: " << getArea() << endl;
    cout << "Volume is: " << getVolume() << endl;

}