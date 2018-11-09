#include <iostream> 
#include <list> 
using namespace std; 
int main() {
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<s.size();
    s.top();
    while(s != empty){
       cout<<s.top();
       s.pop();
    }
    cout<<'\n';
    
   return 0;
}
