#include <iostream>
#include <queue>

using namespace std;
struct node {
    struct node *lchild;
    struct node *rchild;
    int data;

};
typedef struct node sn;
sn *root=NULL;
void creattree()
{
    sn *p,*t;
    int x;
    cout<<"enter the root of tree"<<endl;
    cin>>x;
    root=new sn ;
    root->data=x;
    root->lchild= nullptr;
    root->rchild= nullptr;
    queue<sn*> keep;
    keep.push(root);
    while (!keep.empty())
    {
        p=keep.front();
       keep.pop();
       cout<<"Enter the left child of  "<<p->data<<endl;
       cin>>x;
       cout<<endl;
       if(x!=-1)
       {
           t= new sn;
           t->data=x;
           t->rchild=t->lchild= nullptr;
           p->lchild=t;
           keep.push(t);
       }
        cout<<"Enter the right child of  "<<p->data<<" ";
        cout<<endl;
        cin>>x;
        if(x!=-1)
        {
            t= new sn;
            t->data=x;
            t->rchild=t->lchild= nullptr;
            p->rchild=t;
            keep.push(t);
        }
    }
}

void preorder(sn *p)
{
    if(p)
    {
        cout<<p->data<<" ";
        preorder(p->lchild);
        preorder(p->rchild);
    }
}

int main()
{

   creattree();
   preorder(root);
    return 0;
}
