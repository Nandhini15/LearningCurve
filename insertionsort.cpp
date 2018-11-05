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
    //from second elt,, all the elts bef the current elt must be in proper order
    //time comp is less bcoz of one for loop
    for(i = 1; i < n; i++){
        int key = a[i];
        int j = i -1;
        while(j>=0 && a[j]>key){
            a[j+1] = a[j];
            j = j-1;
        }
        a[j+1] = key;
        
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
