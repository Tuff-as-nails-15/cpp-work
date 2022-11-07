//Ian Cronizer 9-7-22
// 2.24 Odd/Even
#include<iostream>

using namespace std;

int main()
{
    //declaring variables
    int number1, number2, sum;

    cout << "Input two different integers: \n";

    cout << "Hit Enter after each number: \n";
    cin >> number1 >> number2;

    //clears the consol
    cout << "\033[2J\033[1;1H";


    //determines what is odd/even and prints output
    if(number1 % 2 == 0)
        cout << "number one ("<< number1 <<") is even\n";
    if(number1 % 2 == 1)
        cout << "number one ("<< number1 <<") is odd\n";

    //determines what is odd/even and prints output
    if(number2 % 2 == 0)
        cout << "number two ("<< number2 <<") is even\n";
    if(number2 % 2 == 1)
        cout << "number two ("<< number2 <<") is odd\n";

    //stores the sum of userinputs as sum and outputs to user
    sum = number1 + number2;
    cout << "The sum of both integers is" << sum;

    //determines what is odd/even and prints output
    if(sum % 2 == 0)
        cout << "number two ("<< sum <<") is even\n";
    if(sum % 2 == 1)
        cout << "number two ("<< sum <<") is odd\n";

}
