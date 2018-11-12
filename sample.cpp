//Prime no count within a given range
#include <iostream> 

using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i = 2; i < n; i++)
    {
       int flag = 1;
        for(int j = 2; j <= i/2; j++)
        {
            if(i%j == 0)
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
        cout<<i<<" ";
    }
    return 0;
}
//Palindrome
#include <iostream> 

using namespace std;
int main()
{
    int n;
    
    int s;
    int m = 0;
    cin>>n;
    int temp = n;
    while(n > 0){
     s = n%10;
     m = m*10 + s;
     n = n/10;
    }
    if(temp == m)
        cout<<"yes palindrome"<<endl;
        else
        cout<<"not"<<endl;
    return 0;
}
//Factorial
#include <iostream> 

using namespace std;
int main()
{
    int n, fact = 1;
   cin>>n;
   for(int i = 1; i <= n; i++){
      fact = fact * i; 
   }
   cout<<fact<<endl;
    return 0;
}
//Recursion
#include <iostream> 

using namespace std;
int factorial(int n){
    if(n<0)
    return (-1);
    if(n==0)
    return (1);
    else
    return (n*factorial(n-1));
}
int main()
{
    int n;
    cin>>n;
   int f = factorial(n);
   cout<<f<<endl;
   return 0;
}
//amstrong
#include <iostream> 
//sum of the cubes of the digits
using namespace std;
int main()
{
    int n;
    
    int s;
    int m = 0;
    cin>>n;
    int temp = n;
    while(n > 0){
     s = n%10;
     m = m + s*s*s;
     n = n/10;
    }
    if(temp == m)
        cout<<"yes amstrong"<<endl;
        else
        cout<<"not"<<endl;
    return 0;
}
//sum of the digits of the no
#include <iostream> 
//sum of the cubes of the digits
using namespace std;
int main()
{
    int n;
    
    int s;
    int m = 0;
    cin>>n;
    int temp = n;
    while(n > 0){
     s = n%10;
     m = m + s;
     n = n/10;
    }
    cout<<"sum is "<<m<<endl;
    return 0;
}
//swap two nos vdut third
#include <iostream> 
//swap two nos vdut three var
using namespace std;
int main()
{
    int a, b;
    cout<<"enter a and b"<<endl;
    cin>>a;
    cin>>b;
    a = a + b;*
    b = a - b;/
    a = a - b;/
    cout<<a<<" "<<b<<endl;
    return 0;
}
//Matrix Multiply
#include <iostream> 
//swap two nos vdut three var
using namespace std;
int main()
{
    int a[10][10], b[10][10], d[10][10];
    int r, c;
    cout<<"Enter rows"<<endl;
    cin>>r;
    cout<<"Enter rows"<<endl;
    cin>>c;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cin>>b[i][j];
        }
    }
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
     d[i][j] = 0;
    for(int k = 0; k < c; k++)
    {
        cin>>d[i][j];
    }
        }
    }
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cout<<d[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
//Decimal To Binary
a[i]=n%2;    
n= n/2; 
//Alphabet Triangle
#include <iostream>  
using namespace std;  
int main()  
{  
 char ch='A';    
    int i, j, k, m;    
    for(i=1;i<=5;i++)    
    {    
        for(j=5;j>=i;j--)    
            cout<<" ";    
        for(k=1;k<=i;k++)    
            cout<<ch++;    
            ch--;    
        for(m=1;m<i;m++)    
            cout<<--ch;    
        cout<<"\n";    
        ch='A';    
    }    
return 0;  
}  
