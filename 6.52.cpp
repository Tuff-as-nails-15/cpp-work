//Ian Cronizer 6.52 11/16/22
#include<iostream>
#include <thread>

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
	std::cout << "Enter a number 1: ";
	std::cin >> a;
	std::cout << "Enter a number 2: ";
	std::cin >> b;
	std::cout << "The max number is: " << maximum(a, b)<< std::endl;
	std::cout << "please wait: ";

	//waits 3 seconds
	std::this_thread::sleep_for(std::chrono::milliseconds(3000));

	//clears the consol
	std::cout << "\033[2J\033[1;1H";

	//gets in and out for char
	char c, d;
	std::cout << "Enter a char 1: ";
	std::cin >> c;
	std::cout << "Enter a char 2: ";
	std::cin >> d;
	std::cout << "The max char is: " << maximum(c, d) << std::endl;
	std::cout << "please wait: ";

	//waits 3 seconds
	std::this_thread::sleep_for(std::chrono::milliseconds(3000));


	//clears the consol
	std::cout << "\033[2J\033[1;1H";

	//gets in and out for double
	double e, f;
	std::cout << "Enter a double 1: ";
	std::cin >> e;
	std::cout << "Enter a double 2: ";
	std::cin >> f;
	std::cout << "The max double is: " << maximum(e, f);

}
