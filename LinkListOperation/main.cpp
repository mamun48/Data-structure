#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
}*first=NULL;

void creat(struct node *p,int Array[],int size)
{
    struct node *t,*last;
    first=new node;
    first->data=Array[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<size;i++)
    {
        t=new node;
        t->data=Array[i];
        t->next=NULL;
        last->next=t;
        last=t;

    }
}

int count(struct node *p)
{
    int x=0;
    while(p)
    {
        p=p->next;
        x++;
    }
    return x;
}

void display(struct node *p)
{
    while(p)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
}

void insert(struct node *p,int index,int data)
{
    struct node *t;
    t=new node;
    t->data=data;
    if(index==0)
    {
        t->next=first;
        first=t;

    }
    else
        {
           for(int i=0;i<index-1;i++)
               p=p->next;
           t->next=p->next;
           p->next=t;

        }
}


void insertion_in_sorted_Array(struct node *p,int data)
{
    struct node *q,*t;
    t=new node;
    t->data=data;
    t->next=NULL;
    if(first==NULL)
    {
        first=t;
    } else{
        while(p && p->data<data)
        {
            q=p;
            p=p->next;
        }
        if(p==first)
        {
            t->next=first;
            first=t;
        } else{
            t->next=p;
            q->next=t;
        }
    }


}

int deletion(struct node *p,int index)
{
    struct node *q;
    int x=0;
    if(index<1 || count(first)<index)
        return -1;
    if(index==1)
    {
        q=first;
        x=first->data;
        first->next=first;
        free(q);
        return x;
    } else{
        for(int i=0;i<index-1;i++)
        {
            q=p;
            p=p->next;
        }
        q->next=p->next;
        x=p->data;
        free(p);
    }

}

int main() {
  int Array[]={1,3,5,7,9},size=5;
  creat(first,Array,size);
  display(first);
  cout<<"Count is "<<count(first)<<endl;
  //insert(first,2,100);
  //insertion_in_sorted_Array(first,6);
  //cout<<"After insertion"<<endl;
  deletion(first,2);
  display(first);
    return 0;
}
