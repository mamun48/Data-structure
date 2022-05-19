#include<iostream>
#include<math.h>
using namespace std;
void creat(int Arr[],int value)
{
    int j=1,rn,chn;
    while(Arr[j]!=-1)
    {
         j++;
    }
    
     chn=j;
     Arr[j]=value;
     rn=chn/2;
     while(Arr[chn]<Arr[rn] && chn>1)
     {
         swap(Arr[chn],Arr[rn]);
         chn=rn;
         rn=rn/2;
     }

   // cout<<"Node position is "<<chn<<" and value is "<<value<<endl;
     
}
void show(int Arr[],int size)
{
    for(int i=1;i<=size;i++)
    cout<<i<<"  ";
    cout<<endl;
     for(int i=1;i<=size;i++)
    cout<<Arr[i]<<"  ";

}
int main()
{
    int depth,var;
     cout<<"Enter how will be the depth of tree "<<endl;
    cin>>depth;
    int size=pow(2,(depth+1));
    int nodes;
    cout<<"Enter how many nodes you need to added "<<endl;
    cin>>nodes;
    int Arr[size];
    for(int i=1;i<=size;i++)
         Arr[i]=-1;
    for(int i=1;i<=nodes;i++)
    {
        cin>>var;
        creat(Arr,var);
    }

  //show(Arr,size);
      

}