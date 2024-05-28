#include <iostream>
using namespace std;

int main()
{
    int rows;
    int column;
    double *dynamicArray = nullptr;
    double *SdynamicArray = nullptr;

    cout << " Enter the number of rows not exxciding 3 \n";
    cin >> rows;
    if (rows > 3)
    {
        cout << "Dimension exceeds maxmum allowed. Please try again \n ";
        cin >> rows;
    }

    cout << " Enter the number of column muxmum 3 \n";
    cin >> column;
    if (column > 3)
    {
        cout << "Dimension exceeds maxmum allowed. Please try again \n ";
        cin >> column;
    }
    dynamicArray = new double[rows];
    SdynamicArray = new double[column];

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < column; ++j)
        {
            cout << "Enter the value for element [ " << i << "][" << j << "] : \n";
            cin >> dynamicArray[i];
            cin >> SdynamicArray[j];
        }
    }

    cout << "values of elements in array \n";

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < column; ++j)
        {
            cout << dynamicArray[i] << ",";
            cout << SdynamicArray[j] << " ";
        }
        cout << endl;
    }
    delete[] dynamicArray;
    delete[] SdynamicArray;

    return 0;
}