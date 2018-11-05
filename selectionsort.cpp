//more like normal sort
//considers 0 to n
//find smallest elt n place it in the beg.
//then 1 to n
//find small elt n place in the beg
/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<stdio.h>

using namespace std;
void bubblesort(int a[], int n){
    int i;
    int j;
    for(i = 0; i < n; i++){
       for(int j = i+1; j < n; j++){
           if(a[i]>a[j]){
               int temp = a[i];
               a[i] = a[j];
               a[j] = temp;
           }
       }
    }
    for(int i = 0; i < n; i++){
        cout<<a[i];
    }
}

int main()
{
int a[] = { 7, 0, 4, 17, 2, 5};
int n = sizeof(a)/sizeof(a[0]);
bubblesort(a,n);

    return 0;
}
