#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));

    int targetNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "Try to guess the number between 1 and 100." << endl;

    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;

        attempts++;

        if (guess == targetNumber) {
            cout << "Congratulations! You guessed the number " << targetNumber << " in " << attempts << " attempts." << endl;
            break;
        } else if (guess < targetNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Too high! Try again." << endl;
        }
    }

    return 0;
}
