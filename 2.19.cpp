//Ian Cronizer 9-7-22
// 2.19 arithmatic

#include<iostream>
using namespace std;

int main()
{
    //declaring variables
    int number1, number2, number3, smallest, largest;

    //prompt user input
    cout << "Input three different integers: \n";
    cout << "Hit Enter after each number: \n";

    //user input is stored in variables
    cin >> number1 >> number2 >> number3;

    //clears the consol
    cout << "\033[2J\033[1;1H";

    //output users input
    cout << "Number one is: " << number1;
    cout << "\nNumber two is: " << number2;
    cout << "\nNumber three is: " << number3 << endl;

    //output the results of the arithmatic
    cout << "\nsum is " << number1 + number2 + number3;
    cout << "\naverage is " << (number1 + number2 + number3) / 3;
    cout << "\nproduct is " << number1 * number2 * number3;

    //find the smallest number
    smallest = number1;
        if(number2 < smallest)
                smallest = number2;
        if(number3 < smallest)
                smallest = number3;
    cout << "\nsmallest is ";
    cout << smallest;

    //find the largest number
    largest = number1;
        if(number2 > largest)
                largest = number2;
        if(number3 > largest)
                largest = number3;
    cout << "\nlargest is ";
    cout << largest << endl;

}
