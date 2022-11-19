//Ian Cronizer 6.35 11-18-22 
#include <iostream>
//main function
int main()
{
   //randomizes number with time
   srand(time(0));
   //declares ints
   int guess,number,counter;
   //char for continue prompt
   char selection = 'y';
   //main while loop for number game
   while(selection == 'y')
   {
   //randomizes number between 1 and 1000
      number = rand() % 1000 + 1;
	  //prompt user to guess number
      std::cout << "I have a number between 1 and 1000." << std::endl;
	  std::cout << "Can you guess my number?" << std::endl; 
	  std::cout << "Please type your first guess." << std::endl;
	  //gets user input
      std::cin >>guess;
	  //secondary while loop that checks if guess is high or low
      while(number != guess)
      {
			//adds to counter each time secondary loop loops
            counter++;
         if(number > guess)
         {
            std::cout << "Too low. Try again." << std::endl;
            std::cin >> guess;
         }
         if(number < guess)
         {
            std::cout << "Too high. Try again." << std::endl;
            std::cin >> guess;
         }
      }
	  //after loop checks counter to see how well the person did 
      if(counter < 10)
         std::cout << "Either you know the secret or you got lucky!" << std::endl;
      else if(counter = 10)
         std::cout << "Ahah! You know the secret!" << std::endl;
      else
      std::cout << "You should be able to do better!";
      std::cout << "Excellent! You guessed the number!" << std::endl;
	  //prompt user to play again or exit game
	  std::cout << "Would you like to play again (y or n)?" << std::endl;
      std::cin >> selection;
   }
   //thanks user for playing
   std::cout << "Thank you!";
   return 0;
}
