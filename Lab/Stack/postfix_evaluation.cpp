#include<iostream>
#include<math.h>
using namespace std;
int const Max=20;
int top=-1;
float stack[Max];
void push(float value)
{
    if(top==Max)
    cout<<"Stack is overflown"<<endl;
    else
    {
        top++;
        stack[top]=value;
    }
}
float pop()
{
    if(top==-1)
    {
       cout<<"stack is underflown"<<endl;
        return -1;
    }
    else
    {
        float x=stack[top];
        top--;
        return x;
    }
}

void show()
{
    while(top>=0)
    {
        cout<<stack[top]<<" ";
        top--;
    }
}


int main()
{
  string str;
  cin>>str;
  int length=str.length();
  str[length]='\0';
  int i=0,j;
  float temp,oper1,oper2;
  while(i<length)
  {
     
      if(isdigit(str[i]))
      {
          
        
         string operand;
          while (isdigit(str[i]))
          {
              operand+=str[i++];

          }
          //operand[j]='\0';
          temp=stof(operand);
          push(temp);
        
         
          
      }
     else if(str[i]==',')
            {
                i++;
            }   
     else
        {
          
           oper1=pop();
           
           oper2=pop();
           
           if(str[i]=='+') temp=oper2+oper1;
           if(str[i]=='-') temp=oper2-oper1;
           if(str[i]=='*') temp=oper2*oper1;
           if(str[i]=='/') temp=oper2/oper1;
           if(str[i]=='^') temp=pow(oper2,oper1);
           push(temp);
          
           i++;


        }
  }

  cout<<"The result is "<<pop()<<endl;
  
}