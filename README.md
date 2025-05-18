# Simple-Tic-Tac-Toe
This is a simple Tic Tac Toe game which runs on a terminal. This game only uses the iostream library. Due to its simplicity can be compiled in most of the existing platforms.

## Requirements

- VS Code / Any code editor.
- Command line compiler `g++`.
- PowerShell/Terminal.

## Project Structure

functions.cpp
functions.h
goal.txt
main.cpp

## File Descriptions

- `functions.cpp`: Implements the necessary functions for the game.
- `functions.h`: Contains the function declarations.
- `goal.txt`: Describes the objectives and requirements of the project.
- `main.cpp`: Contains the main function that runs the game.

## How to Compile and Run

1. Open a terminal in the project folder.
2. Compile the project using `g++`:
    ```sh
    g++ -o main main.cpp functions.cpp
    ```
3. Run the compiled file:
    ```sh
    ./main
    ```

## Features

- Renders the game grid.
- Allows two players to select their moves.
- Checks if there is a winner or if the game ends in a draw.

## Sequence of Events

1. Render the grid.
2. Ask for the next move of player X.
3. Check if player X has won.
4. Render the grid.
5. Ask for the next move of player O.
6. Check if player O has won.
7. Repeat the sequence until there is a winner or a draw.

## Example Usage

```sh
 1 | 2 | 3 
-----------
 4 | 5 | 6 
-----------
 7 | 8 | 9 
Player X: Select position of next movement...
```
## Compatibility

This project has been compiled an run on:
1. Windows 11 x86 (g++)
2. WSL(Ubuntu) x86 (g++)
3. Android 15 ARM64 (CLang) on Termux

If you test it out in any of the above platforms it should work with no issues.

