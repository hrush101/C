#include <stdio.h> /* This  is a preprocessor directive that includes the standard input/output library contains functions for input and output operations*/

// int a = 8; /* global variable with global scope variable can be used in entire file */

int main() { /* OS finds main function to start execution of the program */ 

    int a = 3; /* local integer variable with local scope which is of 4 bytes */

    signed int b = -5 ; /* Can store negative and positive numbers */
    
    unsigned int c = 5 ; /* Unsigned integers can represent only non-negative/positive values 0 and positive integers */

    float e = 2.5 ; /* floating point integers */

    char d = 'd' ;

    const int f = 3.14 ; // constant declaration for variable using keyword const

    // Primitive Data Types, Sizes, and Ranges

    /*

    Data Type        Size (in bytes)          Range (Typical)                          Description
    ----------------------------------------------------------------------------------------------
    char                  1                   -128 to 127 (signed)                     Single character (ASCII).
                                              or 0 to 255 (unsigned)

    int                   4                   -2,147,483,648 to 2,147,483,647          Integer numbers.

    float                 4                   ±3.4E-38 to ±3.4E+38                     Single-precision floating point.

    double                8                   ±1.7E-308 to ±1.7E+308                   Double-precision floating point.

    void                  0                          N/A                               Represents no value or no type.

    */

    /*

    Modified Data Types
    ----------------------------------------------------------------------------------------------
    Data Type             Size (in bytes)          Range (Typical)
    ----------------------------------------------------------------------------------------------
    short int             2                        -32,768 to 32,767

    unsigned short int    2                        0 to 65,535

    long int              8                        -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807

    unsigned long int     8                        0 to 18,446,744,073,709,551,615

    unsigned int          4                        0 to 4,294,967,295

    long double           16                       ±3.4E-4932 to ±1.1E+4932
    
    */


    printf("The int number : %d ", a); /* so in this printf statement %d is format specifier for type integer */

    printf(" The float number : %f ",e); /* %f is format specifier for type floating point */

    printf(" The character : %c ",d); /* %c is format specifier for type charecters */

    return 0; /* main functions are always expected to return an int , You can return an integer or exit() from main(). */

}


//                                           NOTE  
// In C, if you declare a variable without initializing it, it will hold a garbage value.
// A garbage value is a random value present at the memory location, which was used by a previous process or function.
// The memory location may contain data from previous process, which is now assigned to the variable.
// Local variables in C are allocated memory on stack, which might have been previously used by another function or process.
// Garbage values can lead to unexpected results, logical errors, and corrupted data.
// Always initialize variables with appropriate values (e.g., zero for integers or NULL for pointers) to avoid these issues.
