#include <iostream>
#include "rectangleType.h"
#include "boxType.h"

using namespace std;

int main()
{
    boxType myBox(1,8,1);
    myBox.print();
    cout << "Area is: " << myBox.getArea() << endl;
    return 0;
}

