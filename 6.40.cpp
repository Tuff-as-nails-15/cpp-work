// Fig. 6.40: fig06_25.cpp                                                      
// Recursive function factorial.                                                
#include <iostream>                                                             
#include <iomanip>                                                              
                                                                                
unsigned long factorial(unsigned long); // function prototype                   
                                                                                
int main()
{                                                                    
   // calculate the factorials of 0 through 10                                  
   for (unsigned int counter{0}; counter <= 10; ++counter)
   {                    
      std::cout << counter << "! = " << factorial(counter) << std::endl;
   }                                                                            
}                                                                               
                                                                                
// recursive definition of function factorial                                   
unsigned long factorial(unsigned long number) 
{                                 
   if (number <= 1)
   { // test for base case                                     
      std::cout << number << " = ";   
      return 1; // base cases: 0! = 1 and 1! = 1                                
   }                                                                            
   else
   { // recursion step                                                     
      std::cout << number << " * ";    
      return number * factorial(number - 1);                                    
   }                                                                            
}         
