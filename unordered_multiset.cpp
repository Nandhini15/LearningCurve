#include <iostream> 
#include <set> 
#include <iterator>
#include <bits/stdc++.h>
using namespace std; 
//not even unique
//no sorted order
//but the duplicate elts stay together
int main() {
   unordered_multiset<int> s ({1, 2, 3});
   unordered_multiset<int> s1 ({4, 5, 6});
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
    cout<<key<<"not found"<<endl;//doubt
    else // else returns the iterator to that key
    cout<<key<<"found"<<endl;
    int val = 70;
    if(s.count(val) > 0){
        cout<<val<<"present"<<endl;
    }else{
        cout<<val<<"not found"<<endl;
    }
    // pair<umit, > erange_it = ums2.equal_range(val); 
    // if (erange_it.first != erange_it.second) 
    //     cout << val << " appeared atleast once in "
    //                     "unoredered_multiset \n"; 
    s.erase(val);
    //s.clear() - deletes all the entries from the set
    int n = s.erase(30);
    for(i = s.begin(); i != s.end(); ++i)
    {
        cout<<*i<<endl;
    }
    
    cout<<s.size()<<endl;
    
      cout<<(s.empty())? cout<<"empty" : cout<<"not";
    
   return 0;
}
