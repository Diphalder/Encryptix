#include <iostream>


using namespace std;

int main()
{
    // Seed the random number generator

    int targetNumber = rand() % 100 + 1; // Random number between 1 and 100
    int guess;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100. Try to guess it!" << endl;

    // Loop until the user guesses the correct number
    while(1)
    {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > targetNumber)
        {
            cout << "Too high! Try again." << endl<<endl;
        }
        else if (guess < targetNumber)
        {
            cout << "Too low! Try again." << endl<<endl;
        }
        else
        {
            cout << "Congratulations! You guessed the correct number: " << targetNumber << endl<<endl;
        }
        if(guess == targetNumber) break;
    }


    return 0;
}

