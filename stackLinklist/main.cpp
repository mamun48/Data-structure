#include <iostream>
using namespace std;
struct node {
    int data;
    struct node *next;
}*top=NULL;
void push(int data)
{
   struct node *t;
   t=new node;
   if(t==NULL)
        cout<<"Stack is full"<<endl;
    else{
        t->data=data;
        t->next=top;
        top=t;

    }
}
int pop()
{
    int x=-1;
    struct node *t;
    if(top==NULL)
        cout<<"stck is empty"<<endl;
    else{
        x=top->data;
        t=top;
        top=top->next;
        free(t);

    }
    return x;
}

void display()
{
    while(top)
    {
        cout<<top->data<<endl;
        top=top->next;
    }
}
int main() {
    push(10);
    push(20);
    push(30);
    display();
    return 0;
}
