//Ian Cronizer 6.33 11/15/22
#include<iostream>
void wagger(int& bank, int& t)
{
        
    std::cout << "Enter a wagger: ";
    std::cin >> bank;
	std::cout << bank << std::endl;
	t= t - bank;
}

int main() 
{
 int bank;
 int t=1000;
 wagger(bank,t);
 std::cout << bank << std::endl;
 std::cout << t << std::endl;
}
