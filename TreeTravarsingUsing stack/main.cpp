#include <iostream>
#include <queue>
#include <stack>

using namespace std;
struct node
{
    struct node *Lchild;
    int data;
    struct node *Rchild;
}*root=NULL;
typedef struct node sn;
void creat()
{
    sn *t,*p;
    cout<<"Enter the value of root node of the tree "<<endl;
    int x;
    cin>>x;
    root=new sn;
    root->data=x;
    root->Rchild=root->Lchild=NULL;
    queue <sn*>keep;
    keep.push(root);
    while(!keep.empty())
    {
        p=keep.front();
        keep.pop();
        cout<<"Enter the value of left node  "<<p->data<<endl;
        cin>>x;
        if(x!=-1)
        {
            t=new sn;
            t->data=x;
            t->Lchild=t->Rchild=NULL;
            p->Lchild=t;
            keep.push(t);
        }
        cout<<"Enter the value of right node "<<p->data<<endl;
        cin>>x;
        if(x!=-1)
        {
            t=new sn;
            t->data=x;
            t->Lchild=t->Rchild=NULL;
            p->Rchild=t;
            keep.push(t);
        }
    }

}
void Preorder(sn *p)
{
    if(p)
    {
        cout<<p->data<<" ";
        Preorder(p->Lchild);
        Preorder(p->Rchild);
    }
}
void IterativePreorder(sn *p)
{
    stack <sn*>stock;
    stock.push(NULL);

   while(p)
    {
        cout<<p->data<<" ";
        if(p->Rchild!=NULL)
        {
            stock.push(p->Rchild);
        }
        if(p->Lchild!=NULL)
        {
            p=p->Lchild;
        }
        else
        {
            p=stock.top();
            stock.pop();
        }
    }
}
void IterativeInorder(sn *p)
{
   stack<sn*>stick;
   while(p || !stick.empty())
   {
       if(p)
       {
           stick.push(p);
           p=p->Lchild;
       }
       else
       {
           p=stick.top();
           stick.pop();
           cout<<p->data<<" ";
           p=p->Rchild;
       }
   }
}
void LevelOrderTravarsing(sn *p)
{
    stack<sn*>stok;
    stok.push(p);
    cout<<p->data<<" ";
    while (!stok.empty())
    {
        p=stok.top();
        stok.pop();
        if(p->Lchild)
        {
            stok.push(p->Lchild);
            cout<<p->Lchild->data<<" ";
        }
        if(p->Rchild)
        {
            stok.push(p->Rchild);
            cout<<p->Rchild->data<<" ";
        }
    }
}

int main() {
   creat();
  // Preorder(root);

    IterativePreorder(root);
    cout<<endl;
    IterativeInorder(root);
    cout<<endl;
    LevelOrderTravarsing(root);

    return 0;
}
