#include <iostream>
#include "add.h"  // Header file created by the user

using namespace std;

int main()
{
	add1 n; // Creation of the object for class named add1
	Point p1(10, 15); // Creation of object for constructor
	/* The next statement prints the statement and calls the function add
	from the class add1 using object n and dot operator */
    cout << "The sum of 3 and 4 is "<<n.add(3,4)<<"\n";
    /* The next statement prints the statement and calls the function getX and getY
    from the class Point using object n and dot operator which is the constructor*/
    cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY();
    return 0;
}
