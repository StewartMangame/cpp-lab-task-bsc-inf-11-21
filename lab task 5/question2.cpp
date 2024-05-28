#include <iostream>
#include <random>
using namespace std;

int main()
{
    random_device rand;
    mt19937 gen(rand());
    uniform_int_distribution<> dis(0, 11);
    int daysUnitExpiration = dis(gen);
    cout << "The number of days remaining = : " << daysUnitExpiration << endl;

    switch (daysUnitExpiration){
        case 0:
        cout << "Your subscription has expired. \n";
        break;
        case 1:
            cout << "Your subscription expires within a day! \n";
            cout << "Renew and save 20%!";
            break;
        case 2 ... 5:
            cout << "Your subscription expires in :" <<daysUnitExpiration << "days"<<'\n';
            cout << "Renew now and save 10%!";
            break;
        case 6 ... 10:
            cout << "Your subscription expires soon Renew now! \n";
            break;
            default:
            cout << "You have an active subscription!";
            break;
    }

        return 0;
}