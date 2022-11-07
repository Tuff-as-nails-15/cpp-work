//Ian Cronizer 4.26 11/2/21
#include<iostream>
using namespace std;

int main()
{	//declaring and getting input
	int Width, Height,counter=0,counter2=0;
	cout << "Enter the Width of the square (1-20): ";
	cin >> Width;

	cout << "Enter the Height of the square (1-20): ";
	cin >> Height;
	//first while loop to print the top
	while (counter <= Width-1)
	{
		cout << "*";
		counter++;
	}
	//new line and reset counter for next while loop
	cout << '\n';
	counter = 0;
	//while loop for sides with nested for loop for blank spaces 
	while (counter <= Height - 1)
	{
		cout << "*";

		for (int i = 0; i < Width - 2; i++)
		{
			cout << " ";
		}
		cout << "*" << '\n';
		counter++;
	}
	//reset counter for next while loop
	counter = 0;
	//copy of first while loop, probably could do this with just 2 with another nest but got lazy. 
	while (counter <= Width - 1)
	{
		cout << "*";
		counter++;
	}

/*each program is more fun than the last to make,
they all seem impossible before some hard work and some thinking.
it amazes me the things that i can make now. /*
}
