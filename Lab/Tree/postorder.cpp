#include<iostream>
#include<stack>
#include<math.h>
using namespace std;
void postorder(int Arr[])
{
    int i=1,temp;
    stack<int>stck;
    while(!stck.empty() || Arr[i]!=-1)
    {
        cout<<" i am here";
        if(Arr[i]!=-1 && i>0)
        {
            stck.push(i);
            cout<<i<<endl;
            temp=(i*2)+1;
            if(Arr[temp]!=-1)
            {
                stck.push(-(temp));
                 cout<<-temp<<endl;
            }
            
            i=i*2;
        }
        else
        {
            i=stck.top();
            stck.pop();
            if(i>0)
            {
                 cout<<Arr[i]<<" ";
                // i=i*2+1;
                  i=stck.top();
                   stck.pop();
                 
            }
            else
            {
                i=-i;
               // stck.push(i);
            }
           
            
        }
        
    }
}
int main()
{
    int depth,var;
    cout<<"Enter the depth "<<endl;
    cin>>depth;
    int size=pow(2,depth+1);
    int  Arr[size];
    for(int i=1;i<size;i++)
        Arr[i]=-1;
    for(int i=1;i<size;i++)
    {
        cin>>var;
        Arr[i]=var;
    }
    postorder(Arr);

}