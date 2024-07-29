#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to get the computer's choice
int getComputerChoice() {
    return rand() % 3; // Returns a number between 0 and 2
}

// Function to convert choice number to string
string choiceToString(int choice) {
    switch (choice) {
        case 0: return "Rock";
        case 1: return "Paper";
        case 2: return "Scissors";
        default: return "Invalid";
    }
}

// Function to determine the winner
string determineWinner(int playerChoice, int computerChoice) {
    if (playerChoice == computerChoice) {
        return "It's a draw!";
    } else if ((playerChoice == 0 && computerChoice == 2) ||
               (playerChoice == 1 && computerChoice == 0) ||
               (playerChoice == 2 && computerChoice == 1)) {
        return "You win!";
    } else {
        return "You lose!";
    }
}

void playRound(int& playerScore, int& computerScore) {
    int playerChoice;
    int computerChoice;

    cout << "\nEnter your choice (0 for Rock, 1 for Paper, 2 for Scissors): ";
    cin >> playerChoice;

    // Validate user input
    while (playerChoice < 0 || playerChoice > 2) {
        cout << "Invalid choice! Please enter 0, 1, or 2: ";
        cin >> playerChoice;
    }

    // Get computer's choice
    computerChoice = getComputerChoice();

    // Display choices
    cout << "You chose: " << choiceToString(playerChoice) << endl;
    cout << "Computer chose: " << choiceToString(computerChoice) << endl;

    // Determine and display the result
    string result = determineWinner(playerChoice, computerChoice);
    cout << result << endl;

    // Update scores
    if (result == "You win!") {
        playerScore++;
    } else if (result == "You lose!") {
        computerScore++;
    }
}

int main() {
    srand(time(0)); // Seed for random number generation

    char playAgain;
    int playerScore = 0;
    int computerScore = 0;

    do {
        playRound(playerScore, computerScore);

        // Display current score
        cout << "\nCurrent Score: You - " << playerScore << ", Computer - " << computerScore << endl;

        // Ask if the player wants to play again
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    // Display final score
    cout << "\nFinal Score: You - " << playerScore << ", Computer - " << computerScore << endl;
    cout << "Thanks for playing!" << endl;

    return 0;
}
