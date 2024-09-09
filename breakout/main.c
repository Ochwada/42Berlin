#include <stdio.h>
#include "header.h"  // Include the header file

int main(int argc, char* argv[]) {
    // Print statement and arguments
    printf("Calling add function:\n");
    printf( "Arguments: %i\n", argc ); // %i - formart specifer, print argc 
    
   if (argc > 1) {
        printf(" First Argument: %s\n", argv[3]);
    }

    int z = Add2Numbers(17, 15);
    printf("Result: %i\n", z);
   



    return 0;
}

/* gcc -g main.c functions.c -o main && ./main */