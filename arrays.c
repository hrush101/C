#include<stdio.h>
#include <stdlib.h>
//                                             Arrays
//  Arrays are collection of elements of same data types stored in contiguous memory location ( one after another )
//  integer array address ex - [ 1000 | 1004 | 1008 | 1012 ] as integer variable is of 4 bytes each
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


//                                            Types of Array
//  Dimension wise 
//  1. single dimensional array - array with only one row and multiple columns 
//                              Ex -  int a[4] = {1,2,3,4};


//  2. two  dimensional array - array with multiple sub arrays or a matrix of n rows and n columns
//                              Ex -  int a[2][4] ={
//                                                   {1,2,3,4} ,
//                                                   {11,12,13,14}
//                                                 };

//  Storage wise
//  1. Static array - In static array size is already known at compile time and is fixed cannot be increased / decreased at run time

//  2. Dynamic array - In dynamic array memory is allocated at run time and can be increased / decreased at run time
//                   - Memory of dynamic array is allocated using <stdlib.h> library functions like :
//                     1. malloc()
//                     2. calloc()
//                     3. realloc()
//                     and can be deallocated using free()
//                   - gets memory allocation in heap memory

//  Malloc() - allocates block of memory of specified size ,
//             it does not initialize memory
//             returns a void pointer pointing to allocated memory or return null if it fails to allocate


//  syntax - int *ptr = (int *)malloc(length * sizeof(int));
//           where 'length' is the number of blocks or length of an array
//           we type casted here because malloc returns a void pointer and our array is of type integer so we need a pointer of of type integer

//  Calloc() - allocates block of memory of specified size ,
//            it initializes memory with zero that is by default after allocation each block contains zero value
//            returns a void pointer pointing to allocated memory or return null if it fails to allocate

//  syntax - int *ptr = (int *)calloc(length , sizeof(int));

//  Realloc - use to resize previously allocated memory ( dynamic memory)
//         - it is used when you need to resize a allocated array of 10 integers but now reduce it to 5
//         - it allows resizing of memory blocks at runtime, either to increase or decrease their size

//  syntax - int *ptr = (int *)realloc( array , length * sizeof(int));


//  Free()  - Deallocates previously allocated memory 
//         - prevents from memory leak

//  syntax - free(ptr);



int length (int *ptr , int size) ;

// calculate length of static array
int  length (int *ptr , int size ) {

   int len=0;
   return len = size / sizeof(ptr[0]); 
   
   // size is total size of array / size of one int element which is 4 bytes
   // so if total size is 16 bytes then 16 / 4 = 4 elements
   
   
}

int linear_search( int *arr , int size , int num );

int linear_search( int *arr , int size , int num ){

   for(int i=0;i<size;i++){
      if(*( arr + i ) == num ){
         return 1;
      }
   }
   
   return 0;  
}



int main(){

   int a[] = {1,2,3,4}; // this is single dimensional array only contains 1 row and many columns

   for (int i = 0; i < length(a,sizeof(a)) ; i++)
   {
      printf("%d is element of array at index : %d \n ",a[i],i);
   }
   

   // static array with size already defined
   int b[10];

   printf("enter 10 elements - \n ");
      
   for (int i = 0; i < 10 ; i++)
   {
      printf("enter the %dth element : \n" ,i);
      scanf("%d", &b[i]);
   }


   printf("printing entered elements of single dimensional static array of length : %d \n" , length(b,sizeof(b)));

   for (int i = 0; i < 10 ; i++)
   {
      printf("%d is element of array at index : %d \n ",b[i],i);
   }
   
   
   // Dynamic array 

   int *ptr;
   int size;
   int num;
   
   printf("How many number you want to enter : \n");
   scanf("%d",&size);

   ptr=(int *)malloc(size * sizeof(int));
   
   for(int i=0;i<size;i++)
   {
     printf("enter the number : \n");
     scanf("%d", ptr + i ); // or you can do (ptr + i)
   }
   
   printf("entered numbers are : \n");

   for(int i=0;i<size;i++)
   {
     printf("%d \n",*(ptr + i));
   }

   free(ptr);
   ptr=NULL;

   // search element in array
   printf("enter the number you want to enter : \n");
   scanf("%d",&num);
   int check =linear_search(ptr,size ,num);
   
   if (check == 1){
      printf("Entered number exists : \n");
   }
   else {
      printf("Entered number not found : \n");
   }
}