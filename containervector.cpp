#include<iostream> 
#include<vector>  
#include<tuple> // for get() 
using namespace std; 
int main() {
    vector<int> a;
    for(int i = 0; i < 5; i++)
    a.push_back(i);
    for(auto i = a.begin(); i != a.end(); i++)
    cout<<*i<<"";
    for(auto i = a.cbegin(); i != a.cend(); i++)
    cout<<*i<<"";
    for(auto ir = a.rbegin(); ir != a.rend(); ir++)
    cout<<*ir<<"";
    for(auto ir = a.crbegin(); ir != a.rend(); ir++)
    cout<<*ir<<"";
    cout<<"size is"<<a.size()<<endl;
    cout<<a.capacity()<<endl;
    cout<<a.max_size()<<endl;
    a.resize(10);
    cout<<a.size()<<endl;
    if (a.empty() == false) 
        cout << "\nVector is not empty"; 
    else
        cout << "\nVector is empty"; 
  
    // Shrinks the vector 
    a.shrink_to_fit(); 
    cout<<a[2]<<endl;
    cout<<a.front()<<endl;
    cout<<a.back()<<endl;
    int* p = a.data();
    cout<<*p<<endl;
    for(auto i = a.begin(); i != a.end(); i++)
    cout<<*i<<"";
    return 0;
}
