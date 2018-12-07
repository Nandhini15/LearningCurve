#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
class queue
{
    struct node *front,*rear;
    public:
    queue(){
        front = NULL;
        rear = NULL;
    }
    void push(int);
    void remove();
};
void queue::push(int value)
{
    struct node *temp;
    temp = new struct node();
    temp->data = value;
    temp->next = NULL;
    if(front == NULL)
    {
        front = rear = temp;
        cout<<temp->data<<"\n"<<endl;
        rear->next = NULL;
    }else{
        rear->next = temp;
        rear = temp;
        cout<<rear->data<<"\n"<<endl;
        rear->next = NULL;
    }
}
void queue::remove()
{
    struct node *temp;
    if(front == NULL)
    {
        cout<<"empty"<<endl;
    }else{
        temp = front;
        cout<<temp->data<<"deleted"<<"\n"<<endl;
        front = front->next;
        delete temp;
    }
}
int main()
{
    queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.remove();
    return 0;
}
//using array
#include <stdio.h>
#include<iostream>
#define MAX 50
using namespace std;
int queue[MAX];
int front = -1;
int rear = -1;
void insert(int value)
{
    if(rear == MAX-1)
    cout<<"overflow"<<endl;
    else{
        queue[rear++] = value;
    }
}
void remove()
{
    if(front == NULL)
    cout<<"empty"<<endl;
    else
{
    cout<<queue[front]<<"deleted"<<"\n"<<endl;
    front = front +1;
    cout<<queue[front]<<"current front"<<"\n"<<endl;
}
}
void display()
{
    for(int i = front; i <= rear; i++)
    {
        cout<<queue[i]<<"\n"<<endl;
    }
}
int main()
{
    insert(10);
    insert(20);
    insert(30);
     remove();
     display();
    return 0;
}
