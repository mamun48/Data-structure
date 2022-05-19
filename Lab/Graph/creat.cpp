//ghraph_mamun
#include<iostream>
using namespace std;
int Arr[20][20];
int Arr2[20][20]; 
int Arr3[20][20];
int Arr4[20][20];
int Path[20][20];
int B[20][20];
int ver;

void show(int ver)
{
   for(int i=0;i<ver;i++)  
    {
        for(int j=0;j<ver;j++)
          cout<<Arr[i][j]<<" ";
          cout<<endl;
    }
}
void adjacnet(int ver)
{
   for(int i=0;i<ver;i++)
   {
       cout<<"Adjacent of "<<i<<" are = ";
       for(int j=0;j<ver;j++)
       {
           if(Arr[i][j]==1)
            cout<<j<<" ";
       }
       cout<<endl;
   }
}
void path_two(int ver)
{
       for(int i=0;i<ver;i++)
       {
           for(int j=0;j<ver;j++)
           {
               for(int k=0;k<ver;k++)
               {
                   Arr2[i][j]+=Arr[i][k]*Arr[k][j];
               }
           }
       }

}
void show_path_two(int ver)
{
    for(int i=0;i<ver;i++)
    {
        for(int j=0;j<ver;j++)
        {
            cout<<Arr2[i][j]<<"  ";
        }
        cout<<endl;
    }
}
void path_three(int ver)
{
    for(int i=0;i<ver;i++)
    {
        for(int j=0;j<ver;j++)
        {
            for(int k=0;k<ver;k++)
            {
                Arr3[i][j]+=Arr[i][k]*Arr2[k][j];
            }
        }
    }
}
void show_path_three(int ver)
{
    for(int i=0;i<ver;i++)
    {
        for(int j=0;j<ver;j++)
        {
            cout<<Arr3[i][j]<<"  ";
        }
        cout<<endl;
    }
}
void path_matrix(int ver)
{
    int temp=0;
    for(int i=0;i<ver;i++)
    {  
         temp=0;
        for(int j=0;j<ver;j++)
        {
            temp=Arr[i][j]+Arr2[i][j]+Arr3[i][j];
            B[i][j]=temp;
            if(temp>0)
              Path[i][j]=1;
              else Path[i][j]=0;

        }
    }
}
void show_B_matrix(int ver)
{
    for(int i=0;i<ver;i++)
    {
        for(int j=0;j<ver;j++)
        {
            cout<<B[i][j]<<"  ";
        }
        cout<<endl;
    }
}

void show_path_matrix(int ver)
{
    for(int i=0;i<ver;i++)
    {
        for(int j=0;j<ver;j++)
        {
            cout<<Path[i][j]<<"  ";
        }
        cout<<endl;
    }
}


 
int main()
{
  int node;
  cout<<"Enter number of vertices ";
  cin>>ver;
  cout<<"Enter edges"<< endl;
  for(int i=0;i<ver;i++)    //Array is initialize by zero
    {
        for(int j=0;j<ver;j++)
         {
            cin>>node;
            Arr[i][j]=node;
         } 
    }
  
    

cout<<"The adjacency matrix of graph is shown below "<<endl;
show(ver);
cout<<endl;
adjacnet(ver);
cout<<endl;
path_two(ver);
cout<<endl;
cout<<"Path of two lengths "<<endl;
show_path_two(ver);
cout<<endl;
path_three(ver);
cout<<"Path of three lengths "<<endl;
show_path_three(ver);
cout<<endl;
path_matrix(ver);
cout<<"Path matrix is "<<endl;
show_path_matrix(ver);
cout<<endl;
show_B_matrix(ver);
 
}


