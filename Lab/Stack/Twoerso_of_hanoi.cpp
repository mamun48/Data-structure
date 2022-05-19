#include<iostream>
using namespace std;
void hanoi(int n,char from,char aux,char to)
{
    if(n==1)
    {
        cout<<"Move disk "<<from<<" -> "<<to<<endl;
        return;
    }
    hanoi(n-1,from,to,aux);
    cout<<"Move disk "<<from<<" -> "<<to<<endl;
    hanoi(n-1,aux,from,to);
}
int main()
{
    int disk;
    cout<<"Enter the number of disk ";
    cin>>disk;
    hanoi(disk,'A','B','C');
}