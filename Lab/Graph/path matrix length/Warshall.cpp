#include<iostream>
using namespace std;
int A[20][20];
int W[20][20];
int inf=999;
void warshal(int vertices)
{
    for(int i=1;i<=vertices;i++)
    {
        for(int j=1;j<=vertices;j++)
        {
            for(int k=1;k<=vertices;k++)
            {
                if(A[j][k]>A[j][i]+A[i][k])
                {
                     A[j][k]=A[j][i]+A[i][k];
                }
            }
        }
    }
}
void showWarshall(int vertices)
{
    for(int i=1;i<=vertices;i++)
    {
        for(int j=1;j<=vertices;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int vertices;
    cout<<"Enter the vertices "<<endl;
    cin>>vertices;
    int node;
    for(int i=1;i<=vertices;i++)
    {
        for(int j=1;j<=vertices;j++)
        {
            cin>>node;
            A[i][j]=node;
        }
    }
    warshal(vertices);
    showWarshall(vertices);
    
}