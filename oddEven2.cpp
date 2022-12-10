//Ian Cronizer odd/even 12/9/22
#include<iostream>
#include<iomanip>
using namespace std; 


int main() 
{  
    //prints what program is
	cout<<"Printing a 2D Array:\n";
    //declarations
    int arr[6] = {} ;
    int arr2[6] = {} ;
    int arr3[6] = {} ;
	int i;

    //for loop for odds
	for(int i=0;i<6;i++)
        arr[i] = 2 * i + 1;

    //for loop for total 
    for(int i=0;i<6;i++)
        arr3[i] = (2 * i + 1) + (2 * i) ;

    //for loop for evens 
    for(int i=0;i<6;i++)
        arr2[i] = 2 * i;

    //shows what the output represents
        cout << "odds " << "evens " << " total" << endl;
    //loop for output
	for(int i=0;i<6;i++)
    {
        //output
        cout<< arr[i] << setw(5) << arr2[i] << setw(7) << arr3[i];
        //flushes buffer and prints a new line
		cout<<endl;
    }
}

