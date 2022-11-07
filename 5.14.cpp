//Ian Cronizer 5.14 11/03/22
#include <iostream>

int main() {
    //Basic for loop for the first shape
    for (int a {1}; a <= 10; a++)
    {
        //Putting * first to make this one right sided
        for (int b {1}; b <= a; b++)
        {
            std::cout << "*";
        }
        //white space loop
        for (int b = a + 1; b <= 10; b++)
        {
            std::cout << " ";
        }
        std::cout << '\n';
    }
    //Basic for loop for the second shape
    for (int a {1}; a <= 10; a++)
    {
        //Putting * first to make this one right sided
        for (int b {1}; b <= (11 - a); b++)
        {
            std::cout << "*";
        }
        //white space loop
        for (int b = (11 - a) + 1; b <= 10; b++)
        {
            std::cout << " ";
        }
        std::cout << '\n';
    }
    //Basic for loop for the third shape
    for (int a {1}; a <= 10; a++)
    {
        //white space loop
        for (int b {1}; b <= a; b++)
        {
            std::cout << " ";
        }
        //Putting * second to make this one left sided
        for (int b = a; b <= 10; b++)
        {
            std::cout << "*";
        }
        std::cout << '\n';
    }
    //Basic for loop for the fourth shape
    for (int a {1}; a <= 10; a++)
    {
        //white space loop
        for (int b {1}; b <= (11 - a); b++)
        {
            std::cout << " ";
        }
        //Putting * second to make this one left sided
        for (int b = (11 - a); b <= 10; b++) {
            std::cout << "*";
        }
        std::cout << '\n';
    }
}

