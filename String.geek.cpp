//Swap strings
#include <iostream>
#include<string>
using namespace std;
//vdout & its pass by value. vd & its pass by ref
//if we mention const in front of the string, it is read only ref.it cannot be modified
void swap(string &a, string &b)
{
    string temp;
    temp = a;
    a = b;
    b = temp;
}
int main()  
{  
    //string can be stro
   string a;
   a = "nandhu";
   string e;
   e = "gee";
   char * c;
   char * d;
   c = "hi";
   char b[] = "vino";
   d = "hello";
  swap(a, e);
   
  cout<<a;
 cout<<e;
return 0;  
}  
//using charcter
#include <iostream>
#include<string>
using namespace std;
//vdout & its pass by value. vd & its pass by ref
//if we mention const in front of the string, it is read only ref.it cannot be modified
void swap(char **c, char **d)
{
    char *temp = *c;
    *c = *d;
    *d = temp;
    
}
int main()  
{  
    //string can be stro
   string a;
   a = "nandhu";
   string e;
   e = "gee";
   char * c;
   char * d;
   c = "hi";
   char b[] = "vino";
   d = "hello";
   swap(&c, &d);
  cout<<c;
 cout<<d;
return 0;  
}  
//Sort a String
#include<bits/stdc++.h> 
using namespace std; 
  
const int MAX_CHAR = 26; 
  
void sortString(string &str) 
{ 
    int charCount[MAX_CHAR] = {0}; 
    for (int i=0; i<str.length(); i++){
        cout<<str[i]-'a'<<charCount[str[i]-'a']++;   // here it is ++ so count+1
        cout<<endl;
    }
    for (int i=0;i<MAX_CHAR;i++) 
    {
        for (int j=0;j<charCount[i];j++) //< count bcoz count is given +1
        {
            cout << (char)('a'+i); //the actual value is obtained
        }
            cout<<endl;
    }
} 
//things to consider.. MAX_CHAR 0-25, str[i]-'a' & then char('a'+i)
int main() 
{ 
    string s = "geeksforgeeks";     
    sortString(s);     
    return 0; 
} //Array sort
// C++ program to demonstrate default behaviour of 
// sort() in STL. 
#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	int arr[] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
    cout<<arr<<endl;
    cout<<(arr+n)<<endl;
	sort(arr, arr+n); 

	cout << "\nArray after sorting using "
		"default sort is : \n"; 
	for (int i = 0; i < n; ++i) 
		cout << arr[i] << " "; 

	return 0; 
} 
//Sort array of strings using vector
#include<iostream>
#include <algorithm> 
#include <vector>
#include <string>
using namespace std;
int main()
{
vector<string> s = {"John", "Bob", "Joe", "Zack", "Randy"};
sort(s.begin(), s.end(), greater<string>());
for(string &c : s)
cout<<c<<" ";
return 0;    
}

//String palindrome
#include<iostream>
// #include <algorithm> 

#include <string>
using namespace std;
string reverse(string &s)
{
    int begin = 0;
    int end = s.length() -1;
    while(begin < end)
    {
        swap(s[begin++], s[end--]);
    }
    return s;
}
int main()
{
string s = "vino";
 
 string n;
 n = reverse(s);
 if(n == s){
     cout<<"yes palindrome";
 }
 cout<<s;
return 0;    
}
// Frequency -Max occuring char
#include<bits/stdc++.h> 
#define ASCII_SIZE 256 
using namespace std;
char getMaxChar(char* s)
{
    int count[ASCII_SIZE] = {0};
    int len = strlen(s);
    int max = 0;
    int result = 0;
    for(int i = 0; i < len; i++){
        count[s[i]]++;
        if(max < count[s[i]]){
            max = count[s[i]];
            result = s[i];
        }
    }
    return result;
}
int main()
{
    char s[] = "Nandhini";
    cout<<getMaxChar(s);
}
//To remove duplicate elt
if(count[s[i]] > 1){
         cout<<s[i]--;
        }
//Remove duplicate
#include<bits/stdc++.h> 
using namespace std;
char* getMaxChar(char* s, int n)
{
    int in = 0;
   
    for (int i=0; i<n; i++) { 
         
     // Check if str[i] is present before it   
     int j;   
     for (j=0; j<i; j++)  
        if (s[i] == s[j]) 
           break; 
       
     // If not present, then add it to 
     // result. 
     if (j == i) 
        s[in++] = s[i]; 
   } 
     
   return s; 
} 
int main()
{
    char s[] = "Nandhini";
     int n = sizeof(s)/sizeof(s[0]);
    cout<<getMaxChar(s, n);
}
//Second Max char in a char array..string
#include<bits/stdc++.h> 
#define ASCII_SIZE 256 
using namespace std;
char getMaxChar(char* s)
{
    int count[ASCII_SIZE] = {0};
    int len = strlen(s);
    int max = 0;
    int result = 0;
    for(int i = 0; i < len; i++){
        count[s[i]]++;
        
        if(max < count[s[i]]){
            max = count[s[i]];
            result = s[i];
        }
    }
    return result;
}
int main()
{
    char s[] = "Nandhini";
    cout<<getMaxChar(s);
}
//Print individual words and count of words
//String Stream - associates a string objectwith a stream allowing you to read
//from the string as if it were a stream (like cin)
//str() — to get and set string object whose content is present in stream.
//operator << — add a string to the stringstream object.
//operator >> — read something from the stringstream object,

#include<bits/stdc++.h> 
using namespace std; 
void count(string s)
{
    string word;
    stringstream is(s);
    int count = 0;
    while(is>>word)
    {
        cout<<word;
        count++;
    }
    cout<<count;
}
int main()
{
    string s ="geeks for geeks geeks ";
    count(s);
    return 0;
}
//words and their corres counts in a string
//String Stream - associates a string objectwith a stream allowing you to read
//from the string as if it were a stream (like cin)
//str() — to get and set string object whose content is present in stream.
//operator << — add a string to the stringstream object.
//operator >> — read something from the stringstream object,

#include<bits/stdc++.h> 
using namespace std; 
void count(string s)
{
    string word;
    stringstream is(s);
    map<string, int> count;
    while(is>>word)
    {
        cout<<word<<count[word]++;
        
    }
    // cout<<count;
}
int main()
{
    string s ="geeks for geeks geeks ";
    count(s);
    return 0;
}
//
