#include <iostream>
#include "string.h"
using namespace std;
struct node{
    char data;
    struct node *next;
}*top=NULL;



void push(char x)
{
    struct node *t;
    t=new node;
    if(t==NULL)
        cout<<"Stack is overflown"<<endl;
    else{
        t->data=x;
        t->next=top;
        top=t;

    }


}

void pop()
{
    if(top==NULL)
        cout<<"stack is underflown";
        else{
            struct node *t;
            t=top;
            top=top->next;
            free(t);
        }
}

void dispalay(struct node *p)
{
    while(p)
    {
        cout<<p->data;
        p=p->next;
    }
}

void dispaly(struct node *p)
{
    while(p)
    {
        cout<<p->data<<endl;
        p=p->next;
    }

}


int is_balanced(char *str)
{
    for(int i=0;strlen(str)>i;i++)
    {

       // dispaly(top);
       // cout<<"Display for "<<i+1<<" element"<<endl;
        if(str[i]=='(' ||str[i]=='{' || str[i]=='[')
        {
            push(str[i]);
        }

        else if (str[i]==')' && top->data=='(')
        {
            if(top==NULL)
                return -1;
            else pop();
        }
        else if(str[i]=='}' && top->data=='{')
        {
            if(top==NULL)
                return -1;
            else pop();

        }
        else if(str[i]==']' && top->data=='[')
        {
            if(top==NULL)
                return -1;
            else  pop();
        }
        else if(str[i]==')' && top->data!='(')
        {
           return -1;
        }
        else if(str[i]=='}' && top->data!='{')
        {
           return 0;
        }
        else if(str[i]==']' && top->data!='[')
        {
            cout<<"I am here"<<endl;
            return 0;
        }

    }
    if(top==NULL)
        return 1;
    else return 0;
}

int main() {
    char *str="[({d+(a+b)}-c)]";
    cout<<str<<endl;

    dispaly(top);

    cout<<is_balanced(str)<<endl;

    if(is_balanced(str))
    { cout<<"parenthesis matched"<<endl;}
    else cout<<"parenthesis is not matched"<<endl;

    return 0;
}
