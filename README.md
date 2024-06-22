# Encryptix
 Encryptix Internship Program using C++

# Task-1 : Number Gussing game
- Question : Create a program that generates a random number and asks the user to guess it. Provide feedback on whether the guess is too high or too low until the user guesses the correct number 
### Explanation:
**Random Number Generation:**
   - The `std::rand` function generates a random number, and the modulo operator (`%`) limits the range to 1-100.

**User Input and Feedback:**
   - The program prompts the user to enter their guess.
   - It provides feedback if the guess is too high or too low.
   - The loop continues until the user guesses the correct number.

### How to Run:
1. Copy and paste the code into a C++ IDE or a text editor and save it with a `.cpp` extension.
2. Compile the code using a C++ compiler, e.g., `g++ -o Task_1 Task_1_Number_gussing_game.cpp`.
3. Run the executable, e.g., `./Task_1`.

This will start the number guessing game where you can try to guess the randomly generated number.

# Task- 2 : Calculator
- Question: Develop a calculator program that performs basic arithmetic operations such as addition, subtraction, multiplication, and division. Allow the user to input two numbers and choose an operation to perform.

### Explanation:
1. **User Input:**
   - The program prompts the user to enter an arithmetic operator (`+`, `-`, `*`, `/`).
   - It then prompts the user to enter two numbers.

2. **Conditional Statements:**
   - The program uses `if` and `else if` statements to check which operator was entered and performs the corresponding arithmetic operation.
   - If the operator is `/`, it checks if the second number is zero to avoid division by zero.

3. **Error Handling:**
   - If the user enters an invalid operator, the program displays an error message.

### How to Run:
1. Compile the code using a C++ compiler, for example:
   ```sh
   g++ -o calculator Task_2_Calculator.cpp
   ```
2. Run the executable, for example:
   ```sh
   ./calculator
   ```

This will start the calculator program where you can input two numbers and choose an operation to perform basic arithmetic operations.

# Task-3 : Tic-Tac-Toe Game
-Question: Build a simple console-based Tic-Tac-Toe game that allows two players to play against each other
 Game Board: Create a 3x3 grid as the game board. 
 Players: Assign "X" and "O" to two players. 
 Display Board: Show the current state of the board. 
 Player Input: Prompt the current player to enter their move. 
 Update Board: Update the game board with the player's move. 
 Check for Win: Check if the current player has won. 
 Check for Draw: Determine if the game is a draw. 
 Switch Players: Alternate turns between "X" and "O" players. 
 Display Result: Show the result of the game (win, draw, or ongoing). 
 Play Again: Ask if the players want to play another game.

### Explanation:
1. **Game Board Initialization:**
   - The `initializeBoard` function initializes the 3x3 game board with spaces (' ').

2. **Display Board:**
   - The `displayBoard` function prints the current state of the board.

3. **Player Input and Validation:**
   - The program prompts the current player to enter their move.
   - It validates the move to ensure it's within the bounds of the board and the chosen cell is empty.

4. **Update Board:**
   - The chosen cell is updated with the current player's symbol ('X' or 'O').

5. **Check for Win:**
   - The `checkWin` function checks if the current player has won by checking rows, columns, and diagonals.

6. **Check for Draw:**
   - The `isBoardFull` function checks if the board is full, indicating a draw.

7. **Switch Players:**
   - The `switchPlayer` function alternates turns between 'X' and 'O'.

8. **Display Result:**
   - After each move, the board is displayed and the result (win, draw, or ongoing) is shown.

9. **Play Again:**
   - After the game ends, the program asks if the players want to play another game.

### How to Run:
1. Compile the code using a C++ compiler, for example:
   ```sh
   g++ -o tictactoe Task_3_Tic_Tac_Toe_game.cpp
   ```
2. Run the executable, for example:
   ```sh
   ./tictactoe
   ```

This will start the Tic-Tac-Toe game where two players can play against each other.
