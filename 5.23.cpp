//Ian Cronizer 5.23 11/03/22
#include<iostream>
#include<iomanip>
#include <fstream>
#include <string>

int main() {

    //Basic for loop for the first top
    for (int a {1}; a <= 9; a++)
    {
        std::cout << "# ";
    }
    std::cout << std::endl;
            for (int a {1}; a <= 7; a++)
            {
                std::cout << "#";
                //white space loop
                for (int b {1}; b <= a; b++)
                {
                    std::cout << " ";
                }
                //Putting * second to make this one left sided
                for (int b = a; b <= 6; b++)
                {
                    std::cout << "*";
                }

                //Putting * second to make this one left side
                for (int b = a; b <= 7; b++)
                {
                    std::cout << "*";
                }
                //using the white space loop to make the outside straight
                for (int b {1}; b <= a; b++)
                {
                    std::cout << " ";
                }
                std::cout << "#";
                std::cout << '\n';
            }
        for (int a {1}; a <= 6; a++)
        {

            //white space loop
            std::cout << "#";
            for (int b {1}; b <= (6 - a); b++)
            {
                std::cout << " ";
            }
            //Putting * second to make this one left sided
            for (int b = (6 - a); b <= 6; b++) {
                std::cout << "*";
            }
            //Putting * second to make this one left sided
            for (int b = (6 - a); b <= 7; b++) {
                std::cout << "*";
            }
            //using the white space loop to make the outside straight
            for (int b {1}; b <= (6 - a); b++)
            {
                std::cout << " ";
            }
            std::cout << "#";
            std::cout << std::endl;
        }
        //Basic for loop for the first bottom
        for (int a {1}; a <= 9; a++)
        {
            std::cout << "# ";
        }
        std::cout << std::endl;

}
