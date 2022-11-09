//Ian Cronizer 5.37 11/9/22
#include<iostream>
#include<iomanip>
#include<stdlib.h> 
using namespace std;


int main()
{
	//declare the variables
	int q, w, e, r, grade,grade1, grade2, grade3, grade4;

	//clears the consol
	std::cout << "\033[2J\033[1;1H";

	//prompt and input
	std::cout << "Does the globe warm?" << std::endl;
	std::cout << "1) yes" << std::endl << "2) no " << std::endl << "3) sometimes" << std::endl << "4) its gettin' there" << std::endl;
	std::cout << "Type: 1) 2) 3) 4)" << std::endl;
	cin >> q;
	std::cout << std::endl;

	//clears the consol
	std::cout << "\033[2J\033[1;1H";

	//prompt and input
	std::cout << "Is it your fault?" << std::endl;
	std::cout << "1) yes" << std::endl << "2) i hope not" << std::endl << "3) its everyones" << std::endl << "4) China" << std::endl;
	std::cout << "Type: 1) 2) 3) 4)" << std::endl;
	cin >> w;
	std::cout << std::endl;

	//clears the consol
	std::cout << "\033[2J\033[1;1H";

	//prompt and input
	std::cout << "Will you only answer 4?" << std::endl;
	std::cout << "1) yes" << std::endl << "2) i dont know yet" << std::endl << "3) China again" << std::endl << "4) all of the above" << std::endl;
	std::cout << "Type: 1) 2) 3) 4)" << std::endl;
	cin >> e;
	std::cout << std::endl;

	//clears the consol
	std::cout << "\033[2J\033[1;1H";

	//prompt and input
	std::cout << "Are Electric Vehicles the Answer?" << std::endl;
	std::cout << "1) yes" << std::endl << "2) No" << std::endl << "3) Remain ignorant" << std::endl << "4) Let the world Burn!" << std::endl;
	std::cout << "Type: 1) 2) 3) 4)" << std::endl;
	cin >> r;
	std::cout << std::endl;

	//clears the consol
	std::cout << "\033[2J\033[1;1H";


	//Calculate the grade
	if (q == 4)
	{
		grade1 = 25;
	}
	else 
	{
		grade1 = 0;
	}
	if (w == 4)
	{
		grade2 = 25;
	}
	else
	{
		grade2 = 0;
	}
	if (e == 1)
	{
		grade3 = 25;
	}
	else
	{
		grade3 = 0;
	}
	if (r == 3)
	{
		grade4 = 25;
	}
	else
	{
		grade4 = 0;
	}

	//output the grade 
	std::cout << "Your Grade is: " << grade1 + grade2 + grade3 + grade4 << "%";
}
