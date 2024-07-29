# Rock-Paper-Scissors Game

This is a simple Rock-Paper-Scissors game implemented in C++. You play against the computer, and the game keeps track of the scores.

## How to Play

1. Clone or download the repository to your local machine.
2. Compile the C++ code using a C++ compiler, for example:
    ```
    g++ -o rps_game main.cpp
    ```
3. Run the compiled program:
    ```
    ./rps_game
    ```

## Rules

- Enter your choice when prompted: 
  - `0` for Rock
  - `1` for Paper
  - `2` for Scissors
- The computer will randomly select its choice.
- The winner of each round is determined based on the following rules:
  - Rock crushes Scissors
  - Scissors cuts Paper
  - Paper covers Rock
- The game will display the result of each round and update the scores.
- You can choose to play multiple rounds. The final score is displayed at the end.

## Code Overview

### Functions

- **getComputerChoice**: Generates and returns a random choice (0, 1, or 2) for the computer.
- **choiceToString**: Converts the numeric choice to its corresponding string representation ("Rock", "Paper", or "Scissors").
- **determineWinner**: Determines the winner of the round based on the player's and computer's choices and returns the result as a string.
- **playRound**: Handles a single round of the game, including user input, computer choice, result display, and score update.

### Main Function

- Initializes the random number generator.
- Repeatedly plays rounds of the game until the user chooses to stop.
- Displays the current and final scores.

## Example Output

```
Enter your choice (0 for Rock, 1 for Paper, 2 for Scissors): 1
You chose: Paper
Computer chose: Rock
You win!

Current Score: You - 1, Computer - 0
Do you want to play again? (y/n): y

Enter your choice (0 for Rock, 1 for Paper, 2 for Scissors): 2
You chose: Scissors
Computer chose: Paper
You win!

Current Score: You - 2, Computer - 0
Do you want to play again? (y/n): n

Final Score: You - 2, Computer - 0
Thanks for playing!
```

## Requirements

- A C++ compiler
- Basic understanding of how to compile and run C++ code

Enjoy playing Rock-Paper-Scissors!


