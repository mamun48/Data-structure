#include <iostream>
using namespace std;
struct node{
    struct node *Lchild;
    struct node *Rchild;
    int data;
};
typedef struct node sn;
sn *root=NULL;
void CreatBST(int number)
{
    sn *t=root;
    sn *p,*r= nullptr;
    if(root==NULL)
    {
        p=new sn;
        p->data=number;
        p->Rchild=p->Lchild=NULL;
        root=p;
        return;
    }

        while(t!=NULL)
        {
            r=t;
            if(number<t->data)
                t=t->Lchild;
            else if(number>t->data)
                t=t->Rchild;
            else return;
        }
        p=new sn;
        p->data=number;
        p->Rchild=p->Lchild=NULL;
        if(r->data<number)
            r->Rchild=p;
        else r->Lchild=p;

    }

sn * Search(int key)
{
    sn *t=root;
    while(t)
    {
        if(t->data==key)
            return t;
        else if (t->data>key)
            t=t->Lchild;
        else
            t=t->Rchild;

    }
    return NULL;
}

sn *RCreatBST(sn *p,int number)
{
    sn *t=NULL;
    if(p==NULL)
    {
        t=new sn;
        t->data=number;
        t->Rchild=t->Lchild=NULL;
        return t;
    }
    if(p->data>number)
        p->Lchild=RCreatBST(p->Lchild,number);

    else if(p->data<number)
        p->Rchild=RCreatBST(p->Rchild,number);
    else return p;
}
void Inorder(sn *p)
{
    if(p)
    {
        Inorder(p->Lchild);
        cout<<p->data<<" ";
        Inorder(p->Rchild);
    }
}
int main() {
    sn *temp;
    root=RCreatBST(root,10);
    RCreatBST(root,20);
    RCreatBST(root,5);
    RCreatBST(root,30);
    RCreatBST(root,2);
    Inorder(root);
    cout<<endl;
    int key;
    cout<<"Enter a value for search  ";
    cin>>key;
    cout<<endl;
   temp=Search(key);
    if(temp)
    {
        cout<<key<<"  is found"<<endl;
    }
    else cout<<key<<"  is not found"<<endl;

    return 0;
}
