//Ian Cronizer 7.13 12/9/22
#include <iostream>
#include <iomanip>
#include <array>
#include <bits/stdc++.h>
using namespace std;

//sets size of array
const size_t arraySize = 20;

//main function
int main()
{
    //declarations
    array<int, arraySize> data = {};
    size_t j = 0;
    int value;

    //for loop that runs until data is sufficient
    for (size_t i = 0; i < data.size(); ++i)
    {
        //prompt
        cout << "[" << i + 1 << ":20] Enter value between 10 and 100: ";
        //input
        cin >> value;

        //checks validity of data entered
        if ((value >= 10) && (value <= 100))
        {
                data[j++] = value;
        }
        //if invalid warn user and remain at increment
        else
        {
            cout << "Warning please enter a number between 10 and 100: " << endl;
            --i;
        }
    }

//clever way to check dupes with c++ using hash tables
map<int  ,int> hm;
for(int i = 0; i < sizeof(data)/sizeof(data[0]); i++) 
{ 
hm.insert({data[i], i});  
}
//output
cout << "Inputs without duplicates" << endl;
for (auto const &pair: hm) {
cout << pair.first << " ";
}
cout << endl;
    return 0;
}
