//Ian Cronizer Final 12-5-22                                                    
#include<iostream>                                                              
#include<array>                                                                 
using namespace std;                                                            
                                                                                int main()
{
const size_t arraySize = 11;
array <int, arraySize> test = { 0,0,0,0,0,2,4,8,3,2,1};
cout << "Grade Distribution" << endl;

for (int i = 0; i < arraySize; i++)
{
    cout << test[i];
if (i == 0)
cout << " 0-9:";
else if (i == 10)
cout << " 100:";
else
cout << i * 10 << "-" << (i * 10) + 9 << ":";
for (int stars = 0; stars < test[i]; stars++)
cout << "*";
cout << endl;
}//end for
 //int x = static_cast<int>(salary) / 100;
 // ++arrSalaries[(x < 10 ? x : 10)];
}//end main
