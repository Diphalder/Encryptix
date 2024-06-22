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