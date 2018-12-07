#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

struct node
{
    int data;
    struct node *next;
};
class list{
   public:
     struct node * start;
     list()
     {
         start = NULL;
     }
     void insert(int begin, int end);
     void insertpos(int);
     void search(int);
     void sort();
     void reverse();
     void display();
};
//insert 5 elements in a list
void list::insert(int begin, int end)
{
    while(begin <= end)
    {
        struct node *temp,*p;
        temp = new struct node();
        if(start == NULL)
        {
            start = temp;
            start->data = begin;
            cout<<start->data;
            start->next = NULL;
        }
        else{
           p = start;
           while(p->next != NULL){
               p = p->next;
           }
           p->next = temp;
           temp->data = begin;
           cout<<temp->data;
           temp->next = NULL;
           
           
        }
        begin++;
    }
}
//insert at position
void list::insertpos(int pos)
{
    struct node *n,*s,*temp;
    int counter = 0;
    temp = new struct node();
    n = start;
    while(n != NULL)
    {
        n = n->next;
        counter++;
    }
    if(pos == 1)
    {
      if(start == NULL){
          start = temp;
          temp->next = NULL;
      } else{
          n = start;
          start = temp;
          start->next = n;
      }
        
    }else if(pos > 1 && pos <= counter)
    {
       n = start;
       for(int i = 1; i < pos; i++)
       {
          s = n;
          n = n->next; 
       }
       s->next = temp;
       temp ->data = 20;
       temp->next = n;
    }
}
void list::search(int tt)
{
    struct node *t;
    t = start;
    while(t->data != tt)
    {
       
        t = t->next;
    }
    cout<<t->data<<"is found"<<endl;
}
//sort elements in a list
void list::sort()
{
    struct node *t,*n;
    t = start;
    while(t != NULL){
    for(n = t->next; n != NULL; n = n->next){
    
    if(t->data > n->data){
        int temp =t->data;
        t->data = n->data;
        n->data =temp;
    }
    }
    t = t->next;
    }
}
//reverse elements in a list
//end of the ll as start vd all the nodes pointing backwards
//three pointers to keep track of prev node, current node and the next node
void list::reverse()
{
    struct node *prev,*cur,*nex,*t;
    if(start == NULL){
    return;
    }
    prev = NULL;
    cur = start;
    while(cur != NULL){
        nex = cur->next; // elt next to the cur elt
        cur->next = prev;
        prev = cur;
        cur = nex;
    }
    start = prev;
}
//display 5 elements in a list
void list::display()
{
    struct node *t;
    t = start;
    while( t != NULL)
    {
        cout<<t->data<<"->";
        t = t->next;
    }
    
    cout<<"NULL"<<endl;
}
int main()
{
  list l;
  int begin =1;
  int end = 5;
  l.insert(begin,end);
  l.insertpos(3);
  l.search(20);
  l.sort();
  l.reverse();
  l.display();
    return 0;
}
