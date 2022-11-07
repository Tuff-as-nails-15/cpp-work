//Ian Cronizer 5.37 12/01/21
#include<iostream>
#include<iomanip>
#include<stdlib.h> 
using namespace std;


int main()
{
	//declare the variables
	int q, w, e, r, grade,grade1, grade2, grade3, grade4;

	//prompt and input
	cout << "Does the globe warm?" << endl;
	cout << "1) yes" << endl << "2) no " << endl << "3) sometimes" << endl << "4) its gettin' there" << endl;
	cout << "Type: 1) 2) 3) 4)" << endl;
	cin >> q;
	cout << endl;

	//clears the consol
	cout << "\033[2J\033[1;1H";

	//prompt and input
	cout << "Is it your fault?" << endl;
	cout << "1) yes" << endl << "2) i hope not" << endl << "3) its everyones" << endl << "4) China" << endl;
	cout << "Type: 1) 2) 3) 4)" << endl;
	cin >> w;
	cout << endl;

	//clears the consol
	cout << "\033[2J\033[1;1H";

	//prompt and input
	cout << "Will you only answer 4?" << endl;
	cout << "1) yes" << endl << "2) i dont know yet" << endl << "3) China again" << endl << "4) all of the above" << endl;
	cout << "Type: 1) 2) 3) 4)" << endl;
	cin >> e;
	cout << endl;

	//clears the consol
	cout << "\033[2J\033[1;1H";

	//prompt and input
	cout << "Are Electric Vehicles the Answer?" << endl;
	cout << "1) yes" << endl << "2) No" << endl << "3) Remain ignorant" << endl << "4) Let the world Burn!" << endl;
	cout << "Type: 1) 2) 3) 4)" << endl;
	cin >> r;
	cout << endl;

	//clears the consol
	cout << "\033[2J\033[1;1H";


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
	cout << "Your Grade is: " << grade1 + grade2 + grade3 + grade4 << "%";
}
