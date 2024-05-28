#include <iostream>
using namespace std;

int main()
{
    int numberOfElements = 0;
    int numberOfElements2 = 0;
    int *dynamicArray = nullptr;
    string *SdynamicArray = nullptr;

    cout << "Assign a value of dynamically allocated integer \n";
    cin >> numberOfElements;

    cout << "Assign a value of dynamically allocated string \n";
    cin >> numberOfElements2;

    dynamicArray = new int[numberOfElements];
    SdynamicArray == new string[numberOfElements2];

    cout << "the value of dynamically allocated integer is  " << numberOfElements << '\n';
    cout << "the value of dynamically allocated string is  " << numberOfElements2 << '\n';

    return 0;
}