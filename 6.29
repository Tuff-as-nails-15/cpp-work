//Ian Cronizer 6.29 12/05/21
#include<iostream>
using namespace std;

//a function to check if prime
bool PrimeNumCheck(int PrimeNumber) 
{
    //sets a flag to check the boolean
    bool isprimeflag = true;
    //for loop that checks for prime number
    for (int i = 2; i <= PrimeNumber / 2; i++) 
    {
        if (PrimeNumber % i == 0) 
        {
            isprimeflag = false;
            break;
        }
    }
    return isprimeflag;
}

int main() {
    //Declaration
    int PrimeNumber;
    bool isprimeflag;
    //Prompt
    cout << "Enter your Number: ";
    //input
    cin >> PrimeNumber;
    //clears the consol
    cout << "\033[2J\033[1;1H";
    //sends isprime to the function 
    isprimeflag = PrimeNumCheck(PrimeNumber);
    //Boolean to check if true and return an output
    if (isprimeflag == true)
    {
        cout << "Your number is prime";
    }
    else
    {
        cout  << "Your number is not prime";
    }
}
