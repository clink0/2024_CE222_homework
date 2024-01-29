#include <iostream>
#include "interface.h"

using namespace std;

int main ()
{
    lineType line1(0,0,0);
    lineType line2(0,0,0);
    cout << "Set coefficients of line 1" << endl;
    line1.setCoefficients();
    cout << "Set coefficients of line 2" << endl;
    line2.setCoefficients();
    cout << "Slope of line 1 is: " << line1.findSlope() << "Slope of line 2 is: " << line2.findSlope() << endl;
    line1.checkParallel(line2);
    line1.checkPerpendicular(line2);
    line1.checkEqual(line2);
    line1.findIntersect(line2);
};