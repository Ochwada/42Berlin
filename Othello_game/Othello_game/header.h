//
//  header.h
//  Othello_game
//
//  Created by Linda Ochwada on 19.09.24.
//

#ifndef HEADER_H
#define HEADER_H

#define __STDC_WANT_LIB_EXT1__ 1


#define SIZE 6 // Board size - must be even

// Use 'extern' to declare variables that are defined in a .c file
extern const char comp_c;   // Computer's counter
extern const char player_c; // Player's counter

// Function prototypes
void display(char board[][SIZE]);
void reset_board(char board[][SIZE]);
int valid_moves(char board[][SIZE], bool moves[][SIZE], char player);  // Add the prototype
int player_counters(char board[][SIZE], char player); // Add this line



#endif
