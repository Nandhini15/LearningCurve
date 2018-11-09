#include <iostream> 
#include <queue> 
using namespace std; 
int main() {
    queue<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<s.size();
    cout<<s.front();
    cout<<s.back();
    
    while(!s.empty()){
       cout<<s.front();
       s.pop();
    }
    cout<<'\n';
    
   return 0;
}
