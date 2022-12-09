//Ian Cronizer Final 12-5-22                                                    
#include<iostream>                                                              
#include<array>                                                                 
using namespace std;                                                            
                                                                                
int main()                                                                      
{       
    //creates string for cypher 
    string clearText = "this is a test";
    //outputs 6th letter 0 index
    cout << clearText[6] << endl;
    //outputs length of text 
    cout << clearText.length() << endl;

    //two strings for cipher
    string alpha = "abcdefghijklmnopqrstuvwxyz";
    string subst = "qwertyuiopasdfghjklzxcvbnm";

    //outputs the alpha of the cleartext
    int alphaIndex;
    for (int i = 0; i < 26; i++)
    if (clearText[0] == alpha[i])
    alphaIndex = i;
    cout << alphaIndex << endl;

    //outputs the alphaIndexed char
    cout << subst[alphaIndex] << endl;

    //array created to store data
    array <char, 50> encryptedData{};

    encryptedData[0] = subst[alphaIndex];
    //outputs stored data
    cout << encryptedData[0] << endl;
}
