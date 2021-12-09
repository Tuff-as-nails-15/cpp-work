//Ian Cronizer 6.52 12/05/21
#include<iostream>
#include <thread>
using namespace std;

//make a class template
template <class x>

//function for getting max
x maximum(x v1, x v2)
{
	
	if (v1 > v2)
	{
		return v1;
	}

	else
	{
		return v2;
	}
	return 0;
}

int main()
{
	//gets in and out for int
	int a, b;
	cout << "Enter a number 1: ";
	cin >> a;
	cout << "Enter a number 2: ";
	cin >> b;
	cout << "The max number is: " << maximum(a, b)<< endl;
	cout << "please wait: ";

	//waits 3 seconds
	std::this_thread::sleep_for(std::chrono::milliseconds(3000));

	//clears the consol
	cout << "\033[2J\033[1;1H";

	//gets in and out for char
	char c, d;
	cout << "Enter a char 1: ";
	cin >> c;
	cout << "Enter a char 2: ";
	cin >> d;
	cout << "The max char is: " << maximum(c, d) << endl;
	cout << "please wait: ";

	//waits 3 seconds
	std::this_thread::sleep_for(std::chrono::milliseconds(3000));


	//clears the consol
	cout << "\033[2J\033[1;1H";

	//gets in and out for double
	double e, f;
	cout << "Enter a double 1: ";
	cin >> e;
	cout << "Enter a double 2: ";
	cin >> f;
	cout << "The max double is: " << maximum(e, f);

}
