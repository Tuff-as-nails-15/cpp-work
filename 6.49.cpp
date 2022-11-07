//Ian Cronizer 6.49 12/09/21
#include<iostream>
using namespace std;

//Function for Value
int Val(int x)
{
	//triple x
	x = x * 3;
	return x;
}

//Function for Reference
int Ref(int &x)
{
	//triple x
	x = x*3;
	return x;
}

//Prompt, get input and output fnuctions 
int main()
{
	//declare x
	int x;
	//prompt
	cout << "input x: ";
	//input
	cin >> x;

	//output 
	cout << "x tripled: " << Val(x) << endl;
	cout << "x: " << x << endl;
	cout << "x tripled: " << Ref(x) << endl;
	cout << "x: " << x << endl;
}
