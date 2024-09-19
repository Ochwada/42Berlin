//
//  functions.c
//  Othello_game
//
//  Created by Linda Ochwada on 19.09.24.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "header.h"

// ---------- Function 1:  ----------
// Reset the board to starting state
// ---------- ----------- ----------
void reset_board(char board[][SIZE])
{
    // Blank the board
    for (size_t row = 0; row < SIZE; ++row)
        for (size_t col = 0; col < SIZE; ++col)
            board[row][col] = ' ';

    // Place the initial four counters in the center of the board
    size_t mid = SIZE / 2;
    board[mid-1][mid-1] = player_c;
    board[mid-1][mid] = comp_c;
    board[mid][mid-1] = comp_c;
    board[mid][mid] = player_c;

    // Debug print: Initial board setup
    printf("Initial board setup:\n");
    display(board);
}


// ---------- Function 2: ----------
// Display the board in its current state
// ---------- ----------- ----------
void display(char board[][SIZE])
{
    // Display the column labels
    char col_label = 'a'; // Column label
    printf("\n "); // Start top line
    
    for(size_t col=0; col < SIZE; ++col)
        printf("%c", (char)(col_label + col));
    printf("\n");
    
    // Display the rows...
    for(size_t row = 0; row < SIZE; ++row)
    {
        // Display the top line for current row
        printf(" +");
        for(size_t col=0; col < SIZE; ++col)
            printf("---+");
        printf("\n%2zd |", row + 1);
        
        // Display the counters in current row
        for(size_t col =0; col < SIZE; ++col)
            printf(" %c |", board[row][col]);
        printf("\n");
    }
    
    // Finally display the bottom line of the board
    printf(" +");
    for (size_t col = 0; col < SIZE; ++col)
        printf("--+");
    printf("\n");
    
}

// ---------- Function 3: ----------
// Generate all the possible moves that can be made for the current player
// ---------- ----------- ----------
int valid_moves(char board[][SIZE], bool moves[][SIZE], char player)
{
    int rowdelta = 0;
    int coldelta = 0;
    size_t x = 0;        // Row index when searching
    size_t y = 0;        // Column index when searching
    int no_of_moves = 0; // Number of valid moves

    // Set the opponent
    char opponent = (player == player_c) ? comp_c : player_c;

    // Initialize the moves array to false
    for(size_t row = 0; row < SIZE; ++row)
    {
        for(size_t col = 0; col < SIZE; ++col)
        {
            moves[row][col] = false;
        }
    }

    // Find valid moves
    for(size_t row = 0; row < SIZE; ++row)
    {
        for(size_t col = 0; col < SIZE; ++col)
        {
            if(board[row][col] != ' ')
                continue;
            
            // Check all the squares around the blank square for opponents counter
            for(rowdelta = -1; rowdelta <= 1; ++rowdelta)
            {
                for(coldelta = -1; coldelta <= 1; ++coldelta)
                {
                    if((row == 0 && rowdelta == -1) || row + rowdelta >= SIZE ||
                       (col == 0 && coldelta == -1) || col + coldelta >= SIZE ||
                       (rowdelta == 0 && coldelta == 0))
                        continue;

                    if(board[row + rowdelta][col + coldelta] == opponent)
                    {
                        x = row + rowdelta;
                        y = col + coldelta;

                        for(;;)
                        {
                            x += rowdelta;
                            y += coldelta;

                            if(x < 0 || x >= SIZE || y < 0 || y >= SIZE || board[x][y] == ' ')
                                break;

                            if(board[x][y] == player)
                            {
                                moves[row][col] = true;
                                no_of_moves++;
                                break;
                            }
                        }
                    }
                }
            }
        }
    }

    return no_of_moves;
}

// ---------- Function 4: ----------
// Function to count the number of pieces a player has on the board
// ---------- ----------- ----------
int player_counters(char board[][SIZE], char player)
{
    int count = 0; // Counter for the player's pieces

    // Loop over the board and count the player's pieces
    for (size_t row = 0; row < SIZE; ++row) {
        for (size_t col = 0; col < SIZE; ++col) {
            if (board[row][col] == player) {
                count++; // Increment the count when a piece is found
            }
        }
    }

    return count; // Return the total number of pieces the player has
}
