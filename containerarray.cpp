#include<iostream> 
#include<array> // for array, at() 
#include<tuple> // for get() 
using namespace std; 
int main() {
    array<int, 5> a = { 8, 6, 4, 7, 10};
    int n = sizeof(a)/sizeof(a[0]);
    for(int i = 0; i < 5; i++)
    {
        cout<<a.at(i)<<endl;
        cout<<a[i]<<endl;
        cout<<get<0>(a)<<endl;
        cout<<a.front()<<endl; //first elt
        cout<<a.back()<<endl; //last elt
        cout<<a.size()<<endl;
        cout<<a.max_size()<<endl;
        a.fill(9); // fill all the elt of array vd 9
        cout<<a.empty()? cout<<"array empty":cout<<"not empty";
        cout<<endl;
        //swap(a, b); //two arrays of same size can be swapped vd each other
    }
    return 0;
}
