//Ian Cronizer 4.27 Palindromes (written in Vi editor) 10/27/22
#include<iostream>

int main()
{
//declare variable
int palindrome;

//prompt user
std::cout << "please enter a 5 digit integer: ";
//get input from user 
std::cin >> palindrome;

//splitting int into parts 
int left = palindrome/10000;
int left2 = palindrome%10000/1000;
int right = palindrome%10;
int right2 = palindrome%100/10;

//check if is palindrome or not
if(left == right && left2 == right2)
    std::cout << "palindrome";
else
    std::cout << "nope";
}
