#include <iostream> 
#include <map>
#include <iterator>
//colln of key value pairs
//sorted by keys
//unique keys
//no two mapped values can share the same key - no <
using namespace std; 
int main()
{
    map<int, int> a;
    a.insert(pair<int,int>(1, 10));
    a.insert(pair<int,int>(2, 20));
    a.insert(pair<int,int>(3, 20));
    a.insert(pair<int,int>(4, 30));
    a.insert(pair<int,int>(5, 40));
    map<int, int>:: iterator i;
    for(i = a.begin(); i != a.end(); ++i)
    cout<<'\t'<<i->first
        <<'\t'<<i->second<<'\n';
    a.erase(a.begin(),a.find(2));
     a.erase(2);
    for(i = a.begin(); i != a.end(); ++i)
    cout<<'\t'<<i->first
        <<'\t'<<i->second<<'\n';
   cout<<a.upper_bound(4)->first<<a.upper_bound(4)->second<<endl;
  
   return 0;
}
