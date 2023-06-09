/**
 * Basic 2 player Tic Tac Toe game produced in C
 * @author Martin Price
 */

//Imports
#include <stdio.h>

//Globals
char playerNames[2][100]; //Player Names
char board[9] = {'1','2','3','4','5','6','7','8','9'};

//Functions
void init() {
    printf("\n--- Tic Tac Toe---\n");
    printf("Welcome to 2 Player Tic Tac Toe!\nBefore we start, please enter the player names: \nPlayer 1: ");
    scanf("%s", playerNames[0]);
    printf("Player 2: ");
    scanf("%s", playerNames[1]);
    printf("Welcome %s and %s. Tic Tac Toe will now begin!\n", playerNames[0], playerNames[1]);
}

void printBoard() {
    printf("---------\n");
    for (int i = 0; i < 9; i+=3)
    {
        printf("|%c||%c||%c|\n", board[i], board[i+1], board[i+2]);
    }
    printf("---------\n");
}

void game() {
    int gameOver = 0; // Keeps track of if the game has ended. 0 == Flase, 1 == True.
    int playerTurn = 1; // Keeps track of which players turn it is. 1 == Player 1, 2 == Player 2.
    int playerChoice; // Holds the players current board choice
    while (gameOver == 0)
    {
        printf("\n--- Tic Tac Toe---\n");
        printf("Current Board:\n");
        printBoard();
        printf("It's %s's turn! Choose a square(or enter 'H' for help): ", playerNames[playerTurn - 1]);
        // TODO: Read players input and place on board
    }
    
    
}

//Main
int main() {
    init();
    game();
}