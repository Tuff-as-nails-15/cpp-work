#include<iostream>

int main()
{
    //declare variables 
    int first, second, third, fourth;
    //prompt user
    std::cout << "Enter the First Digit to decypher";
    //get user input
    std::cin >> first;
    //prompt user
    std::cout << "Enter the Second Digit to decypher";
    //get user input
    std::cin >> second;
    //prompt user
    std::cout << "Enter the Third Digit to decypher";
    //get user input
    std::cin >> third;
    //prompt user
    std::cout << "Enter the Frouth Digit to decypher";
    //get user input
    std::cin >> fourth;

    //output decyphered 
    std::cout << first+3 << second+3 << third+3 << fourth+3;
}
