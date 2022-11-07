//Ian Cronizer 4.26 Square of Asterisk 10/28/22
#include<iostream>

int main()
{
    //declare variables 
    int n, a, b;
    //prompt user 
    std::cout<< "Enter a number for how big you want the square to be" << std::endl;
    //get user input
    std::cin >> n;
    
    //while loop for top line
    while(a < n)
    {
    std::cout << "*";
    a++;
    }
    
    //resets a and prints blank line
    a = 0;
    std::cout << std::endl;
    
    //while loop for * and ' ' for body 
    while(a < n)
    {
        std::cout << "*";
        while(b < n-2) 
        {
            std::cout << " ";
            b++;
        }
        b = 0;
        std::cout << "*";
        std::cout << std::endl;
        a++;
    }

    //resets for next loop
    a=0;

    //last loop for bottom line
    while(a < n)
    {
       std::cout << "*";
       a++;
    }

}
