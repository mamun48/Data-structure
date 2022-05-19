#include<bits/stdc++.h>
using namespace std;

void creat(int Tree[])
{
    int x,i=1,p,l,r;
    queue<int>q;
    cout<<"Enter root node ";
    cin>>x;
    Tree[i]=x;
    q.push(i);
    while(q.front()!=0)
    {
        p=q.front();
        //cout<<p<<endl;
        q.pop();
        cout<<"Enter the left child of "<<p<<" ";
        cin>>x;
        if(x!=-1)
        {
            l=p*2;
            q.push(p*2);
            Tree[p*2]=x;
            Tree[l*2]=-1;
            Tree[l*2+1]=-1;

        }
        cout<<"Enter the right child of "<<p<<" ";
        cin>>x;
        if(x!=-1)
        {
            r=p*2+1;
            q.push(p*2+1);
            Tree[p*2+1]=x;
            Tree[r*2]=-1;
            Tree[r*2+1]=-1;

        }
    }

}
void preorder(int Tree[],int i)
{
    
    if(Tree[i]!=-1)
    {
        cout<<Tree[i]<<" ";
        preorder(Tree,i*2);
        preorder(Tree,i*2+1);
    }
}
void postorder(int Tree[],int i)
{
    
    if(Tree[i]!=-1)
    {
       
        postorder(Tree,i*2);
        postorder(Tree,i*2+1);
         cout<<Tree[i]<<" ";
    }
}
int main()
{
    int Tree[20];
    
    creat(Tree);
    preorder(Tree,1);
    cout<<endl;
    postorder(Tree,1);
}