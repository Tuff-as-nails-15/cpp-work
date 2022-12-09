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


    //array created to store data
    array <char, 50> encryptedData{};

    int alphaIndex;
    int caesarIndex;
    int shift = 0;


    for (int i = 0; i < 26; i++)
    if (clearText[0] == alpha[i])
    alphaIndex = i;
    //cout << alphaIndex << endl;
    caesarIndex = alphaIndex + shift;
    //cout << alpha[caesarIndex] << endl;
    encryptedData[0] = alpha[caesarIndex];
    //cout << encryptedData[0] << endl;

    //for(clearText.length()){
    for(int i = 0; i <=  clearText.length(); i++)
    {
    cout << encryptedData[i];
    }
}
