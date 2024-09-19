
/* 

- Preprocessing directives: lines that begine with #  
- The identifiers of preprocessing directives are called Symbolic Constaints
- A #define line can occur anywhere in a program. It affects only the lines in the file that come after it.
- Normally, all #defi ne lines are placed at the beginning of the file. 
- By convention, all identifiers that are to be changed by the preprocessor are Written in capital letters. 
- The contents of quoted strings are never changed by the preprocessor. 

-  #include "my_file.h" : is a preprocessing directive that causes a copy of the file my_file.h to be included 
    at this point in the file when compilation occurs. 
- A #include line can occur anywhere in a file, though it is typically at the head of the file. 
- The quotes surrounding the name of the file are necessary. 
- An include file, also called a header file, can contain #define lines and other #include lines. 
- By convention, the names of header files end in .h.
- As we have already seen, the preprocessing directive #include <stdio.h> causes a copy of the standard 
    header file stdio.h to be included in the code when compilation occurs. 
- In ANSI C, whenever the functions printf() or scanf() are used, the standard header file stdio.h should be included. 
- This file contains the declarations, or more specifically, the function prototypes, of these functions. 


*/
#include <stdio.h>

#define C 299792.458 /* speed of light in km/sec */
#define LIMIT 100
#define PI 3.14159





