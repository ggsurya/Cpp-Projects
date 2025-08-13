# ❌⭕ Tic-Tac-Toe Game in C++

A simple two-player command-line Tic-Tac-Toe game implemented in C++. Players take turns marking X and O on a 3x3 grid until one wins or the game ends in a draw.

## Features

- Two-player gameplay on a 3x3 board.
- User-friendly prompts for inputting moves (1-9).
- Input validation for invalid moves or occupied cells.
- Detects win conditions (rows, columns, diagonals).
- Detects draw when no moves remain.
- Displays the board after every move with clear formatting.

## Usage

1. Clone the repository or download the source code file.

2. Compile the program with a C++ compiler. For example:
   ```bash
   g++ -o tictactoe tictactoe.cpp
3. Run the executable:
   ```bash
   ./tictactoe
4. Follow on-screen instructions to play the game by entering numbers 1-9 to mark your move.

## Example

```
 1 | 2 | 3
---+---+---
 4 | 5 | 6
---+---+---
 7 | 8 | 9

Player X, enter your move (1-9): 5

 1 | 2 | 3
---+---+---
 4 | X | 6
---+---+---
 7 | 8 | 9

Player O, enter your move (1-9): 1

 O | 2 | 3
---+---+---
 4 | X | 6
---+---+---
 7 | 8 | 9

...

Player X wins!
```

## How to Play

- Players take turns entering the number corresponding to the board cell where they want to place their mark.
- The first player is X and the second player is O.
- The game automatically checks for wins or draws after each move.
   
## License

This project is licensed under the MIT License - see the [LICENSE](https://github.com/ggsurya/Cpp-Projects/blob/main/LICENSE) file for details.

## 📩 Contact

**G.G. Surya**  
📧 Email: ggsuryaff@gmail.com  
🔗 [LinkedIn](https://www.linkedin.com/in/g-g-surya-5aa9312b4)
🔗 [GitHub](https://github.com/ggsurya)
