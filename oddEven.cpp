#include<iostream>
#include<iomanip>
using namespace std; 
void arrayOdd()
{
	int arr[6] = {} ;
	int i,j;
	for(int i=0;i<6;i++)
        arr[i] = 2 * i ;
        //arr[i] = 2 * i + 1;
	for(int i=0;i<6;i++)
    {
        cout<< arr[i];
		cout<<endl;
    }
}
void arrayEven()
{
	int arr[6] = {} ;
	int i,j;
	for(int i=0;i<6;i++)
        //arr[i] = 2 * i ;
        arr[i] = 2 * i + 1;
	for(int i=0;i<6;i++)
    {
        cout<< arr[i];
		cout<<endl;
    }
}
int main() 
{  
	cout<<"Printing a 2D Array:\n";
    arrayEven();
    arrayOdd(); 
}

