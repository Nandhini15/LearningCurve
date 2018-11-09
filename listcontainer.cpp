#include <iostream> 
#include <list> 
using namespace std; 
int main() {
    list<int> a;
    a.assign({1, 2, 3, 4, 5});
    list<int> :: iterator i;
    for(i = a.begin(); i != a.end(); ++i){
        cout<<*i<<endl;
    }
    a.push_front(10);
    a.push_back(90);
    a.pop_back();
    a.emplace_front(30);
    a.pop_front();
    for(i = a.begin(); i != a.end(); ++i){
        cout<<*i<<endl;
    }
    a.remove(9);{
    a.remove_if([](int x){ return x > 5;});
    for(i = a.begin(); i != a.end(); ++i){
        cout<<*i<<endl;
    }
   a.reverse();
   for(i = a.begin(); i != a.end(); ++i){
        cout<<*i<<endl;
    }
    a.sort();
   for(i = a.begin(); i != a.end(); ++i){
        cout<<*i<<endl;
    }
    return 0;
}
}
