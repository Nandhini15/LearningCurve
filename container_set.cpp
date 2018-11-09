#include <iostream> 
#include <set> 
#include <iterator>
using namespace std; 
int main() {
   set<int> s;
   s.insert(90);
   s.insert(70);
   s.insert(50);
   s.insert(30);
   s.insert(10);
    set<int>::iterator i;
    for(i = s.begin(); i != s.end(); ++i)
    {
        cout<<*i<<endl;
    }
    int n = s.erase(30);
    for(i = s.begin(); i != s.end(); ++i)
    {
        cout<<*i<<endl;
    }
    cout<<*s.upper_bound(50)<<endl;
    cout<<*s.lower_bound(50)<<endl;
    cout<<s.size()<<endl;
    
      cout<<(s.empty())? cout<<"empty" : cout<<"not";
    
   return 0;
}
