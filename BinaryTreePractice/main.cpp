#include <iostream>
#include <queue>

using namespace std;

struct node{
    struct node *Lchild;
    struct node *Rchild;
    int data;
};
typedef struct node sn;
sn *root=NULL;
void CreatTree()
{
    sn *p,*t;
    int x;
    cout<<"Enter the value of root ";
    cin>>x;
    cout<<endl;
    root=new sn;
    root->data=x;
    root->Lchild=root->Rchild=NULL;
    queue <sn*>keep;
    keep.push(root);
    while(!keep.empty())
    {
        p=keep.front();
        keep.pop();
        cout<<"Enter the left child of "<<p->data<<endl;
        cin>>x;
        if(x!=-1)
        {
            t=new sn;
            t->data=x;
            t->Rchild=t->Lchild=NULL;
            p->Lchild=t;
            keep.push(t);
        }
        cout<<"Enter the right child of "<<p->data<<endl;
        cin>>x;
        if(x!=-1)
        {
            t=new sn;
            t->data=x;
            t->Rchild=t->Lchild=NULL;
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

void Inorder(sn *p)
{
    if(p)
    {
        Inorder(p->Lchild);
        cout<<p->data<<" ";
        Inorder(p->Rchild);
    }

}

void Postorder(sn *p)
{
    if(p)
    {
        Postorder(p->Lchild);
        Postorder(p->Rchild);
        cout<<p->data<<" ";
    }

}


int main() {
    CreatTree();
    cout<<"Output of Preorder tree"<<endl;
    Preorder(root);
    cout<<endl;
    cout<<"Output of Inorder tree"<<endl;
    Inorder(root);
    cout<<endl;
    cout<<"Output of Postorder tree"<<endl;
    Postorder(root);
    return 0;
}
