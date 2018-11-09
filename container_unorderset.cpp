#include <iostream> 
#include <set> 
#include <iterator>
#include <bits/stdc++.h>
using namespace std; 
int main() {
   unordered_set<int> s;
   s.insert(90);
   s.insert(70);
   s.insert(50);
   s.insert(30);
   s.insert(10);
    s.insert(70);
    unordered_set<int>::iterator i;
    for(i = s.begin(); i != s.end(); ++i)
    {
        cout<<*i<<endl;
    }
    int key = 40;
    if(s.find(key) == s.end()) //find returns end iterator if key is not found
    cout<<key<<"not found"<<endl;
    else // else returns the iterator to that key
    cout<<key<<"found"<<endl;
    int n = s.erase(30);
    for(i = s.begin(); i != s.end(); ++i)
    {
        cout<<*i<<endl;
    }
    
    cout<<s.size()<<endl;
    
      cout<<(s.empty())? cout<<"empty" : cout<<"not";
    
   return 0;
}
