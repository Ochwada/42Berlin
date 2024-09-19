/* ----  VARIABLES, EXPRESSIONS & ASSIGNMENTS ---
Converting distances from Miles-yards to km
All variables/ identifier must be declared or named in the beginning of the program
     
The distance Of a marathon in kilometers. */


#include <stdio.h>

int main(void) {

    int miles, yards;
    float kilometers;

    miles = 26 ;
    yards = 385;

    kilometers = 1.609 *  (miles + yards/1760.0);

    printf(" \nA marathon is %f kilometers. \n\n", kilometers);

    return 0;
}