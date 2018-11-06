#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main()
{
    int a = 20;
    string s = to_string(a);
    cout<<s;
    //using stringstream
    stringstream ss;
    ss<<a; // ss takes int as input
    string g = ss.str();
    cout<<g;
    string f ="12345";
    //stoi = string to int
    //atoi = ascii to int
    int n = stoi(f);
    cout<<n;
    return 0;
}
