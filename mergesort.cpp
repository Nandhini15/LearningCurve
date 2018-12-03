/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<stdio.h>

using namespace std;
int merge(int a[], int l, int p, int h){
    //if only two elts then lower n middle ll be the same..if three then 3 distinct values
    //n1 and n2 contains the values from qs.here 001 ie only two values.so n1 holds 1 and n2 holds 1
    int n1 = p - l + 1;
    int n2 = h - p;
    int L[n1],R[n2];
    for(int i = 0; i < n1; i++){
        L[i] = a[l+i];
    }
    for(int j = 0; j < n2; j++){
        R[j] = a[p+j+1];
    }
    int i = 0;
    int j = 0;
    int k = 1;
    while(i < n1 && j < n2){
        if(L[i] <= R[j]){
        a[k] = L[i];
        i++;
        }else{
            a[k] = R[j];
            j++;
        }
        k++;
    }
      while (i < n1) 
    { 
        a[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    while (j < n2) 
    { 
        a[k] = R[j]; 
        j++; 
        k++; 
    } 
} 

void quicksort(int a[], int l,int h){
   if(l < h){
     int p = (l + h)/2;
       quicksort(a, l, p);
       quicksort(a, p+1, h);
       merge(a, l, p, h);
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
