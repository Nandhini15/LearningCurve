//Missing no in an array - using sum formula
#include <iostream>
using namespace std;
int miss(int a[], int n){
    int total;
   total = (n+1)*(n+2)/2;
   for(int i = 0; i < n; i++)
   {
       total = total - a[i];
   }
   return total;
}
int main()
{
    int a[] = {1, 2, 4, 5, 6};
    int n = sizeof(a)/sizeof(a[0]);
    int m = miss(a,n);
    cout<<m;
    return 0;
}
// To print the sub array with sum as the given number.. time complexity - O(npower 2)
#include <iostream>
using namespace std;
int miss(int a[], int n, int sum){
    int c = 0; //cur sum
    for(int i = 0; i < n; i++){
        int c = a[i];
        for(int j = i +1; j <= n; j++){
            if(c == sum){
                cout<<i<<endl;
                cout<<(j-1)<<endl;
                return 1;
            }
            else if(c > sum || j == n){
                break;
            }
            c = c + a[j];
        }
    }
    return 0;
}
int main()
{
    int a[] = {15, 2, 4, 8, 9, 5, 10, 23};
    int n = sizeof(a)/sizeof(a[0]);
    int sum = 23;
    miss(a,n,sum);
    return 0;
}
//Time complexity O(n) same problem using one for loop
#include <iostream>
using namespace std;
int miss(int a[], int n, int sum){
    int c = a[0]; //cur sum
    int start = 0;
    for(int i = 1; i < n; i++){
      while(c > sum && start < i -1)
      {
          //if the current elt exceeds the sum, remove the starting elt
          c = c - a[start];
          start++;
      }
      if(c == sum)
      {
      cout<<start<<(i -1)<<endl;
      return 1;
      }
      if(i<n)
      {
       c = c + a[i];   
      }
    }
    return 0;
}
int main()
{
    int a[] = {15, 2, 4, 8, 9, 5, 10, 23};
    int n = sizeof(a)/sizeof(a[0]);
    int sum = 23;
    miss(a,n,sum);
    return 0;
}
//Leaders in an array - elts having all righmost elts smaller tham themselves
#include <iostream>
using namespace std;
int miss(int a[], int n){
    for(int i = 0; i < n; i++)
    {
        int j;
        for(j = i+1; j < n ; j++)
        {
            if(a[i] <= a[j])
            break;
        }
        if(j == n)
        {
            cout<<a[i]<<" ";
        }
    }
    
    return 0;
}
int main()
{
    int a[] = {15, 2, 4, 8, 9, 5, 10, 23};
    int n = sizeof(a)/sizeof(a[0]);
    miss(a,n);
    return 0;
}
//Reverse elements of an array
#include <iostream>
using namespace std;
void miss(int a[], int n){
   int begin = 0;
   int end = n -1;
   while(begin < end){
       int temp = a[begin];
       a[begin] = a[end];
       a[end] = temp;
       begin++;
       end--;
   }
}
void print(int a[], int n){
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int a[] = {15, 2, 4, 8, 9, 5, 10, 23};
    int n = sizeof(a)/sizeof(a[0]);
    miss(a,n);
    print(a,n);
    return 0;
}
//To print k smallest and largest elements
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void print(int a[], int n, int k){
   sort(a,a+n); // to print 1st three smallest elts
   for(int i = 0; i < k; i++)
   cout<<a[i]<<" ";
   sort(a, a+n, greater<int>()); // to print first three largest elts
   for(int i = 0; i < k; i++)
   cout<<a[i]<<" ";
}
int main()
{
    int a[] = {15, 2, 4, 8, 9, 5, 10, 23};
    int n = sizeof(a)/sizeof(a[0]);
    int k = 3;
    print(a,n,k);
    return 0;
}
//Sort elements by frequency count
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void print(int a[], int n){
   map<int, int, greater <int> > s;
   for(int i = 0; i < n; i++)
   {
      cout<<s[a[i]]++;
   }
   //now we need to sort the count array in descending order
   map<int,int> :: iterator it; // if u try sorting using map, it will sort the keys, not the values
    for (it=s.begin() ; it!=s.end() ; it++) 
        cout << "(" << (*it).first << ", "
             << (*it).second << ")" << endl; 
//try sorting the values. by transfering the entries of map to a vector

}
int main()
{
    int a[] = {2, 5, 2, 6, -1, 9999999, 5, 8, 8, 8 };
    int n = sizeof(a)/sizeof(a[0]);
    print(a,n);
    return 0;
}
//get count pairs
#include <bits/stdc++.h> 
using namespace std; 
  
// Returns number of pairs in arr[0..n-1] with sum equal 
// to 'sum' 
int getPairsCount(int arr[], int n, int sum) 
{ 
    unordered_map<int, int> m; 
    for (int i=0; i<n; i++) 
        cout<<m[arr[i]]++<<endl; 
    int twice_count = 0; 
    for (int i=0; i<n; i++) 
    { 
        cout<<sum-arr[i]<<m[sum-arr[i]]<<endl;
        twice_count += m[sum-arr[i]]; 
        if (sum-arr[i] == arr[i]) 
            twice_count--; 
    } 
    return twice_count/2; 
} 

int main() 
{ 
    int arr[] = {1, 5, 7, -1, 5} ; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int sum = 6; 
    cout << "Count of pairs is " 
         << getPairsCount(arr, n, sum); 
    return 0; 
} 
