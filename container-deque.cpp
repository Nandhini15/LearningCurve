#include <iostream> 
#include <deque> 
using namespace std; 
int main() {
    deque<int> a;
    a.push_back(20);
    a.push_front(10);
    a.push_back(30);
    deque <int> :: iterator i;
    for(i = a.begin(); i != a.end(); ++i){
        cout<<*i<<endl;
    }
    cout<<a.size()<<endl;
    cout<<a.max_size()<<endl;
    cout<<a.at(1)<<endl;
    cout<<a.front()<<endl;
    cout<<a.back()<<endl;
    a.pop_front();
    for(i = a.begin(); i != a.end(); ++i){
        cout<<*i<<endl;
    }
    a.pop_back();
    for(i = a.begin(); i != a.end(); ++i){
        cout<<*i<<endl;
    }
    return 0;
}
