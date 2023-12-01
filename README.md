# Tic Tac Toe Game in C

This is a simple implementation of the classic Tic Tac Toe game in C. The game allows two players to take turns marking spaces on a 3x3 grid. The player who succeeds in placing three of their marks in a horizontal, vertical, or diagonal row wins the game.

## Features

- **Two Player Mode:** Play against a friend locally on the same machine.
- **Simple Interface:** User-friendly interface with a grid representation of the game board.
- **Winning Detection:** Automatically detects a winning sequence and declares the winner.
- **Input Validation:** Validates user input to ensure valid moves.

## Getting Started

### Prerequisites

- C Compiler (e.g., GCC)

### Running the Game

1. Clone this repository or download the source code.
2. Navigate to the directory containing the source files in your terminal or command prompt.
3. Compile the code using a C compiler. For example:
    ```bash
    gcc tic_tac_toe.c -o tic_tac_toe
    ```
4. Run the executable generated:
    ```bash
    ./tic_tac_toe
    ```

## How to Play

- Players take turns to place their marker ('X' or 'O') on an empty cell of the 3x3 grid.
- The game continues until one player has three markers in a row horizontally, vertically, or diagonally, or there are no more empty cells left (resulting in a tie).
- Follow the on-screen prompts to enter the row and column numbers to place your marker.

## Code Structure

- `tic_tac_toe.c`: Main source code containing the game logic and user interface.
- `compiled file`: The compiled file which can be runned as ```bash ./tic_tac_toe ```

## Contributing

Contributions are welcome! If you have any suggestions or want to improve the game, feel free to fork the repository and submit a pull request.

## Acknowledgments

Thanks to anyone whose code was used as inspiration or who contributed directly to this project.

