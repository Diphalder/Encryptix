#include <iostream>
using namespace std;

const int SIZE = 3;
char board[SIZE][SIZE];
char currentPlayer;

void initializeBoard() {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            board[i][j] = ' ';
        }
    }
}

void displayBoard() {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << board[i][j];
            if (j < SIZE - 1) cout << " | ";
        }
        cout << endl;
        if (i < SIZE - 1) cout << "--+---+--" << endl;
    }
}

bool isBoardFull() {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == ' ') {
                return false;
            }
        }
    }
    return true;
}

bool checkWin() {
    // Check rows
    for (int i = 0; i < SIZE; i++) {
        if (board[i][0] == currentPlayer && board[i][1] == currentPlayer && board[i][2] == currentPlayer) {
            return true;
        }
    }

    // Check columns
    for (int j = 0; j < SIZE; j++) {
        if (board[0][j] == currentPlayer && board[1][j] == currentPlayer && board[2][j] == currentPlayer) {
            return true;
        }
    }

    // Check diagonals
    if (board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer) {
        return true;
    }

    if (board[0][2] == currentPlayer && board[1][1] == currentPlayer && board[2][0] == currentPlayer) {
        return true;
    }

    return false;
}

void switchPlayer() {
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
}

void playGame() {
    int row, col;
    bool gameWon = false;

    while (!isBoardFull() && !gameWon) {
        displayBoard();
        cout << "Player " << currentPlayer << ", enter your move (row[1-3] and column[1-3]): ";
        cin >> row >> col;

        // Validate input
        if (row >= 1 && row <= 3 && col >= 1 && col <= 3 && board[row-1][col-1] == ' ') {
            board[row-1][col-1] = currentPlayer;
            gameWon = checkWin();

            if (!gameWon) {
                switchPlayer();
            }
        } else {
            cout << "Invalid move. Try again." << endl;
        }
    }

    displayBoard();

    if (gameWon) {
        cout << "Player " << currentPlayer << " wins!" << endl;
    } else {
        cout << "The game is a draw!" << endl;
    }
}

int main() {
    char playAgain;

    do {
        initializeBoard();
        currentPlayer = 'X';
        playGame();

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    return 0;
}
