#include<stdio.h>

int main () {

   int a=2,b=4;
   printf("The sum : %d ", a + b); // athematic + operator
   printf("The sub : %d ", a - b); // athematic - operator
   printf("The mul : %d ", a * b); // athematic * operator
   printf("The div : %d ", a / b); // athematic / operator
   printf("The modulo : %d ", a % b); // athematic modulo operator which works on with integer,double but not with float
   

   //types of operators 

   //arithmetic operators - , + , * , / , %
   //relational operators == , < <= , > >= , !=
   //logical operators  && , || , !
   //bitwise operators 
     

   // precedence of operators
   // Precedence Level   Operator(s)           Description                 Associativity
   // 1                  ()                    Parentheses                      N/A
   // 1                  []	                 Array subscript                      Left-to-right
   // 1                  .	                    Member access                        Left-to-right
   // 1                  ->	                 Member access with pointer	         Left-to-right
   // 1                  ++	                 Post-increment	                     Left-to-right
   // 1                  --	                 Post-decrement	                     Left-to-right
   // 2                  ++, --, +, -, !, ~	  Unary operators	                     Right-to-left
   // 2                  *, /, %	              Multi,Division,Modulus	            Left-to-right    
   // 3                  +, -	                 Addition, Subtraction	               Left-to-right
   // 4                  <, <=, >, >=	        Relational operators	               Left-to-right
   // 5                  ==, !=	              Equality operators                   Left-to-right
   // 6                  =,+=,-=,*=,/=,%=	     Assignment operators	               Right-to-left

   //example - 5+4*8/2 so 1st we will multiple it so 4X8=32 and then divde 32 by 2 which is 16 and then add it with 5 which is 21.

}