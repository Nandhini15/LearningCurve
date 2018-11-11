#include <iostream>
#include <exception>
#include<ofstream>
#include<ifstream>
using namespace std;
int main()
{
    char a[75];
    ofstream os;
    os.open("new.txt");
    cout<<"write"<<endl;
    cin.getline(input, 100);
    os<<input<<endl;
    ifstream if;
    string s;
    if.open("new.txt");
    while(getline(if, s))
    {
        cout<<s<<endl;
    }
    isclose();
    return 0;
}
