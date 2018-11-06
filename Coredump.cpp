//Core dump called Segmentation Fault
//Accessing memory that doesnt belongs to you
//error indicating memory corruption
//Modifying String Literal - trying to modify read only mem
int main() 
{ 
   char *str;  
  
   /* Stored in read only part of data segment */
   str = "GfG";      
  
   /* Problem:  trying to modify read only memory */
   *(str+1) = 'n';  
   return 0; 
}
//Accessing address that if freed 
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
//Accessing out of array index bounds

// C program to illustrate 
// Core Dump/Segmentation fault 
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
