/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<stdio.h>

using namespace std;
void swap(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
}
int partition(int a[], int l, int h){
    int key = a[h];
    int i = l-1;
    for(int j = l; j < h; j++){
        if(a[j] <= key){
            i++;
            swap(&a[i],&a[j]);
        }
    }
    swap(&a[i+1],&a[h]);
    return i+1;
}
void quicksort(int a[], int l,int h){
   if(l < h){
     int pi = partition(a,l,h);
       quicksort(a, 0, pi-1);
       quicksort(a, pi+1, h);
   }
}
void printArray(int a[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        cout<<a[i];
} 
 

int main()
{
int a[] = { 7, 0, 4, 17, 2, 5};
int n = sizeof(a)/sizeof(a[0]);
quicksort(a, 0, n-1);
printArray(a, n);
    return 0;
}
