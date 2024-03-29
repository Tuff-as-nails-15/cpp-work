//Ian Cronizer 9-22-22
//3.9 Account Class
#include <iostream>
#include <limits>
#include <unistd.h>
#include "3.9.h"

using namespace std;


int main()
{
   Account account1{"Jane Green", 50};
   Account account2{"John Blue", -7};

   // display initial balance of each object
   cout << "account1: " << account1.getName() << " balance is $"
      << account1.getBalance();
   cout << "\naccount2: " << account2.getName() << " balance is $"
      << account2.getBalance();

   cout << "\n\nEnter deposit amount for account1: "; // prompt
   int depositAmount;
   cin >> depositAmount; // obtain user input
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
   //clears the consol
   cout << "\033[2J\033[1;1H";
   cout << "adding " << depositAmount << " to account1 balance\n" << endl;
   //clears the consol
   cout << "\033[2J\033[1;1H";
   sleep(2);
   cout << "processing... please wait" << endl;
   account1.deposit(depositAmount); // add to account1's balance

   //clears the consol
   sleep(2);
   cout << "\033[2J\033[1;1H";

   // display initial balance of each object
   cout << "account1: " << account1.getName() << " balance is $"
      << account1.getBalance();
   cout << "\naccount2: " << account2.getName() << " balance is $"
      << account2.getBalance();


   cout << "\n\nEnter withdraw amount for account1: "; // prompt
   int withdrawAmount;
   cin >> withdrawAmount; // obtain user input
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
   //clears the consol
   cout << "\033[2J\033[1;1H";
   cout << "taking " << withdrawAmount << " from account1 balance\n" << endl;
   //clears the consol
   cout << "\033[2J\033[1;1H";
   sleep(2);
   cout << "processing... please wait" << endl;
   account1.withdraw(withdrawAmount); // add to account1's balance


   //clears the consol
   sleep(2);
   cout << "\033[2J\033[1;1H";

   // display balances
   cout << "\n\naccount1: " << account1.getName() << " balance is $"
      << account1.getBalance();
   cout << "\naccount2: " << account2.getName() << " balance is $"
      << account2.getBalance();

   cout << "\n\nEnter deposit amount for account2: "; // prompt
   cin >> depositAmount; // obtain user input
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
   //clears the consol
   cout << "\033[2J\033[1;1H";
   cout << "adding " << depositAmount << " to account2 balance" << endl;
   //clears the consol
   cout << "\033[2J\033[1;1H";
   sleep(2);
   cout << "processing... please wait" << endl;
   account2.deposit(depositAmount); // add to account2 balance


   //clears the consol
   sleep(2);
   cout << "\033[2J\033[1;1H";


   // display balances
   cout << "\n\naccount1: " << account1.getName() << " balance is $"
      << account1.getBalance();
   cout << "\naccount2: " << account2.getName() << " balance is $"
      << account2.getBalance();

   cout << "\n\nEnter withdraw amount for account2: "; // prompt
   cin >> withdrawAmount; // obtain user input
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
   //clears the consol
   cout << "\033[2J\033[1;1H";
   cout << "taking " << withdrawAmount << " from account2 balance\n" << endl;
   //clears the consol
   cout << "\033[2J\033[1;1H";
   sleep(2);
   cout << "processing... please wait" << endl;
   account2.withdraw(withdrawAmount); // add to account2's balance

   //clears the consol
   sleep(2);
   cout << "\033[2J\033[1;1H";

   // display balances
   cout << "\n\naccount1: " << account1.getName() << " balance is $"
      << account1.getBalance();
   cout << "\naccount2: " << account2.getName() << " balance is $"
      << account2.getBalance() << endl;
}

