#include <iostream>
using namespace std;

struct stack
{
    struct stack *next;
    int data;
}*top= nullptr;
typedef struct stack ss;

void push(int data)
{
    ss *t;
    t=new ss ;
    t->data=data;
    t->next=top;
    top=t;

}
int pop()
{
    int x=0;
    if(top== nullptr)
        cout<<"Stack is underflown";
    else
    {
        ss *p=top;
        x=top->data;
        top=top->next;
        free(p);
    }
    return x;
}

int main() {
    push(10);
    push(20);
    push(30);
    push(40);
    cout<<pop()<<" ";
    cout<<pop()<<" ";
    cout<<pop()<<" ";
    cout<<pop()<<" ";
    cout<<pop()<<" ";
    return 0;
}
