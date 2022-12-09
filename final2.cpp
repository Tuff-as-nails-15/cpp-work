//Ian Cronizer Final 12-5-22  
#include<iostream>
#include<string>
using namespace std;

void unCaesar()
{
char message[100], input;
int i, key;

cout << "Enter a message to decrypt: ";
cin.getline(message, 100);
cout << "Enter key: ";
cin >> key;

for(i=0;i<message[i];i++){
input  = message[i];

if( input >= 'a' &&  input <= 'z')
{
input  -= key;

if( input < 'a')
{
input +=26  ;
}
}
message[i] = input; 
}
cout << "Decrypted message: " << message;
}

void Caesar()
{
char message[50],input;
int i, key;

cout << "Enter a message to encrypt: ";
cin.getline(message, 50);
cout << "Enter key: ";
cin >> key;

for(i=0;i<message[i];i++)
{
input = message[i];

if( input>= 'a' &&  input<= 'z')
input += key;

if( input> 'z'){
input -=26;
}
message[i] =input;
}

cout << "Encrypted message: " << message;
   
}

void unSubst()
{
char message[50], input;
int i, key;
string alpha = "abcdefghijklmnopqrstuvwxyz";
string subst = "qwertyuiopasdfghjklzxcvbnm";

cout << "Enter a message to decrypt: ";
cin.getline(message, 50);

cout << "Encrypted message: ";
for(i=0;i<message[i];i++)
{
input = message[i];

if( input>= 'a' && input <= 'z')
{
    //outputs the alpha of the cleartext
    int subIndex;
    for (int i = 0; i < 26; i++)
    if ( input== subst[i])
    subIndex = i;
    //outputs the alphaIndexed char
    cout << alpha[subIndex];
}
else
cout << ' ';
message[i] = input;
}
cout << endl;
}

void Subst()
{
char message[50], input;
int i, key;
string alpha = "abcdefghijklmnopqrstuvwxyz";
string subst = "qwertyuiopasdfghjklzxcvbnm";

cout << "Enter a message to encrypt: ";
cin.getline(message, 50);

cout << "Encrypted message: ";
for(i=0;i<message[i];i++)
{
input = message[i];

if( input>= 'a' && input <= 'z')
{
    //outputs the alpha of the cleartext
    int alphaIndex;
    for (int i = 0; i < 26; i++)
    if ( input== alpha[i])
    alphaIndex = i;
    //outputs the alphaIndexed char
    cout << subst[alphaIndex];
}
else
cout << ' ';
message[i] = input;
}
cout << endl;
}
int main()
{
char a;
cout << "Welcome to the Encoder/Decoder!";
cout << endl;
cout << "Enter Your Choice: ";
cout << endl;
cout << "1: encrypt substitution";
cout << endl;
cout << "2: encrypt caesar";
cout << endl;
cout << "3: decrypt substitution";
cout << endl;
cout << "4: decrypt caesar";
cout << endl;
cin >> a;
cin.ignore();
switch (a) {
case '1': {
Subst();
break;
}
case '2': {
Caesar();
break;
}
case '3': {
unSubst();
break;
}
case '4': {
unCaesar();
break;
}
}
return 0;
}
