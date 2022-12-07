//Ian Cronizer 7.10 11/17/22
#include<iostream>
#include<array>
#include<iomanip>
using namespace std;

int main()
{
    // const variable for array size
    const size_t arraySize = 11;   
    
    //declare array with size 11
    array<int , arraySize> salaries{}; 
    
    // declaring sales and i 
    double sales;
    double i{0.09}; 

    //prompt user
    std::cout << "Enter Hourly Wage: ";
    cout << "Enter employee gross sales (-1 to end)";
    
    //this fixes the output of the numbers
    cout << fixed;
    
    //user input
    cin >> sales;

    //while loop
    while (sales != -1)
    {
        salaries[(200.0 + sales * i)/100]++;
        
        //outputs the cash to the user
        cout << setprecision(2) << "Employee Commission is $" << 200.0 + sales * i << endl;
    
        //prompt
        cout << "\nEnter employee gross income: ";

        //user input
        cin >> sales;
    }

    //output for showing range
    cout << "Employees in the range";

    //for loop for final range output
    for (size_t i {2}; i <10; ++i) 
        cout << "\n$"<< i << "00-$" << i << "99: " << salaries[i];

        cout << "\nOver $1000:" << salaries[10] << endl;
 
}
