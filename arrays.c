#include<stdio.h>

//                                             Arrays
//  Arrays are collection of elements of same data types stored in contiguous memory location ( one after another )
//  integer array address ex - [ 1000 | 1004 | 1008 | 1012 ]
//  Array can store elements of diffrent type too will need to create structure / union of that custom type

//  Array declaration and intializtion types in c 
//  1. int arr[5]; - declartion without intializtion
//  2. int arr[5] = {1, 2, 3, 4, 5}; - declaration with initialization
//  3. int arr[5] = {1,2} - partial initialization
//  4. int arr[] = {1, 2, 3, 4, 5}; - implicit size compiler determines the size based on the number of elements
//  5. int arr[5];
//     arr[0]=1 ;
//     arr[1]=2 ;
//     arr[2]=3 ;
//     arr[3]=4 ;
//     arr[4]=5 ;

int main(){

   int a[4] = {1,2,3,4}; // this is single dimentional array only contains 1 row and many coloumns
   int size = sizeof(a) / sizeof(a[0]);
   for (int i = 0; i < size; i++)
   {
      printf("%d is element of array at index : %d ",a[i],i);
   }
   
}