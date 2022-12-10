#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int userNumbers[]{1,2,3,1,1};

    for (const int &n : userNumbers) 
    {
    //cout << n << "  ";
    }
    int* end = userNumbers + 6;
    std::sort(userNumbers, end);
    bool containsDuplicates = (std::unique(userNumbers, end) != end);
      for (const int &n : userNumbers) {
    cout << n << "  ";
  }
}
  int numbers[5];

  cout << "Enter 5 numbers: " << endl;

  //  store input from user to array
  for (int i = 0; i < 5; ++i) {
    cin >> numbers[i];
  }

