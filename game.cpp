#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    cout << "Let's play Rock, Paper, Scissors!\n";
    cout << "Enter your choice (0 for Rock, 1 for Paper, 2 for Scissors):\n";

    // 0 for Rock, 1 for Paper, 2 for Scissors
    int userChoice;
    cin >> userChoice;

    // Validate user input
    if (userChoice < 0 || userChoice > 2) {
        cout << "Invalid choice. Please enter 0, 1, or 2.\n";
        return 1;
    }

    // Generate computer's choice randomly
    srand(time(0));
    int computerChoice = rand() % 3;

    // Display computer's choice
    cout << "Computer chose: ";
    switch(computerChoice) {
        case 0:
            cout << "Rock\n";
            break;
        case 1:
            cout << "Paper\n";
            break;
        case 2:
            cout << "Scissors\n";
            break;
    }

    // Determine the winner
    if (userChoice == computerChoice) {
        cout << "It's a tie!\n";
    } else if ((userChoice == 0 && computerChoice == 2) || 
               (userChoice == 1 && computerChoice == 0) || 
               (userChoice == 2 && computerChoice == 1)) {
        cout << "You win!\n";
    } else {
        cout << "Computer wins!\n";
    }

    return 0;
}
