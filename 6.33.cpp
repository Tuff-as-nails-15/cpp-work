//Ian Cronizer 6.29 11/9/22
#include<iostream>
using namespace std;

//a function to check if prime
bool PrimeNumCheck(int PrimeNumber) 
{
    //sets a flag to check the boolean
    bool isprimeflag = true;
    if( rand()% 2 == 0)
        cout << "number two ("<< PrimeNumber<<") is even\n";
    if( rand()% 2 == 1)
        cout << "number two ("<<  PrimeNumber<<") is odd\n";

    return isprimeflag;
}

int main() {
    //Declaration
    int PrimeNumber;
    bool isprimeflag;
    srand(time(0));
	std::cout << "hi";
    //clears the consol
    std::cout << "\033[2J\033[1;1H";
    //sends isprime to the function 
    isprimeflag = PrimeNumCheck(PrimeNumber);
    //Boolean to check if true and return an output
    if (isprimeflag == true)
    {
        std::cout << "Your number is prime" << rand();
    }
    else
    {
        std::cout  << "Your number is not prime";
    }
}
