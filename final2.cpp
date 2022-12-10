//Ian Cronizer Final 12-5-22  
#include<iostream>
#include<string>
using namespace std;

//function to decrypt caesar cipher
void unCaesar()
{
//declarations 
char message[100], input;
int i, key;

//prompt
cout << "Enter a message to decrypt: ";
//input
cin.getline(message, 100);
//prompt
cout << "Enter key: ";
//input
cin >> key;

//for loop to automate decryption 
for(i=0;i<message[i];i++){
//switches input to message to be changed
input  = message[i];

//for within alpha
if( input >= 'a' &&  input <= 'z')
{
input  -= key;

//when cipher extends past alpha
if( input < 'a')
{
input +=26  ;
}
}
//switches back to be displayed
message[i] = input; 
}
//output
cout << "Decrypted message: " << message;
}

void Caesar()
{
//declarations   
char message[50],input;
int i, key;

//prompt
cout << "Enter a message to encrypt: ";
//input
cin.getline(message, 50);
//prompt
cout << "Enter key: ";
//input
cin >> key;

//for loop to automate decryption
for(i=0;i<message[i];i++)
{
//switches message to input to be changed
input = message[i];

//for within alpha
if( input>= 'a' &&  input<= 'z')
input += key;

//when cipher extends past alpha
if( input> 'z'){
input -=26;
}
//switches back to be displayed
message[i] =input;
}

//output
cout << "Encrypted message: " << message;
   
}

//for decrypting substitution cipher
void unSubst()
{
//declarations
char message[50], input;
int i, key;
string alpha = "abcdefghijklmnopqrstuvwxyz";
string subst = "qwertyuiopasdfghjklzxcvbnm";

//promp
cout << "Enter a message to decrypt: ";
//input
cin.getline(message, 50);

//output
cout << "Encrypted message: ";
//for loop to automate cipher
for(i=0;i<message[i];i++)
{
//switches message to input for automation
input = message[i];

//while in alpha change sub back to alpha 
if( input>= 'a' && input <= 'z')
{
    int subIndex;
    for (int i = 0; i < 26; i++)
    if ( input== subst[i])
    subIndex = i;
    cout << alpha[subIndex];
}
//while out of alpha output blank line
else
cout << ' ';
//revert back to be output
message[i] = input;
}
//flush buffer
cout << endl;
}

void Subst()
{
//declarations
char message[50], input;
int i, key;
string alpha = "abcdefghijklmnopqrstuvwxyz";
string subst = "qwertyuiopasdfghjklzxcvbnm";

//promp
cout << "Enter a message to encrypt: ";
//input
cin.getline(message, 50);

//output
cout << "Encrypted message: ";
//for loop to automate cipher
for(i=0;i<message[i];i++)
{
input = message[i];

//while in alpha switch from alpha to sub 
if( input>= 'a' && input <= 'z')
{
    int alphaIndex;
    for (int i = 0; i < 26; i++)
    if ( input== alpha[i])
    alphaIndex = i;
    cout << subst[alphaIndex];
}
//if not in alpha output blank line
else
cout << ' ';
//switch back for output
message[i] = input;
}
//flush buffer
cout << endl;
}
int main()
{
//delcarations
char a;
//prompt
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
//input
cin >> a;
cin.ignore();
//switch statement for above prompt and input
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
