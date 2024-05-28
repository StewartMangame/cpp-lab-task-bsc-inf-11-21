#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    int number;

    while (true)
    {
        string word;
        cout << "Enter an integer between 5 and 10 \n";
        getline(cin, word);
        stringstream ss(word);
        if (ss >> number && ss.eof())
        {
            if (number >= 5 && number <= 10)
            {
                cout << "Your input value " << (number) << "has been accepted" << '\n';
                break;
            }
            else
            {
                cout << "You entered " << number << ". "
                     << "please enter a number between 5 and 10" << '\n';
                getline(cin, word);
            }
        }
        else
        {
            cout << " sorry, you entered an valid number, please try again " << '\n';
            getline(cin, word);
        }
        // PRESS ENTER BEFORE ENTERING ANOTHER VALUE!!!!
    }
    return 0;
}
