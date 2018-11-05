#include <iostream>


using namespace std;


int main()
{
  
  int n;
   
 cout<<"Enter no";
 
 cin>>n;
char a[] = {'+','-'};
    
for(int i = 0; i < n; i++)
    
{
        if(i%2 == 0)
      {
          
        cout<<a[0];
    
       }else{
          
        cout<<a[1];
   
     }
    }

   
 return 0;

}

