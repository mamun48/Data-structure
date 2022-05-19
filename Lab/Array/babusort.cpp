#include<bits/stdc++.h>
using namespace std;
int main()
{
    int words;
    cout<<"enter the size of words"<<endl;
    cin>>words;
    string str[words];
    for(int i=0;i<words;i++)
    {
        cin>>str[i];
       
    }
   

    for(int i=0;i<words;i++)
    {
        for(int j=0;j<words-1-i;j++)
        {
            if(str[j].compare(str[j+1])>0)
            {
                swap(str[j+1],str[j]);
            }
        }
    }
    for(int i=0;i<words;i++)
    {
        cout<<str[i]<<" ";
    }
}