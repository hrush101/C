#include<stdio.h>

int  sum (int a,int b);
void callbyreference (int *a, int *b);
int  factorial(int num);
void first(int num);
void second(int num);

//                                                    Functions

//  Functions are small computing tasks which helps to split a complex computing problem into small components 
//  which will solve a bigger problem in divide and conquer way 
//  functions can be used (n) times which makes them reusable for similar tasks 
//  functions may or maynot recive values and may or maynot return the values after computing it 

//  before we define a function we declare it.
//  syntax to write a function declaration 
//  return type  function name  parameters / arguments with there data type
    void         fun            ( int i );

//  Note If you do not declare a function 1st, the function must be defined before it is called by caller function 

//  syntax to write a function defination
//  return type  function name  parameters / arguments with there data type
//  Ex - function defination
    void         fun            ( int i ) 
    {
      printf("this is fun function , which recives a integer value %d\n",i);  // function body where the actual computing happens
    }


// caller function which calls to the function
int main()
   {
      int a=2,b=5;
      int i = 1;
      fun(i); // funtion call with argument 

      int s = sum(a,b); // these are called actual parameter 
      
      // this is call by value , here the actual variables remains unaffected

      callbyreference ( &a, &b ); // call by reference passing references of variables.
      printf("%d is a's value after modification and %d is b's value after modification \n " , a ,b );
      

      printf("factorial of a number 5 is = %d \n", factorial(5));// the direct recursion call 

      first(10); // the indirect recursion call

      return 0;
   }

// 1. function call - functions can be called from main() function , it can be called from another function too ,
//    if function calls it self we will call it as recursion 

//    calling function from a file example printf() which is declared in #include<stdio.h> header file 
//    which only contains its declartion and not defination 

// 2. types of function call - call by value
//                             call by refrence

//                                                    Call by Value

// you can see call for below function in main() where paramters are passed by value
// passing by value means that the caller passes copy of the actual parameter and not the actual value to the function so function dont have access 
// to the addresses of original variables and therefore they remain unchanged.

int sum (int a,int b) // these are formal parameters which are copy of actual parameters
  {
    return (a+b);
  }

// NOTE : In c / other languages (except go) a function can return only one value / variable
// because the return statement supports a single value
// To return multiple values, use pointers or structures.


//                                                    Call by Reference

// the memory address of variables are passed to the function , instead of passing the variable's actual value as copy
// this allows the function to access/modify actual variables 
// the address are catched / pointed by pointers as a function parameters
// the function's parameter is defined as a pointer ex -void fun (int *a, int *b) , these pointers stores the memory address of the variable

// Ex -
void callbyreference (int *a ,int *b)
  {

    *a=8; // * is dereference operator that pointers are used to access the value of variable/address it is pointing to 
    *b=4; // so as it has the address of b i can go an overwrite the memory block with new assigned value

  }


//                                                    Recursion
//
// when function calls itself within the function defination or from another function is called recursion
//                                                   Types of recursion
// 1. Direct recursion - the function calls itself within its own body
// Ex -

int factorial(int num){

  if(num <= 1)
  {

    return 1;// base case to stop recursion if you don't give base case the function calls wont stop and will lead stackoverflow

  }

  else
  {

    return num * factorial(num-1); // direct recursive call where function calls itself

  }

}


// 2. Indirect recursion - the function calls another function and then from another function it calls itself
// Ex -

void first(int num){

  if (num > 0)
  {
    printf("%d in function first() \n" , num );
    second(num-1);// function first calls second
  }
  


}

void second(int num){

  if (num > 0 )
  {
    printf("%d in function second() \n", num );
    first(num - 1 );// function second calls first
  }

}


//                                                    Scope

// Types of Scope:
// Local Scope (Function Scope)
// Global Scope
// Block Scope (Within a Block of Code)

// Local Scope - variables declared in function are only accessible in function so they have local scope they cannot be accessed
//               outside of the function 
// 1. the variables are created when function is called and destroyed when the function is invoked 
// Thus, when a function is called again, the local variables will be initialized again and will not retain the value it had during the previous call.
// 2. memory is allocated in stack memory

// Global Scope - variables declared outside all functions they are visible / accessible throught the entire program 
// 1. it has global scope which means it wont get reintiallized to what it was at the time of declaration
// 2. global varibales are created when the program starts and destroyed when the program terminates.
// 3. they can be modified by any function in program
// 4. memory is created in heap memory 

// Block Scope - variables are blocked scope , only accessible in block 
// 1. created when the block is entered and destroyed when block is exited
// 2. used for temporary purpose example use of 'i' in for loop - for (int i = 0 ; i<n ; i++)
// 3. memory is created in stack

// Best explain nation of stack and heap memory - https://youtu.be/_8-ht2AKyH4?si=Oa5rUGCwWuvoKWpQ

// +-----------------------------------------------------+
// |                    Program Code                     |
// |    (Text Segment - Instructions for the Program)    |
// |    - Contains compiled code (instructions)          |
// +-----------------------------------------------------+
// |              Global/Static Variables                |
// |    (Global variables, static variables, constants)  |
// |    - Variables that persist throughout the program  |
// |    - Allocated once, used throughout program's life |
// +-----------------------------------------------------+
// |                      Heap Memory                    |
// |  (Dynamically allocated memory using malloc, etc.)  |
// |   - Variables that are allocated dynamically at     |
// |     runtime (e.g., using malloc or calloc)          |
// |   - Must be manually freed using free()             |
// |                                                     |
// |   Example:                                          |
// |    int* ptr = malloc(100);  // Allocates 100 bytes  |
// |    ptr stores the memory address of the allocated   |
// |    block in the heap.                               |
// +-----------------------------------------------------+
// |                      Stack Memory                   |
// |   (Function calls, local variables, parameters)     |
// |   - Function call data: return addresses, local     |
// |     variables, function parameters                  |
// |   - Stack grows downwards as functions are called   |
// |   - Memory is automatically freed when the function |
// |     exits                                           |
// |                                                     |
// |   Example:                                          |
// |    void myFunction() {                              |
// |        int x = 10;   // Local variable x allocated  |
// |        int y = 20;   // Local variable y allocated  |
// |    }                                                |
// |                                                     |
// +-----------------------------------------------------+
// |                     Unused Memory                   |
// |    - Empty space that has not been allocated yet    |
// +-----------------------------------------------------+