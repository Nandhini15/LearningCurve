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
    //n-1 bcoz we r comparing each elt vd next elt. it is enough if u do till last bef elt.. bcoz only then ul have ssomething to compare vd
    for(i = 0; i < n-1; i++){
    //each time last elt ll get sorted.so ul continue to sort the remaining elts
        for(j = 0; j < n - i - 1; j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    //if u r printing take a count of all the elts
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
