//Ian Cronizer 6.12 12/05/21
#include<iostream>
#include<iomanip>
#include <string>

//I know i should have used switch, but it was right there on the edge for me
double car(double hours)
{
	//calculate under 3
	if (hours <= 3)
	{
		return 20;
	}
	//calculate under anything over 50 under 24 hours = 50
	else if (hours >=9 && hours <= 24)
	{
		return 50;
	}
	//calculate over 24 hours
	else if(hours > 24)
	{

		return (hours - 3) * 5 + 70;

	}
	//calculate number before it hits a pay limit 
	else
	{

			return (hours - 3) * 5 + 20;

	}
}

int main() 
{
	//get input
	double hours, hours2, hours3;
	std::cout << "Enter the number of hours Car 1: ";
	std::cin >> hours;
	std::cout << "Enter the number of hours Car 2: ";
	std::cin >> hours2;
	std::cout << "Enter the number of hours Car 3: ";
	std::cin >> hours3;
	std::cout << "Car     Hours      Charge" << std::endl;
	//define result
	double result = car(hours);

	std::cout << "2" << std::setw(10) << hours << std::setw(14) << result << std::endl;
	//since function car can only take 1 variable, we must change it here
	hours = hours2;
	double result2 = car(hours);
	//cout result2
	std::cout << "2" << std::setw(10) << hours << std::setw(14) << result2 << std::endl;
	//since function car can only take 1 variable, we must change it here
	hours = hours3;
	double result3 = car(hours);
	//cout result3
	std::cout <<"3" << std::setw(10) << hours << std::setw(14) << result3;
    std::cout << std::endl;
}
