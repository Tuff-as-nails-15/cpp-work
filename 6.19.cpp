//Ian Cronizer 6.26 11/9/22
#include<iostream>
#include<iomanip>
#include<cmath>

int hyp(int A, int B)
{
	//square both numbers and add them
	int result = A * A + B * B;
	//return the equation
	return result;
}


int main()
{
	//define variables
	int A, B;
	//get input for side 1
	std::cout << "Input Side 1: ";
	std::cin >> A;
	//clears the consol
	std::cout << "\033[2J\033[1;1H";
	//get input for side 2
	std::cout << "Input Side 2: ";
	std::cin >> B;
	//clears the consol
	std::cout << "\033[2J\033[1;1H";
	//output the answer
	std::cout << "Your Hypotenuse is : " << sqrt(hyp(A, B));
}
