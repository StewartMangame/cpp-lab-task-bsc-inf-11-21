#include <iostream>
#include <string>
using namespace std;

int main()
{
    string Element[8] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
    for (int x = 0; x <= sizeof(Element) / sizeof(Element[0]); x++)
    {
        string firstchar = Element[x].substr(0, 1);
        if (firstchar == "B")
        {
            cout << Element[x] << '\n';
        }
    }

    return 0;
}