//Ian Cronizer
//3.9 Account Class
//Header File
#include <string>
#include <limits>

class Account {
public:
       // Account constructor with two parameters
   Account(std::string accountName, int initialBalance)
      : name{accountName} { // assign accountName to data member name

      // validate that the initialBalance is greater than 0; if not,
      // data member balance keeps its default initial value of 0
      if (initialBalance > 0) { // if the initialBalance is valid
         balance = initialBalance; // assign it to data member balance
      }
   }

   // function that deposits (adds) only a valid amount to the balance
   void deposit(int depositAmount) {
      if (depositAmount > 0) { // if the depositAmount is valid
         balance = balance + depositAmount; // add it to the balance
      }
   }
   // function that withdraws (takes) only a valid amont from the balance
   void withdraw(int withdrawAmount) {
      if (withdrawAmount < balance) { // if the withdraw is valid
           balance = balance - withdrawAmount; //take from the balance
      }
      else // if there is not enough to withdraw

      std::cout << "withdrawal amount exceeded account balance" << std::endl; // print error
      std::cout << "press enter to continue... ";
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
   }

   // function returns the account balance
   int getBalance() const {
      return balance;
   }

   // function that sets the name
   void setName(std::string accountName) {
      name = accountName;
   }

   // function that returns the name
   std::string getName() const {
      return name;
   }
private:
   std::string name; // account name data member
   int balance{0}; // data member with default initial value
   int variable;
}; // end class Account
