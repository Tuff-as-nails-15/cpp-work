//Ian Cronizer Final 12-5-22
#include<iostream>
#include<array>
using namespace std;

int main()
{
    //Test
    std::string clearText = "this is a test";
    std::cout << clearText[6] << std::endl;
    std::cout << clearText.length() << std::endl;

    //Alphabets for encryption
    std::string alpha = "abcdefghijklmnopqrstuvwxyz";
    std::string subst = "qwertyuiopasdfghjklzxcvbnm";

    //alphaIndex test
    int alphaIndex;
    for (int i = 0; i < 26; i++)
        if (clearText[0] == alpha[i])
            alphaIndex = i;
    cout << alphaIndex << endl;    
    cout << subst[alphaIndex] << endl;

    array <char, 50> encryptedData{};
    encryptedData[0] = subst[alphaIndex];
    cout << encryptedData[0] << endl;

    //ceaserIndex test
    int caesarIndex;
    int shift = 3;
    for (int i = 0; i < 26; i++)
        if (clearText[0] == alpha[i])
            alphaIndex = i;
    cout << alphaIndex << endl;
    //caesarIndex = alphaIndex + shift;
    caesarIndex = (alphaIndex + shift) % 26;
    cout << alpha[caesarIndex] << endl;
    encryptedData[0] = alpha[caesarIndex];
    cout << encryptedData[0] << endl;
    
}


