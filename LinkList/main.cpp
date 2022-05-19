#include <iostream> //creating link list
using namespace std;
struct node {
    int data;
    struct node *next;
}*first=NULL;
typedef struct node sn;

void creat(int Array[],int size)
{
    sn *t,*last;
    first=(sn*)malloc(sizeof(sn));
    first->data=Array[0];
    first->next=NULL;
    last=first;

    for(int i=1;i<size;i++)
    {
        t= new node();
        t->data=Array[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void display(sn *p)
{
    while (p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}

int count(sn *p)
{
    int i=0;
    while (p)
    {
        i++;
        p=p->next;
    }
    return i;
}

void insert(int data,int index,sn *p)
{
    if(index<0 || index>count(first))
        cout<<"Index is invalid"<<endl;
    else{
        if(index==0)
        {
            p=new node;
            p->data=data;
            p->next=first;
            first=p;
        } else{
            int i;
            for(i=1;i<index;i++)
                p=p->next;
            sn *t;
            t=new node();
            t->next=p->next;
            t->data=data;
            p->next=t;
        }
    }
}

void sortedInsert(int data)
{
    sn *p=first,*q=NULL,*t;

    if(p->data>data)
    {
        t= new node;
        t->data=data;
        t->next=first;
        first=t;
    }
    else{
        while(p && p->data<data)
        {
            q=p;
            p=p->next;
        }
        t=new node;
        t->data=data;
        t->next=p;
        q->next=t;
    }

}

int deletion(sn *p,int index)
{
    if(index<=0 || index>count(first))
        cout<<"Index is invalid"<<endl;
    else{
        if(index==1)
        {
            first=first->next;
            free(p);
        }
        else{
            for(int i=1;i<index-1;i++)
                p=p->next;
            sn *q;
            q=p->next;
            p->next=q->next;
            delete q;

        }
    }

}

void reverse()
{
    sn *p=first,*q=first,*r=NULL;
    while(p)
    {
        p=p->next;
        q->next=r;
        r=q;
        q=p;
    }
    first=r;
}

int main() {
   int Array[]={1,3,5,7,10} ;
   creat(Array,5);
   display(first); cout<<endl;
   insert(12,5,first);
   cout<<"After insertion"<<endl;
   display(first);
   cout<<endl;
  // deletion(first,0);
  // cout<<"After deletion"<<endl;
  sortedInsert(15);
  cout<<"After sorted insert"<<endl;
  display(first); cout<<endl;
  reverse();
  cout<<"After Reverse the link list"<<endl;
  display(first);
    return 0;
}
