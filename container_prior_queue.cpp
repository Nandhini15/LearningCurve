#include <iostream> 
#include <queue> 
using namespace std; 
int main() {
    priority_queue<int> s;
    s.push(50);
    s.push(40);
    s.push(30);
    s.push(20);
    s.push(10);
    cout<<s.size();
    s.top();
    while(! s.empty()){
       cout<<s.top();
       s.pop();
    }
    cout<<'\n';
    
   return 0;
}
