#include <iostream> 
#include <unordered_map>
#include <iterator>
using namespace std;
//unique keys
//no sorted order
//unordered_multimap<string, double> a({{"root1", 3.14}, {"root2", 4.14}, {"root3", 5.46}, {"root4", 1}});
int main()
{
    unordered_map<string, double> a;
    a["root1"] = 3.14;
    a["root2"] = 4.14;
    a["root3"] = 5.14;
    a["root4"] = 6.14;
    a.insert(make_pair("root5",8.90));
    string key = "root1";
    if(a.find(key) == a.end()){
        cout<<key<<"not found"<<endl;
    }else{
        cout<<key<<" found"<<endl;
    }
    unordered_map<string, double>::iterator i;
    for(i = a.begin(); i != a.end(); ++i)
    cout<<i->first<<" "<<i->second<<endl;
    return 0;
}
