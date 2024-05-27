#include <iostream>
using namespace std;

int main () {
    int a = 21;
    int c;

    c = a;
    cout << "Line 1 - = Operatoer, value of c = : " << c << endl;

    c += a;
    cout << "Line 2 - += Operator, value of c = : " << c << endl;

    c -= a ;
    cout << "Line 3 - -= Operator , value of c = : " << c << endl;

    c *= a ;
    cout << "Line 4 - *= Operators , value of c = : " << c << endl;

    c /= a;
    cout << "Line 5 - /= Operators , value of c = : " << c << endl;

    c = 200;
    c %= a;
    cout << "Line 6 - %= Operators, value of c = :" << c << endl;

    c <<= 2;
    cout << "Line 7 - <<= Operators , value of c = :" << c <<endl;

    c >>= 2;
    cout << "Line 8 - >>= Operators, value of c = : " << c << endl;

    c &= 2;
    cout << "Line 9 - &= Operators, value of c :" << c << endl;

    c ^= 2;
    cout<< "Line 10 - ^= Operators , value of c : " << c << endl;

    c |= 2;
    cout << "Line 11 - |= Operator, value of c = : " << endl ;

    return 0;

}
