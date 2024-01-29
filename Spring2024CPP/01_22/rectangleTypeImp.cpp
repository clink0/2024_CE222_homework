#include <iostream>
#include "rectangleType.h"
#include "boxType.h"
using namespace std;

//setter
void rectangleType::setDimension(double l, double w)
{
    if (l >= 0)
        length = l;  
    else {
        length = 0;
        cout << "You entered a negative length, so length was set to 0" << endl;
    }
    if (w >= 0)
    width = w;
    else{
        width = 0;
        cout << "You entered a negative width, so length was set to 0" << endl;
    }
}
//getters
double rectangleType::getLength() const
{
    return length;
}
double rectangleType::getWidth() const
{
    return width;
}
double rectangleType::getArea() const
{
    return length*width;
}
double rectangleType::getPerimeter() const
{
    return 2*length+2*width;
}
void rectangleType::print() const
{
    cout << "Length: " << length << endl;
    cout << "Width: " << width << endl;
}
//constructor
rectangleType::rectangleType(double l, double w)
{
    setDimension(l,w);
}