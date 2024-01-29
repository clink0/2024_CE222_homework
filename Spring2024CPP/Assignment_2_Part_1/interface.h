#pragma once
#include <iostream>

using namespace std;

class lineType
{
private:
    float a;
    float b;
    float c;

public:
    //constructors
    lineType(float a, float b, float c);

    //setters
    void setCoefficients();

    //getters
    float findSlope() const;
    float findIntersect(const lineType& otherLine) const;
    bool checkEqual(const lineType& otherLine) const;
    bool checkParallel(const lineType& otherLine) const;
    bool checkPerpendicular(const lineType& otherLine) const;
};