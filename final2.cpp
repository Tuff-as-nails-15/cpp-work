#include <iostream>
#include <array>
using namespace std;

int main(int argc, char const *argv[])
{
    //Test                                                                      
    std::string clearText = "this is a test";                                   
    //std::cout << clearText[6] << std::endl;                                     
    //std::cout << clearText.length() << std::endl; 
    
    //Alphabets for encryption                                                  
    std::string alpha = "abcdefghijklmnopqrstuvwxyz";                           
    std::string subst = "qwertyuiopasdfghjklzxcvbnm";  
    
    //alphaIndex test
    int alphaIndex;
    for (int i = 0; i < 26; i++)
        if (clearText[0] == alpha[i])
            alphaIndex = i;
    //cout << alphaIndex << endl;
    //cout << subst[alphaIndex] << endl;   

    
    array <char, 50> encryptedData{};   

    encryptedData[0] = subst[alphaIndex];
    //cout << encryptedData[0] << endl;

    
    std::cout << "items before modification: ";
    for (char item: encryptedData )
        std::cout << item << " ";

    for (char &itemRef : encryptedData)
        itemRef *= subst[alphaIndex];
    std::cout << "\nitems after modification: ";

    for (char item: encryptedData)
        std::cout << item << " ";

    std::cout << std::endl;
}

