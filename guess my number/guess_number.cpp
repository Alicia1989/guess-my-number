// Guess my Number

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0))); //seed random generator

    int secretNumber = rand() % 100 + 1; // rando number between 1 and 100
    int tries = 0;
    int guess;

    cout << "Welcome to Guess my Number\n\n";

    do
    {
        cout << "Enter a guess: ";
        cin >> guess;
        ++tries;

        if (guess > secretNumber) {
            cout << "To high!\n\n";
        }
        else if (guess < secretNumber) {
            cout << "To low!\n\n";
        }
        else {
            cout << "\nThat's it! You got it " << tries << " guesses\n";
        }
    } while (guess != secretNumber);
    return 0;
}