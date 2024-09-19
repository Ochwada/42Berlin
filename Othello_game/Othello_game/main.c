#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include "header.h"

const char comp_c = '@';   // Computer's counter
const char player_c = 'O'; // Player's counter

int main(void)
{
    char board[SIZE][SIZE] = {0};    // The board
    bool moves[SIZE][SIZE] = {false}; // Valid moves
    int no_of_moves = 0;             // Count of valid moves
    int invalid_moves = 0;           // Invalid move count
    char again = 0;                  // Replay choice input
    bool next_player = true;         // true for player, false for computer

    // Display how to play
    printf("\nREVERSI\n");
    printf("You can go first on the first game, then we will take turns.\n");
    printf(" You will be white - (%c)\n I will be black - (%c).\n", player_c, comp_c);
    printf("Select a square for your move by typing a digit for the row\n"
           "and a letter for the column with no spaces between.\n");
    
    // Main game loop: continues as long as the user chooses to play again
    do {
        reset_board(board);    // Reset the board to the initial state
        invalid_moves = 0;     // Reset invalid move count
        next_player = true;    // Player goes first

        // Game loop: keep going until board is full or too many invalid moves
        while (invalid_moves < 2 && no_of_moves < SIZE * SIZE) {
            display(board);  // Display the current state of the board

            if (next_player) { // Player's turn
                no_of_moves = valid_moves(board, moves, player_c); // Get valid moves for the player
                if (no_of_moves == 0) {
                    printf("No valid moves for player. Skipping turn.\n");
                    invalid_moves++;
                    next_player = false; // Skip to computer's turn
                    continue;
                }

                // Get player's move
                char row_input, col_input;
                int row, col;
                do {
                    printf("Enter your move (row letter followed by column digit): ");
                    scanf(" %c%c", &row_input, &col_input);
                    row = row_input - '1';  // Convert row input to array index
                    col = col_input - 'a';  // Convert column input to array index

                    if (row >= 0 && row < SIZE && col >= 0 && col < SIZE && moves[row][col]) {
                        board[row][col] = player_c; // Place player's piece
                        break;
                    } else {
                        printf("Invalid move. Try again.\n");
                    }
                } while (true); // Keep asking for a valid move

            } else { // Computer's turn
                no_of_moves = valid_moves(board, moves, comp_c); // Get valid moves for the computer
                if (no_of_moves == 0) {
                    printf("No valid moves for computer. Skipping turn.\n");
                    invalid_moves++;
                    next_player = true; // Skip to player's turn
                    continue;
                }

                // Simple computer move: choose the first valid move
                for (size_t row = 0; row < SIZE; ++row) {
                    for (size_t col = 0; col < SIZE; ++col) {
                        if (moves[row][col]) {
                            printf("Computer moves to %d%c\n", (int)row + 1, (char)('a' + col));
                            board[row][col] = comp_c; // Place computer's piece
                            break;
                        }
                    }
                    if (board[row][col] == comp_c) break; // Stop after one move
                }
            }

            // Toggle the next player
            next_player = !next_player;
            invalid_moves = 0; // Reset invalid move counter after a valid move
        }

        // End of game
        display(board); // Show final board
        printf("Do you want to play again (y/n): ");
        scanf(" %c", &again); // Get input to play again

    } while (tolower(again) == 'y');  // Replay the game if the player chooses 'y'

    printf("\nGoodbye\n");
    return 0;
}
