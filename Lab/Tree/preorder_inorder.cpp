#include<iostream>
#include<stack>
#include<math.h>
using namespace std;
void preorder(int Arr[],int size)
{
    int i=1,temp;
    stack<int> stck;
    //stck.push(i);
    
    while(!stck.empty() || Arr[i]!=-1)
    {
        if(Arr[i]!=-1)
        {
          //  cout<<Arr[i]<<" ";      this cout for preorder traversal.
            stck.push(i);
            i=i*2;


        }
        else
        {
            i=stck.top();
            // cout<<Arr[i]<<" ";    this cout for inorder traversal.
            stck.pop();
            i=i*2+1;
        }
       
    }
}

int main()
{
    int depth,var;
    cin>>depth;
    int size=pow(2,depth+1);
    int Arr[size];
    for(int i=1;i<size;i++)
        Arr[i]=-1;
    for(int i=1;i<size;i++)
    {
        cin>>var;
        Arr[i]=var;
    }
    preorder(Arr,size);
}