#include<bits/stdc++.h>
using namespace std;
int main()
{
    int group;
    
    cout<<"enter the number of group ";
    cin>>group;
    int Array[group][group];
    int One[group*group];
    int k=1;
    int Poiter_Array[group];
    for(int i=1;i<=group;i++)
    {
        Poiter_Array[i]=k;
        for(int j=1;j<=group;j++)
        {
            cin>>Array[i][j];
            if(Array[i][j]>0)
             One[k++]=Array[i][j];
        }
    }
    for(int i=1;i<k;i++)
     cout<<One[i]<<" ";

    cout<<endl;

    for(int i=1;i<=group;i++)
     cout<<Poiter_Array[i]<<endl;
    
}