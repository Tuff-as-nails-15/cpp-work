#include<iostream>
#include<string>
using namespace std;

void Caesar()
{
char message[100], ch;
int i, key;

cout << "Enter a message to encrypt: ";
cin.getline(message, 50);
cout << "Enter key: ";
cin >> key;

for(i=0;i<message[i];i++)
{
ch = message[i];

if(ch >= 'a' && ch <= 'z')
ch += key;

message[i] = ch;
}

cout << "Encrypted message: " << message;
   
}

void Subst()
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

    //outputs the alphaIndexed char
    cout << subst[alphaIndex];
}
else
cout << ' ';
message[i] = ch; 
}
}
int main()
{
    Subst();
    //Caesar();
    return 0;
}
