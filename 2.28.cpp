//Ian Cronizer 9-7-22
// 2.28 Digits of an Integer
#include<iostream>

using namespace std;

int main()
{
    //declaring variables
    int number;

    //prompt user input
    cout << "please input a four digit integer: \n";;

    //user input is stored in variables
    cin >> number;

    cout << number << endl;

    cout << number % 10 << " ";
    cout << number /10 % 10 << " ";
    cout << number /100 % 10 << " ";
    cout << number /1000 % 10 << " ";

}
