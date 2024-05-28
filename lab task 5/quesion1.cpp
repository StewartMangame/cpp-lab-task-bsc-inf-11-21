#include <iostream>
#include <random>
using namespace std;

int main(){
    random_device rand;
    mt19937 gen(rand());
    uniform_int_distribution<>dis(0,11);
    int daysUnitExpiration = dis(gen);
    cout<<"The number of days remaining = : " <<daysUnitExpiration<<endl;

    if (daysUnitExpiration <= 10 && daysUnitExpiration > 5)
    {
        cout << "Your subscription will expire soon. Renew now!";
    }
    else if(daysUnitExpiration <= 5 && daysUnitExpiration >= 2)
        {
             cout << "Your subscription expires in " << daysUnitExpiration << "days" <<'\n';
             cout << "renew now and save 10%";
        }
        else if (daysUnitExpiration ==1){
            cout << "Your subscription expires within a day! \n";
            cout << "renew now and save 20%";
        }
        else if (daysUnitExpiration == 0)
        {
            cout << "your subscription has expired.";

        }
        else{
            cout << "you have an active subscription";
        }

            return 0;
        }