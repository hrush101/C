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

int *ptr=NULL;

int binary_array_length(int num);
int * to_binary(int num);


int binary_array_length(int num){

   int length=0;
   // calculate length of 1s and 0s in binary for array
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


// Binary to Decimal - keep adding 2 to the power of position of bit that is
// for binary 1101 = 1 X 2^3 + 1 X 2^2 + 1 X 2^1 + 1 X 2^0 
//                 = 1 X 8   + 1 X 4   + 1 X 0   + 1 X 1
// So, Decimal is  = 13
// here 2^1 =0 as on that postion the bit is zero , so  no matter the position 2^postion it contributes 0 to the total sum
// here 2^0 =1 , as anything raise to zero is 1

int to_decimal(int * num , int size);
int power(int num , int exponent);


int power(int num , int exponent){
    int result = 1;
    for (int i=1; i<=exponent ; i++){
        result=result*num;
    }
    
    return result;   
}


int to_decimal(int * num ,int size){
   
   int sum=0,exponent=0;

   for( int i=size-1 ; i >= 0 && exponent < size ; i-- , exponent++ ){

                sum += (*(num + i)) * power(2,exponent);
                
   }
   
   return sum;
}

int main(){
    

    int decimal=0,size=0;

    printf("Enter the number to convert to binary : ");
    scanf("%d",&decimal);

    int length = binary_array_length(decimal);
    
    int *a =to_binary(decimal); 
    
    printf("Binary of %d is = " ,decimal);
    
    for (int i = 0; i < length; i++)
    {
        printf("%d %c", *(a + i) ,' ');
    }
       
    free(ptr);
    ptr=NULL;

    printf("\n");
    printf("\n");
    
    printf("Enter the size of binary number : ");
    scanf("%d",&size);

    int *bits=(int *)malloc( size * sizeof(int));
    
    printf("Enter the binary bits 1s and 0s space separated : ");

    for (int i = 0; i < size; i++)
    {
        scanf("%d",&bits[i]);                                     
    }

    int result=to_decimal(bits , size);
    
    printf("Entered binary No. ");

    for (int i = 0; i < size; i++)
    {
        printf("%d %c", *(bits + i) ,' ');
    }
    
    printf("to Decimal is %d : " , result);
    printf("\n");

    free(bits);
    bits=NULL;
    
    return 0;
}