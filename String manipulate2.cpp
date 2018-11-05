#include <iostream>


using namespace std;


int main()
{
  
  int n;
  
  string s;
 
 string a[7] = {"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
 
   int m = sizeof(a)/sizeof(a[0]);

    cout<<"Enter no and a";
 
   cin>>n>>s;
   
 for(int i = 0; i < m; i++)
  
  {
     
   if(a[i]== s){
    
        n = n % 7;
         
   cout<<a[i + n];
    
    }
    }

  
  return 0;
}
