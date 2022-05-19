#include<iostream>
#include<math.h>
using namespace std;
int Array[30];
void show(int Array[],int size)
{
   
      for(int i=1;i<=size;i++)
   {
      cout<<Array[i]<<" ";
   }
  
}
int insert(int Array[],int value)
{
    int i=1;
    do
    {
        if(Array[i]<value)
        {
            i = (i*2)+1;
        }
        else if(Array[i]>value)
        {
            i = (i*2);
        }
        else{
            return i;
        }
    } while (Array[i] != -1);
    Array[i]=value;
    return i;
    
}
int main()
{
    int depth;
    cin>>depth;
    int number_of_node;
   // cin>>number_of_node;
    int size=pow(2,depth+1);
    int Array[size];
    for(int i=1;i<=size;i++)
    {
        cin>>value;
        insert(Array,)
    }
    show(Array,size);
    cout<<endl;
    int insert_value,index;
    cin>>insert_value;
    index=insert(Array,insert_value);
    cout<<"the value "<<insert_value<<" inserted in "<<index<<" index"<<endl;
   show(Array,size);
  
}