#include<iostream>
#include<iomanip>
using namespace std;

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
	cout << "Input Side 1: ";
	cin >> A;
	//clears the consol
	cout << "\033[2J\033[1;1H";
	//get input for side 2
	cout << "Input Side 2: ";
	cin >> B;
	//clears the consol
	cout << "\033[2J\033[1;1H";
	//output the answer
	cout << "Your Hypotenuse is the square root of: " << hyp(A, B);
}
