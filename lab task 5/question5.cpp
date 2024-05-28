#include <iostream>
using namespace std;

double areaOftriangle(double base, double height){
    double results = 0.5 * base * height;
   // cout << "the area of the triangle of" <<"base :"<< base << "and " <<"height :"<< height << "is" << results;
   return results;
}
double areaOfRectangle(double length, double width)
{
    double results =  length * width;
    //cout << "the area of the rectangle of"<< "length :" << length << "and " << "width :" << width << "is" << results;
    return results;
}
double areaOfSquare(double side)
{
    double results = side * side;
   // cout << "the area of the square of"<< "side :" << side <<"is" << results;
    return results;
}

int main(){
    int choice;
    double base, height, length, width, side;
    while(choice !=4){
    cout << "Please select the area of the shape to calculate \n";
    cout << "1. Square \n";
    cout << "2. Rectangle \n";
    cout << "3. Triangle \n";
    cout << "4. Quit Program \n";
    cout << "Enter selection : \n";
    cin >> choice;
    switch (choice){
        case 1 :
        cout << "Enter the length of the side of square: \n";
        cin >> side;
        cout << "area of the square: "<< areaOfSquare(side)<<'\n';
        break;
        case 2:
            cout << "Enter the length of the rectangle: \n";
            cin >> length;
            cout << "Enter the width of the rectangle: \n";
            cin >> width;
            cout << "area of the rectangle: " << areaOfRectangle(length, width) << '\n';
            break;
        case 3:
            cout << "Enter the base of the rectangle: \n";
            cin >> base;
            cout << "Enter the height of the rectangle: \n";
            cin >> height;
            cout << "area of the triangle: " << areaOftriangle(base, height) << '\n';
            break;
        case 4:
        cout <<"quit the program";    
    }
    }
    return 0;
}
