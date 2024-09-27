//
//  Exe1.c
//  Chapter 1- Programming in C
//
//  Created by Linda Ochwada on 27.09.24.
//
// EXERCISES - Chapter 1


#include "Exe1.h"

// TRY IT OUT: AN EXAMPLE C PROGRAM
void example_programs(void)
{
 printf("Hi there!\n\n\nThis program is a bit");
 printf(" longer than the others.");
 printf("\nBut really it's only more text.\n\n\n\a\a");
 printf("Hey, wait a minute!! What was that???\n\n");
 printf("\t1.\tA bird?\n");
 printf("\t2.\tA plane?\n");
 printf("\t3.\tA control character?\n");
 printf("\n\t\t\b\bAnd how will this look when it prints out?\n\n");
}

// Exercise 1-1. Write a program that will output your name and address using a separate printf() statement for each line of output.

void output_name(void){
    printf("Surname Initials\n");
    printf("Address-Str. 11\n");
    printf("10000 Berlin\n\n");
}

// Exercise 1-2. Modify your solution for the previous exercise so that it produces all the output using only one printf() statement.
void output_name_1_print(void){
    printf("Surname Initials\nAddress-Str. 11\n10000 Berlin\n\n");
}


// Exercise 1-3. Write a program to output the following text exactly as it appears here: "It's freezing in here," he said coldly.

void output_strings(void){
    printf("\"It's freezing in here,\" he said coldly.");
}

