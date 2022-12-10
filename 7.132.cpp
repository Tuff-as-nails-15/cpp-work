// C++ program to demonstrate the use of std::unique
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
vector<int> v = { 1, 2, 3, 3, 3, 10, 1, 2, 3, 7, 7, 8 };
vector<int>::iterator ip;

// Sorting the array
std::sort(v.begin(), v.end());

// Using std::unique
ip = std::unique(v.begin(), v.begin() + 12);


v.resize(std::distance(v.begin(), ip));
// Displaying the vector after applying std::unique
for (ip = v.begin(); ip != v.end(); ++ip) {
cout << *ip << " ";
}
return 0;
}
