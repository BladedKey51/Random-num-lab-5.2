/*
Lane Jones-Popp
Computer Science Fall 2024
Nov. 12
Lab 5, Random number generator
In this lab we made a random number guessing game. Within the game we made it so 
different message are showed when you either win or loss and when being asked to 
play again.
*/

#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <sstream>
#include "PlayAgainStatement.h"
#include "WinStatement.h"
#include "LoseStatement.h"

int main()
{
	std::cout << "Welcome to my number guessing game: " << std::endl;

	std::cout << "generating random number: " << std::endl;
	srand(time(NULL));

	int random10 = rand() % 10; // generates random numbers for my switch statements
	int random = rand() % 100 + 1; // generates random numbers for the guessing game

	int tryCount = 0; // variables
	float guess = 0;
	int ntry = 0;
	int wamount = 0;
	int lamount = 0;

	do {
		std::cout << "Please Guess a number and not a letter:: " << std::endl;
		std::cin >> guess; // guess input
		tryCount++;
		if (!guess) { // checks to see if cin guess is still functioning and if not ends the loop and outputs a message
			std::cout << "error, I told you not to input a letter. The game will now exit. " << std::endl;
			break;
		}
		if (guess == random) {
			srand(static_cast<unsigned>(time(0))); // calls win statement
			WinStatement();

			srand(static_cast<unsigned>(time(0))); // calls play again statement
			PlayAgainMessage();

			tryCount = 21;
			std::cin >> ntry; // input for playing again / precondtion 
			random = rand() % 100 + 1;
			random10 = rand() % 10;
			wamount++; // win count up one
		}
		if (tryCount == 20) { // if all guess are used then plays losestatement / postcondtion
			lamount++; // loss count up one 

			srand(static_cast<unsigned>(time(0))); // gets Lose Statement
			LoseStatement();

			srand(static_cast<unsigned>(time(0))); // gets play again statement 
			PlayAgainMessage();

			std::cin >> ntry; // play again input
			random10 = rand() % 10; // sets random 10 to a different random number 
		}
		if (ntry == 1) { // if one is inputed then sets try count to 0 and plays again / post condtion
			tryCount = 0;
			ntry -= 1; // sets ntry back to 0 if 1 is input when prompted to play again
			std::cout << tryCount << std::endl;
		}
		else if (tryCount <= 20) // haows how many guess are left
		{
			std::cout << "You have " << 20 - tryCount << " chances left" << std::endl;
		}
	} while (tryCount < 20);
	
	std::cout << "thanks for playing" << std::endl;
	std::cout << "You won this many times: " << wamount << std::endl; // shows you how many times youve won
	std::cout << "You lost this many times: " << lamount << std::endl; // shows you how many times youve lost 

	return 0;
}