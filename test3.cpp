// C++ approach                                                                 
#include <bits/stdc++.h>                                                        
using namespace std;                                                            
int main() {                                                                    
int p;
int ar[] = {p};                                             
cout << "enter int: ";
cin >> p;

map<int  ,int> hm;                                                              
for(int i = 0; i < sizeof(ar)/sizeof(ar[0]); i++) { // total = O(n*logn)        
hm.insert({ar[i], i});  //  time complexity for insert() in map O(logn)         
}                                                                               
cout <<"[";                                                                     
for (auto const &pair: hm) {                                                    
cout << pair.first << ", ";                                                     
}                                                                               
cout <<"]";                                                                     
}       
