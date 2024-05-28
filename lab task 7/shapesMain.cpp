#include <iostream>
#include "Shapes.h"

using namespace std;

int main() {
    using namespace shapes;
    int choice;
    float side, base, height, radius;

    do {
        cout << "Choose an option:" << endl;
        cout << "1. Calculate the area of a square" << endl;
        cout << "2. Calculate the area of a triangle" << endl;
        cout << "3. Calculate the area of a circle" << endl;
        cout << "4. Quit" << endl;
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "Enter the side length of the square: ";
                cin >> side;
                Square square(side);
                cout << "The area of the square is: " << Area::calculateArea(square) << endl;
                break;
            }
            case 2: {
                cout << "Enter the base and height of the triangle: ";
                cin >> base >> height;
                Triangle triangle(base, height);
                cout << "The area of the triangle is: " << Area::calculateArea(triangle) << endl;
                break;
            }
            case 3: {
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                Circle circle(radius);
                cout << "The area of the circle is: " << Area::calculateArea(circle) << endl;
                break;
            }
            case 4:
                cout << "Quitting program." << endl;
                break;
            default:
                cout << "Invalid option. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
