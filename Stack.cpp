//Print Next Greater element for every element
#include <iostream>
#include<bits/stdc++.h>
#include <stack>
//print elts vch have next elt as greater elt compared to itself
using namespace std;
void print(int a[], int n){
    stack<int> s;
    s.push(a[0]);
    for(int i = 0; i < n; i++){
        if(s.empty())
        {
            s.push(a[i]);
            continue;
        }
        while(s.empty() == false && s.top() < a[i])
        {
            cout<<s.top()<<"-->"<<a[i]<<endl;
            s.pop();
        }
        s.push(a[i]);
    }
    while (s.empty() == false) { 
    cout << s.top() << " --> " << -1 << endl; 
    s.pop(); 
  } 
}
int main()
{
    int a[] = {11, 13, 21, 3 };
    int n = sizeof(a)/sizeof(a[0]);
    print(a,n);
    return 0;
}
//Reverse a string using stack
//reverse a string using stack
#include<bits/stdc++.h>
using namespace std;
class Stack
{
 private:
 char* a;
 public:
 int t;
 void pop();
 void push(char b);
 bool empty();
 Stack(int size)
 {
     a = new char[size];
     t = -1;
 }
};

void Stack::pop()
{
    if(empty()){
        cout<<"empty stack"<<endl;
        return;
    }
    cout<<a[t];
    t--;
}
void Stack::push(char b)
{
    a[++t] = b;
}
bool Stack::empty()
{
    return t<0;
}
void reverse(Stack k)
{
    while(!k.empty()){
        k.pop();
    }
}

int main() { 
      
    Stack block(5); 
    block.push('h'); 
    block.push('e'); 
    block.push('l'); 
    block.push('l'); 
    block.push('o'); 
    reverse(block); 
    return 0; 
} 
//stack implementation using array
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
class Stack
{
    int top;
    public:
    int a[MAX];
    void push(int c);
    int pop();
    Stack(){
        top = -1;
    }
    bool isEmpty();
};
void Stack::push(int x)
{
    if(top >= MAX -1){
        cout<<"overflow";
    }else{
        a[++top] = x;
        cout<<x<<" added"<<endl;
    }
}
int Stack::pop()
{
    if(isEmpty()){
        cout<<"nothing to remove"<<endl;
        return 0;
    }else{
         int x = a[top--];
         cout<<x<<" removed"<<endl;
         return x;
    }
}
bool Stack::isEmpty()
{
    return top < 0;
}
int main()
{
 Stack s;
 s.push(10);
 s.pop();
 s.isEmpty();
 return 0;
}
//Stack implementation using linked list
#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next; 
};

class Stack
{
    struct node *top;
    public:
    Stack()
    {
        top = NULL;
    }
    void push();
    void pop();
    void show();
};
void Stack::push()
{
    struct node *ptr;
    int val;
    cout<<"enter no"<<endl;
    cin>>val;
    ptr = new node;
    ptr->data = val;
    ptr->next = NULL;
    if(top != NULL){
    ptr->next = top;
    }
    top = ptr;
    cout<<"new element inserted";
}
void Stack::pop()
{
    struct node *temp;
    if(top == NULL)
    {
        cout<<"stack empty";
    }
    temp = top;
    top = top->next;
    cout<<temp->data<<" deleted"<<endl;
    delete temp;
}
void Stack::show()
{
    struct node *ptr1=top;
    while(ptr1 != NULL)
    {
        cout<<ptr1->data<<"->";
        ptr1 = ptr1->next;
    }
    cout<<"NULL\n";
}
int main()
{
    Stack s;
    int choice;
    while(1){
        // if some one wants to end the loop only after some scenario they ll go 4 infinite loop
    cout<<"enter choice"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
             s.push();
             break;
        case 2:
             s.pop();
             break;
        case 3:
             s.show();
             break;
        case 4:
              return 0;
              break;
        default:
            cout<<"not valid"<<endl;
            break;
            
    }
    }
    return 0;
}
   //Sort elements in a stack
   #include <bits/stdc++.h> 
using namespace std; 

stack<int> sortStack(stack<int> &input) 
{ 
    stack<int> tmpStack; 
  
    while (!input.empty()) 
    { 
        // pop out the first element 
        int tmp = input.top(); 
        input.pop(); 
  
        // while temporary stack is not empty and top 
        // of stack is greater than temp 
        while (!tmpStack.empty() && tmpStack.top() > tmp) 
        { 
            // pop from temporary stack and push 
            // it to the input stack 
            input.push(tmpStack.top()); 
            tmpStack.pop(); 
        } 
  
        // push temp in tempory of stack 
        tmpStack.push(tmp); 
    } 
  
    return tmpStack; 
} 
  
// main function 
int main() 
{ 
    stack<int> input; 
    input.push(34); 
    input.push(3); 
    input.push(31); 
    input.push(98); 
    input.push(92); 
    input.push(23); 
  
    // This is the temporary stack 
    stack<int> tmpStack = sortStack(input); 
    cout << "Sorted numbers are:\n"; 
  
    while (!tmpStack.empty()) 
    { 
        cout << tmpStack.top()<< " "; 
        tmpStack.pop(); 
    } 
} 
