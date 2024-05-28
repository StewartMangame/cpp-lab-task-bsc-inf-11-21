#include <iostream>
using namespace std;


void SwapNumbers(int& ref1, int& ref2) {
    int temp = ref1;
    ref1 = ref2;
    ref2 = temp;
}

int main() {
    
    int varA = 25;
    int varB = 100;

    cout << "Before swapping: " << varA << endl;
    cout << "Before swapping: " << varB << endl;

    SwapNumbers(varA, varB);

    cout << "After swapping: " << varA << endl;
    cout << "After swapping: " << varB << endl;

    return 0;
}