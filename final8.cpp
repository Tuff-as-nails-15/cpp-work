#include<iostream>
using namespace std;
int main()
{
char message[100], ch;
int i, key;
string alpha = "abcdefghijklmnopqrstuvwxyz";
string subst = "qwertyuiopasdfghjklzxcvbnm";

cout << "Enter a message to encrypt: ";
cin.getline(message, 100);
//cout << "Enter key: ";
//cin >> key;

for(i=0;i<message[i];i++)
{
ch = message[i];

if(ch >= 'a' && ch <= 'z')
{
    //outputs the alpha of the cleartext                                        
    int alphaIndex;                                                             
    for (int i = 0; i < 26; i++)                                                
    if (ch == alpha[i])                                                         
    alphaIndex = i;                                                             
    //cout << alphaIndex << endl;                                                 

    //cout << ch;
    //outputs the alphaIndexed char                                             
    cout << subst[alphaIndex];                                                  
    //ch += subst[alphaIndex];
}
else
cout << ' ';
message[i] = ch;
}

return 0;
}
