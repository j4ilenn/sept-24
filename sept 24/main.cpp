

#include <iostream>

#include"HiLo.h" //why double quotes "" and not angle brackets <>
					//just drive the car 

using namespace std;

int main()
{
	//first, generate a random number
	constexpr int N = 100; //const means "constant"  (N as in "number")
	//N = 123; //leads to a syntax error because we used constant expression "modifier"

	int randomNumber = getRandomNumberBetween1AndN(N);
	//then, prompt the user for guesses WHILE guess != randomNumber

	cout << "The random number to guess is: " << randomNumber << "\n";

	int userGuess = -999; 



	constexpr int MAX_NUMBER_OF_GUESSES = 15;
	int numberOfGuesses = 0;
	if (userGuess != randomNumber)


	{
		cout << "Your guess was too HIGH\n";
	}

	else if (userGuess < randomNumber)
	{
		cout << "Your guess was too LOW\n";
	}
	else
	{
		cout << "You guessed the number!\n";

		
	}

	numberOfGuesses = numberOfGuesses + 1;

	cout << "You have guessedthis many times: " << numberOfGuesses << "\n";
	
	if (userGuess != randomNumber)
	{
		cout << "You lose!\n";
		
	}

	//the game loop!

	//then, output the number of guesses it took 
	// (should the player LOSE if too many guesses?)
}