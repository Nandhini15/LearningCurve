Core Dump/Segmentation fault is a specific kind of error caused by accessing memory that “does not belong to you.”

When a piece of code tries to do read and write operation in a read only location in memory or freed block of memory, it is known as core dump.
It is an error indicating memory corruption.
Modifying a string literal : 
//1st trying to write in read only memory
int main() 
{ 
   char *str;  
  
   /* Stored in read only part of data segment */
   str = "GfG";      
  
   /* Problem:  trying to modify read only memory */
   *(str+1) = 'n';  
   return 0; 
} 
//Abnormal termination of program.

//Accessing an address that is freed : 
 #include <stdio.h> 
#include<alloc.h> 
int main(void) 
{ 
    // allocating memory to p 
    int* p = malloc(8); 
    *p = 100; 
      
    // deallocated the space allocated to p 
    free(p); 
      
    // core dump/segmentation fault 
    //  as now this statement is illegal 
    *p = 110; 
      
    return 0; 
} 
//array index out of bound
#include <iostream> 
using namespace std; 
  
int main()  
{ 
   int arr[2]; 
   arr[3] = 10;  // Accessing out of bound 
   return 0; 
} 
