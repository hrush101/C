#include<stdio.h>

int main (){

int a=1 , c=1 , n ;

// Types of loops in c

// 1. For loop
// when the number of iterations are fixed / known , we now from where to start and where to end the loop

printf("For Loop \n");
for(int i=0 ; i < 10 ; i++ ) {
    
    printf("%d \n ", i);

}

// 2. While loop 
// when the number of iterations are not known basically the loop will iterate until the conditon is true so when the condition becomes false at run time it

printf("While Loop \n");
printf("enter a var between 1-10 : " );
scanf("%d",&n);

while (a < n ) {

    printf("%d \n",a);
    a++;

}
printf("\n");

// 3. do while 
// if the conditon is true / false in first go the loop will still execute as the condion is checked after the do is executed 
printf(" Do While Loop \n");
do {
    printf("no justice for wrong things in do while \n");
    c++;
}while(c<0);

}