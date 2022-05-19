#include<iostream>
using namespace std;
int Arr[20][20];
int Arr2[20][20];
int Arr3[20][20];
int Arr4[20][20];
int B[20][20];
void showAdjacency(int vertices)
{
    for(int i=1;i<=vertices;i++)
    {
        cout<<"Adjacent of "<<i<<" are = ";
        for(int j=1;j<=vertices;j++)
        {
            if(Arr[i][j]==1)
             cout<<j<<" ";
        }
        cout<<endl;
    }
}
void Twolengthpath(int vertices)
{
    for(int i=1;i<=vertices;i++)
    {
        for(int j=1;j<=vertices;j++)
        {
            for(int k=1;k<=vertices;k++)
            {
                Arr2[i][j]+=Arr[i][k]*Arr[k][j];
            }
        }
    }
}
void Threelengthpath(int vertices)
{
    for(int i=1;i<=vertices;i++)
    {
        for(int j=1;j<=vertices;j++)
        {
            for(int k=1;k<=vertices;k++)
            {
                Arr3[i][j]+=Arr[i][k]*Arr2[k][j];
            }
        }
    }
}
void Fourlengthpath(int vertices)
{
    for(int i=1;i<=vertices;i++)
    {
        for(int j=1;j<=vertices;j++)
        {
            for(int k=1;k<=vertices;k++)
            {
                Arr4[i][j]+=Arr[i][k]*Arr3[k][j];
            }
        }
    }
}
void CalculateB(int vertices)
{
    for(int i=1;i<=vertices;i++)
    {
        for(int j=1;j<=vertices;j++)
        {
            B[i][j]=Arr[i][j]+Arr2[i][j]+Arr3[i][j]+Arr4[i][j];
        }
    }
}
void showB(int vertices)
{
    int count=0;
    for(int i = 1;i<=vertices;i++)
    {
        for(int j = 1;j<=vertices;j++)
        {
            cout<<B[i][j]<<" ";
            if(B[i][j]>=1)
            count++;
        }
        cout<<endl;
    }
     if(count<vertices*vertices)
        cout<<"This matrix is not strongly connected";
    else
     cout<<"This matrix is strongly connected";
}
void showTwolength(int vertices)
{
    for(int i = 1;i<=vertices;i++)
    {
        for(int j = 1;j<=vertices;j++)
        {
            cout<<Arr2[i][j]<<" ";
        }
        cout<<endl;
    }
}
void showThreelength(int vertices)
{
    for(int i = 1;i<=vertices;i++)
    {
        for(int j = 1;j<=vertices;j++)
        {
            cout<<Arr3[i][j]<<" ";
        }
        cout<<endl;
    }
}
void showFourlength(int vertices)
{
    
    for(int i = 1;i<=vertices;i++)
    {
        for(int j = 1;j<=vertices;j++)
        {
            cout<<Arr4[i][j]<<" ";
        
        }
        cout<<endl;
    }
   
}
int main()
{
    int vertices;
    cout<<"Enter the number of vertices"<<endl;
    cin>>vertices;
    int node;
    //creat the graph using adjacency matrix
    for(int i = 1;i<=vertices;i++)
    {
        for(int j = 1;j<=vertices;j++)
        {
            cin>>node;
            Arr[i][j] = node;
        }
    }
    showAdjacency(vertices);
    Twolengthpath(vertices);
    showTwolength(vertices);
    cout<<endl;
    Threelengthpath(vertices);
    showThreelength(vertices);
    cout<<endl;
    Fourlengthpath(vertices);
    showFourlength(vertices);
    cout<<endl;
    CalculateB(vertices);
    showB(vertices);

}