//Ian Cronizer Final 12-5-22                                                    
#include<iostream>                                                              
#include <iomanip>
#include<array>                                                                 
using namespace std;
const size_t salaryRange = 11; 

int main()
{
    double sales, i = 0.09;
    cout << "Enter employee gross sales (-1 to end): ";
    cin >> sales;
    array<int, salaryRange> arrSalaries = {}; 
    cout << fixed;
    while (sales != -1)                                                         
    {                                                                           
        double salary = 200.0 + sales * i;                                      
        cout << setprecision(2) << "Employee Commission is $" << salary << endl;
        int x = static_cast<int>(salary) / 100;                                 
        ++arrSalaries[(x < 10 ? x : 10)];                                       
        cout << endl                                                            
             << "Enter employee gross sales (-1 to end):";                      
        cin >> sales;                                                           
    } 
        cout << "Employees in the range:";

    for (unsigned int i = 2; i < 10; ++i)
        cout << endl
             << "$"
             << i
             << "00-$"
             << i
             << "99 : "
             << arrSalaries[i];
    cout << endl
         << "Over $1000: "
         << arrSalaries[10]
         << endl;
}
