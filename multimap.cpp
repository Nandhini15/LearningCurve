//can have duplicate keys
//sorted order
//same keys bought together
//unique pairs
//insertion deletion and extraction is also possible
//modification is done only thru extraction
#include <iostream> 
#include <map>
#include <iterator>
using namespace std; 
int main()
{
    multimap<int, int> a;
    a.insert(pair<int,int>(1, 10));
    a.insert(pair<int,int>(2, 20));
    a.insert(pair<int,int>(2, 30));
    a.insert(pair<int,int>(4, 30));
    a.insert(pair<int,int>(5, 40));
    multimap<int, int>:: iterator i;
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
