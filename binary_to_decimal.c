#include<stdio.h>
#include<stdlib.h>


// Decimal to binary - keep dividing by 2 util the quotient becomes 0
// and calculate the binary bits in reverse order which 1101 for decimal 13

// 2 | 13  -  1  ^
// ------
// 2 |  6  -  0  |
// ------
// 2 |  3  -  1  |
// ------
// 2 |  1  -  1  |
// ------
//   |  0

int *ptr = NULL;

int binary_array_length(int num);
int * to_binary(int num);
// int * to_decimal(int num);


int binary_array_length(int num){

   int length=0;
   // calculate lenght of 1s and 0s in binary for array
   while (num > 0)
   {
    length++;
    num=num/2;
   }

   return length;

}




int * to_binary(int num){
   int length = binary_array_length(num);
   ptr=(int *)malloc( length * sizeof(int));

   // calculate binary

   for( int i=length-1 ; i >= 0 ; i-- ){

    ptr[i] = num % 2 ; // to store reminder  example - 13 / 2 = 1 is the reminder
    num = num / 2 ; // to calculate quotient until it becomes 0 


   }  
   
   return ptr ;
   
}

int main(){
    
    int decimal=0;

    printf("enter the number to convert to binary : ");
    scanf("%d",&decimal);

    int length = binary_array_length(decimal);
    
    int *a =to_binary(decimal); 
    
    printf("Binary of %d is = " ,decimal);
    
    for (int i = 0; i < length; i++)
    {
        printf("%d %c", *(a + i) ,' ');
    }
    
    printf("\n");

    free(ptr);
    return 0;
}