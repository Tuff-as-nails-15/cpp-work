#include<iostream>

int boxVol(int l = 1, int w =2, int h = 3);

int main()
{
	std::cout << boxVol(1,2,3) << std::endl;
	std::cout << boxVol(1,2) << std::endl;
	std::cout << boxVol(1) << std::endl;
	std::cout << boxVol() << std::endl;
}

int boxVol(int l, int w, int h)
{
	return l * w * h;
}

