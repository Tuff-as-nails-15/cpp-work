//Ian Cronizer 6.57 11/17/22
#include <iostream>
#include <iomanip>
#include <cmath> // for pow function

int main() {
   int CurrentYear;
   //prompt user
   std::cout << "Enter Current Year: ";
   // get user input
   std::cin >> CurrentYear;
   // set floating-point number format
   std::cout << std::fixed << std::setprecision(2);

   double principal{1000.00}; // initial amount before interest
   double rate{0.05}; // interest rate

   std::cout << "Initial principal: " << principal << std::endl;
   std::cout << "    Interest rate:    " << rate << std::endl;

   // display headers
   std::cout << "\nYear" << std::setw(20) << "Amount on deposit" << std::endl;

   // calculate amount on deposit for each of ten years
   for (unsigned int year{1}; year <= CurrentYear-1626; year++) {
      // calculate amount on deposit at the end of the specified year
      double amount = principal * pow(1.0 + rate, year);

      // display the year and the amount
      std::cout << std::setw(4) << year << std::setw(20) << amount << std::endl; } 
}
