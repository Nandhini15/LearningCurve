#include <iostream> 
#include <set> 
#include <iterator>
#include <bits/stdc++.h>
using namespace std; 
void duplicate(int a[], int n)
{
    unordered_set<int> set;
    unordered_set<int> duplicate;
    for(int i = 0; i < n; i++){
        if(set.find(a[i])==set.end()){
           set.insert(a[i]); 
        }else{
            duplicate.insert(a[i]);
        }
    }
    unordered_set<int>::iterator i;
    for(i = duplicate.begin(); i != duplicate.end(); ++i){
        cout<<*i<<endl;
    }
}
int main() {
   int a[] = {1, 5, 2, 1, 4, 3, 1, 7, 2, 8, 9, 5};
   int n = sizeof(a)/sizeof(a[0]);
   duplicate(a,n);
   
   return 0;
}
