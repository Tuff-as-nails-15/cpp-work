//Ian Cronizer 6.26 11/9/22
#include<iostream>

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
	std::cout << "Enter Fahrenheit: ";
	//get input
	std::cin >> A;
	//clears the consol
	std::cout << "\033[2J\033[1;1H";
	//output
	std::cout << "The conversion to Celsius is: " << FtoC(A);
}
