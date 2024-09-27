//
//  chapter2.c
//  Chapter 2- First Steps in Programming
//
//  Created by Linda Ochwada on 27.09.24.
//

#include "chapter2.h"
#include <limits.h> // For limits on integer types
#include <float.h> // For limits on floating-point types
#include <stdbool.h>

// Practices
// TRY IT OUT: USING MORE VARIABLES

//------------------------
int Salary = 10000;

void salary(void){
    printf("My salary is $%d.\n\n", Salary);
}
//------------------------

void more_var(void){
    int brothers = 2;
    int sisters = 4;
    
    printf("We are %d brothers and %d sisters in my family!\n\n", brothers, sisters);
}

//------------------------
void simple_arthmetics(void){
    int total_pets, cats, dogs, ponies, others;
    
    cats = 2;
    dogs =1;
    ponies = 1;
    others = 46;
    
    // Calculate the total number of pets
    total_pets = cats + dogs + ponies + others;
    total_pets = total_pets + 2;
    printf("We have %d pets in total\n\n", total_pets);
    
}

//------------ SUBTRACTION AND MULTIPLICATION ------------
void substraction_multiplication(void){
    int cookies = 5;
    int cookies_calories = 125;
    int total_eaten = 0;
    
    int eaten = 2;
    cookies = cookies - eaten;
    total_eaten = total_eaten + eaten;
    printf("\nI have eaten %d cookies.There are %d cookies left", eaten, cookies);
    
    eaten = 3;
    cookies = cookies-eaten;
    total_eaten = total_eaten + eaten;
    printf("\nI have eaten %d more. Now there are %d cookies left\n", eaten, cookies);
    printf("\nTotal energy consumed is %d calories.\n\n", total_eaten * cookies_calories);
}

//------------ DIVISION AND THE MODULUS OPERATOR ------------
void devide_module(void){
    int cookies = 45;
    int children = 7;
    int cookies_per_child = 0;
    int cookies_left_over = 0;
    
    // Calculate how many cookies each child gets when they are divided up
    cookies_per_child = cookies / 7;
    printf("You have %d children and %d cookies, therefore, each kid will get %d cookies\n\n", children, cookies, cookies_per_child);
    
    // Calculate how many cookies are left over
    cookies_left_over = cookies%children;
    printf("After each child got %d cookies, there will be %d cookies remaining\n\n", cookies_per_child, cookies_left_over);
}

//------------ DIVISION WITH VALUES OF TYPE FLOAT  ------------
void devide_with_floats(void){
    float plank_length = 10.0f; // In feet
    float piece_count = 4.0f; // Number of equal pieces
    float piece_length = 0.0f; // Length of a piece in feet
    
    piece_length = plank_length/piece_count;
    printf("A plank %f feet long can be cut into %f pieces %f feet long.\n",
           plank_length, piece_count, piece_length);
    printf("A plank %.2f feet long can be cut into %.0f pieces %.2f feet long.\n",
           plank_length, piece_count, piece_length);
    
    printf("A %8.2f plank foot can be cut into %5.0f pieces %6.2f feet long.\n",
     plank_length, piece_count, piece_length); // %[width][.precision][modifier]f
}

//------------ ARITHMETIC IN ACTION  ------------
void arthimetic_action(void){
    float radius = 0.0f; // radius of the table
    float diameter = 0.0f; // diameter of the table
    float circumference = 0.0f; // circumference of the table
    float area  = 0.0f; // The area of the table
    float Pi = 3.14159265f;
    
    printf("Input - Table's Diameter: ");
    scanf("%f", &diameter); // The & sign is used to pass the address of the variable diameter to the scanf function.
    
    radius = diameter/2;
    circumference = 2.0f *Pi * radius;
    area = Pi * radius * radius;
    
    printf("\nThe circumference is %.2f\n", circumference);
    printf("\nThe area is %.2f\n\n", area);
    
}

//------------ DEFINING A CONSTANT ------------
void define_constant(void){
    
     float radius = 0.0f;
     float diameter = 0.0f;
     float circumference = 0.0f;
     float area = 0.0f;
    
     printf("Input the diameter of a table:");
     scanf("%f", &diameter);
    
     radius = diameter/2.0f;
     circumference = 2.0f*PI*radius; // defined constant PI from header file
    
     area = PI*radius*radius;// defined constant PI from header file
    
     printf("\nThe circumference is %.2f. ", circumference);
     printf("\nThe area is %.2f.\n", area);
    
}

//------------ DEFINING A VARIABLE WITH A FIXED VALUE ------------
void define_fixed_constant_value(void){
    
     float radius = 0.0f;
     float diameter = 0.0f;
    
    const float Pi = 3.14159f; // Defines the value of Pi as fixed
    
     printf("Input the diameter of a table:");
     scanf("%f", &diameter);
    
     radius = diameter/2.0f;
     printf("\nThe circumference is %.2f.", 2.0f*Pi*radius);
     printf("\nThe area is %.2f.\n\n", Pi*radius*radius);
    
}

//------------ FINDING THE LIMITS ------------
void find_limits(void){
    printf("Variables of type char store values from %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("Variables of type unsigned char store values from 0 to %u\n", UCHAR_MAX);
    printf("Variables of type short store values from %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("Variables of type unsigned short store values from 0 to %u\n", USHRT_MAX);
    printf("Variables of type int store values from %d to %d\n", INT_MIN, INT_MAX);
    printf("Variables of type unsigned int store values from 0 to %u\n", UINT_MAX);
    printf("Variables of type long store values from %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("Variables of type unsigned long store values from 0 to %lu\n", ULONG_MAX);
    printf("Variables of type long long store values from %lld to %lld\n", LLONG_MIN, LLONG_MAX);
    printf("Variables of type unsigned long long store values from 0 to %llu\n", ULLONG_MAX);
    printf("\nThe size of the smallest positive non-zero value of type float is %.3e\n", FLT_MIN);
    printf("The size of the largest value of type float is %.3e\n", FLT_MAX);
    printf("The size of the smallest non-zero value of type double is %.3e\n", DBL_MIN);
    printf("The size of the largest value of type double is %.3e\n", DBL_MAX);
    printf("The size of the smallest non-zero value of type long double is %.3Le\n", LDBL_MIN);
    printf("The size of the largest value of type long double is %.3Le\n", LDBL_MAX);
    printf("\n Variables of type float provide %u decimal digits precision. \n", FLT_DIG);
    printf("Variables of type double provide %u decimal digits precision. \n", DBL_DIG);
    printf("Variables of type long double provide %u decimal digits precision. \n\n",
     LDBL_DIG);}

//------------ DISCOVERING THE NUMBER OF BYTES OCCUPIED BY A TYPE ------------
void no_bytes_type(void){
    printf("Variables of type char occupy %lu bytes\n", sizeof(char));
     printf("Variables of type short occupy %lu bytes\n", sizeof(short));
     printf("Variables of type int occupy %lu bytes\n", sizeof(int));
     printf("Variables of type long occupy %lu bytes\n", sizeof(long));
     printf("Variables of type long long occupy %lu bytes\n", sizeof(long long));
     printf("Variables of type float occupy %lu bytes\n", sizeof(float));
     printf("Variables of type double occupy %lu bytes\n", sizeof(double));
     printf("Variables of type long double occupy %lu bytes\n\n", sizeof(long double));
}


//------------ CHARACTER BUILDING ------------
void char_building(void){
    char first = 'T';
    char second = 63;
    
     printf("The first example as a letter looks like this - %c\n", first);
     printf("The first example as a number looks like this - %d\n", first);
     printf("The second example as a letter looks like this - %c\n", second);
     printf("The second example as a number looks like this - %d\n\n\n", second);
}

//------------ ARITHMETIC WITH VALUES THAT ARE CHARACTERS ------------
void arithimatic_char(void){
    char first = 'A';
     char second = 'B';
     char last = 'Z';
     char number = 40;
    
     char ex1 = first + 2; // Add 2 to 'A'
     char ex2 = second - 1; // Subtract 1 from 'B'
     char ex3 = last + 2; // Add 2 to 'Z'
    
     printf("Character values %-5c%-5c%-5c\n", ex1, ex2, ex3);
     printf("Numerical equivalents %-5d%-5d%-5d\n", ex1, ex2, ex3);
     printf("The number %d is the code for the character %c\n\n\n", number, number);
}



// --------------------------- ------------------- ------------------
// --------------------------- Designing a Program ------------------
// --------------------------- ------------------- ------------------
