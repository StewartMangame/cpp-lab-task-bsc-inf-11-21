#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    Rectangle rect;
    float length;
    float width;

    
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;


    rect.setLength(length);
    rect.setWidth(width);

    cout << "The area of the rectangle is: " << rect.area() <<endl;

    float length2;
    float width2;
    cout << "Enter the length of the second rectangle: ";
    cin >> length2;
    cout << "Enter the width of the second rectangle: ";
    cin >> width2;
    Rectangle rect2(length2, width2);
	
	cout << "The area of the second rectangle is: " << rect2.area() <<endl;



    return 0;
}


