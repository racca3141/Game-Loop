// Emerson Racca
// 09/08/2021
// Lab 5a: Game Loop

/*
Take your "guess game" code from Lab 4a and implement a game loop.
a. Play the Game at least once.
b. Ask the user if he would like to play again.

d. Keep track of the number of guesses (implement an accumulator) and show the user the number of guesses.
*/
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // seed random number generator   

    char play = 'y';
    int count, x, y;

    cout << "Number Guessing Game\n";

    while (play == 'y') {

        // Initialize variables for a new game.
        count = 0;
        x = 1 + rand() % 1000;

        do {
            //cout << x << endl; // Used for testing purposes.

            cout << "\nEnter your guess (1 to 1000): ";
            cin >> y;

            count++;
            cout << endl;

            if (y < x) {
                cout << "Too low.";
            }
            else if (y == x) {
                cout << "You got it!";
            }
            else
                cout << "Too high.";

            cout << "\nNumber of guesses: " << count << endl;
        } while (y != x);

        cout << "\nPlay again? (y or n): ";
        cin >> play;

    }

    return 0;
}
