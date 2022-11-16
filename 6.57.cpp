//Ian Cronizer 6.57 12/09/21
#include<iostream>
#include <thread>
#include <chrono>
#include <random>

int multiply()
{
	//title of action
	std::cout << "Multiply these numbers!" << std::endl;

	int x = rand() % 10 + 1;
	int y = rand() % 10 + 1;
	std::cout << x << " times " << y << std::endl;
	int answer = x*y;
	int attempt, check;
	while(check != 5)
	{
	std::cin >> attempt;
	if(attempt == answer)
	{
	std::cout << "correct" << std::endl;
	check = 5;
	}
	else 
	{
	std::cout << "try again" << std::endl;
	}
	}
	return answer;

}

int main()
{

		// initialize random seed: 
		srand(time(0));

		//declare variables and rand
		int answer;
	
		//calls function
		multiply();


}
