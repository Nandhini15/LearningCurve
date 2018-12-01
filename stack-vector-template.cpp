#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>

using namespace std;

template <class T>
class Stack { 
   private: 
      vector<T> elems;    // elements 

   public: 
      void push(T const&);  // push element 
      void pop();               // pop element 
      T top() const;            // return top element 
      
      bool empty() const {      // return true if empty.
         return elems.empty(); 
      } 
}; 

template <class T>
void Stack<T>::push (T const& elem) { 
   // append copy of passed element 
   elems.push_back(elem);    
} 

template <class T>
void Stack<T>::pop () { 
   if (elems.empty()) { 
      throw out_of_range("Stack<>::pop(): empty stack"); 
   }
   
   // remove last element 
   elems.pop_back();         
} 

template <class T>
T Stack<T>::top () const { 
   if (elems.empty()) { 
      throw out_of_range("Stack<>::top(): empty stack"); 
   }
   
   // return copy of last element 
   return elems.back();      
} 

int main() { 
   try {
      Stack<int>         intStack;  // stack of ints 
      Stack<string> stringStack;    // stack of strings 

      // manipulate int stack 
      intStack.push(7); 
      cout << intStack.top() <<endl; 

      // manipulate string stack 
      stringStack.push("hello"); 
      cout << stringStack.top() << std::endl; 
      stringStack.pop(); 
      stringStack.pop(); 
   } catch (exception const& ex) { 
      cerr << "Exception: " << ex.what() <<endl; 
      return -1;
   } 
} 
//Template
//write code once and use it for any data type including user defined data types
//there is possibility that we need to use different code for a particular data type. ie.whenever that part. data type is called.
//It is possible in C++ to get a special behavior for a particular data type. This is called template specialization.
// A generic sort function  
template <class T> 
void sort(T arr[], int size) 
{ 
    // code to implement Quick Sort 
} 
  
// Template Specialization: A function  
// specialized for char data type 
template <> 
void sort<char>(char arr[], int size) 
{ 
    // code to implement counting sort 
} 
//Another Example
#include <iostream> 
using namespace std; 
  
template <class T> 
void fun(T a) 
{ 
   cout << "The main template fun(): " 
        << a << endl; 
} 
  
template<> 
void fun(int a) 
{ 
    cout << "Specialized Template for int type: "
         << a << endl; 
} 
  
int main() 
{ 
    fun<char>('a'); 
    fun<int>(10); 
    fun<float>(10.14); 
} 
//Example Class for specialized template
#include <iostream> 
using namespace std; 
  
template <class T> 
class Test 
{ 
  // Data memnbers of test 
public: 
   Test() 
   { 
       // Initialization of data members 
       cout << "General template object \n"; 
   } 
   // Other methods of Test 
}; 
  
template <> 
class Test <int> 
{ 
public: 
   Test() 
   { 
       // Initialization of data members 
       cout << "Specialized template object\n"; 
   } 
}; 
  
int main() 
{ 
    Test<int> a; 
    Test<char> b; 
    Test<float> c; 
    return 0; 
} 
//Template metaprogramming - do all the computations at the compile time
#include <iostream> 
using namespace std; 
  
template<int n> struct funStruct 
{ 
    enum { val = 2*funStruct<n-1>::val }; 
}; 
  
template<> struct funStruct<0> 
{ 
    enum { val = 1 }; 
}; 
  
int main() 
{ 
    cout << funStruct<8>::val << endl; 
    return 0; 
}
