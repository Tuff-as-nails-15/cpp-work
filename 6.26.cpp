//Ian Cronizer 6.26 12/6/21
#include<iostream>
using namespace std;

double FtoC(double A)
{
	//The math for the conversion
	return((A - 32) * 5) / 9;
}


int main()
{
	//declare A
	double A;
	//prompt
	cout << "Enter Fahrenheit: ";
	//get input
	cin >> A;
	//clears the consol
	cout << "\033[2J\033[1;1H";
	//output
	cout << "The conversion to Celsius is: " << FtoC(A);
}
