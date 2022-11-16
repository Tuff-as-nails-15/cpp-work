//Ian Cronizer 6.33 11/15/22
#include<iostream>

//void function that prints heads or tails 
void coinFlip()
{
	//randomizes seed for rand 
    srand(time(0));
	//outputs the result of rand as heads or tails then flushes buffer
	std::cout << (rand() % 2 ? "Heads" : "Tails") << std::endl;
}

//main function that calls void function
int main()
{
	coinFlip();
	return 0;
}
