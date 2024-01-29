#include <iostream>
#include "interface.h"

using namespace std;

//implement class member functions

    lineType::lineType(float a, float b, float c)
    {

    }

    void lineType::setCoefficients()
    {
        do
        {
            cout << "Please enter desired value for a: ";
            cin >> a;
            cout << "Please enter desired value for b: ";
            cin >> b;
            cout << "Please enter desired value for c: ";
            cin >> c;

            if (a==0 && b==0)
            {
                cout << "Both a and b cannot be 0, please input a new value for b or start over: " << endl;
            }
    
        } while (a==0 && b==0);

        cout << "The equation of the line with given coefficients is: " << a << "x + " << b << "y = " << c << endl;
    }

    float lineType::findSlope() const
    {
        float slope = (-(a/b));
        if (b == 0){
            cout << "Your line is vertical and has no slope." << endl;
        }
        return slope;
    }

    float lineType::findIntersect(const lineType& otherLine) const
    {
        float intersectX = (((b*otherLine.c)-(otherLine.b*c))/((a*otherLine.b)-(otherLine.a*b)));
        float intersectY = (((c*otherLine.a)-(otherLine.c*a))/((a*otherLine.b)-(otherLine.a)*b));
        cout << "(" << (-intersectX) << "," << (-intersectY) << ")" << endl;
        return (-(intersectX), -(intersectY));
    }

//((b1c2-b2c1)/(a1b2-a2b1), (c1a2-c2a1)/(a1b2-a2b1))

    bool lineType::checkEqual(const lineType& otherLine) const
    {
        float constA = otherLine.a/a;
        float constB = otherLine.b/b;
        float constC = otherLine.c/c;
        
        bool equal = (constA*a == otherLine.a && constB*b == otherLine.b && constC*c == otherLine.c);
        if (equal)
        {
            cout << "These lines are equal!" << endl;
        } else {
            cout << "These lines are not equal :(" << endl;
        }
        return equal;
    }

    bool lineType::checkParallel(const lineType& otherLine) const
    {
        bool parallel = this->findSlope() == otherLine.findSlope();
        if (parallel)
        {
            cout << "These lines are parallel!" << endl;
        } else {
            cout << "These lines are not parallel :(" << endl;
        }

        return parallel;
    }

    bool lineType::checkPerpendicular(const lineType& otherLine) const
    {
        if (this->findSlope()*otherLine.findSlope() == -1)
        {
            cout << "These lines are perpendicular!" << endl;
            return (true);
        } else {
            cout << "These lines are not perpendicular :(" << endl;
            return (false);
        }
    }