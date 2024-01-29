#include <iostream>
#include "circleType.h"
#include "cylinderType.h"

using namespace std;

int main()
{
    //circle function tests
    //initial circle test
    cout << endl << "Check circleType constructor and all related outputs." << endl;
    circleType myCircle(3);
    myCircle.print();

    //circle setDimensions test
    cout << endl << "Check circleType setDimensions function and all related outputs." << endl;
    myCircle.setDimensions(5);
    myCircle.print();

    //circle setDimensions negative test
    cout << endl << "Check circleType setDimensions with negative input." << endl;
    myCircle.setDimensions(-3);
    myCircle.print();

    //circle constructor negative test
    cout << endl << "Check circleType constructor with negative input." << endl;
    circleType anotherCircle(-4);
    myCircle.print();

    //cylinder function tests
    //initial cylinder test
    cout << endl << "Check cylinderType constructor and all related outputs." << endl;
    cylinderType myCylinder(7,5);
    myCylinder.print();

    //cylinder setDimensions test
    cout << endl << "Check cylinderType setDimensions function and all related outputs." << endl;
    myCylinder.setDimensions(8,3);
    myCylinder.print();

    //cylinder setDimensions negative test
    cout << endl << "Check cylinderType setDimensions with negative input." << endl;
    myCylinder.setDimensions(-8,-3);
    myCylinder.print();

    //cylinder constructor negative test
    cout << endl << "Check cylinderType constructor with negative input." << endl;
    cylinderType anotherCylinder(-7,-5);
    myCylinder.print();
}