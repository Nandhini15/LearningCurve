#include <iostream> 
#include <forward_list> 
using namespace std; 
int main() {
    forward_list<int> a;
    a.assign({1, 2, 3, 4, 5});
    forward_list<int> :: iterator i;
    for(i = a.begin(); i != a.end(); ++i){
        cout<<*i<<endl;
    }
    a.push_front(10);
    a.emplace_front(30);
    a.pop_front();
    for(i = a.begin(); i != a.end(); ++i){
        cout<<*i<<endl;
    }
    i = a.insert_after(a.begin(), {8,9});
    
    a.erase_after(i);
    for(i = a.begin(); i != a.end(); ++i){
        cout<<*i<<endl;
    }
    a.remove(9);{
    a.remove_if([](int x){ return x > 5;});
    for(i = a.begin(); i != a.end(); ++i){
        cout<<*i<<endl;
    }
    forward_list<int> b = {40, 50, 60}; 
    b.splice_after(b.begin(), a); //transfers elts from one forward list to another
    for(int&c : b)
    cout<<c<<endl;
    return 0;
}
}
