#include <iostream>
#include <exception>
using namespace std;

int main(){
    int n;
    cout<<"enter no"<<endl;
    cin>>n;
     int a = n%2;
    try{
        try{
            if(a == 0){
                throw 2;
            }
        }
       catch(int e)
        {
            cout<<"exception caught";
            throw 'x';
        }
    }catch(char x){
        cout<<"char expection caught";
    }
    
}
