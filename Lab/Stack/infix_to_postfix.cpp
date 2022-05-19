#include<iostream>
using namespace std;

string stack;
int top=-1;
void push(char value)
{
        top++;
        stack[top]=value;
}
char pop()
{
    if(top==-1)
    {
       cout<<"stack is underflown"<<endl;
        return 'z';
    }
    else
    {
        char x= stack[top];
        top--;
        return x;
    }
}
int instack_pre(char a)
{
    if(a=='+' || a=='-')
      return 2;
    if(a=='*' || a=='/')
      return 4;
    if(a=='^')
     return 5;
    if(a=='(')
    return 0;
    if(a==')')
    return -1;
    return 0;
}
int outstack_pre(char b)
{
    
    if(b=='+' || b=='-')
      return 1;
    if(b=='*' || b=='/')
      return 3;
    if(b=='^')
      return 6;
    if(b=='(')
      return 7;
    if(b==')')
      return 0;
      return -1;
}
int main()
{
   string infix;
   char postfix[20];
   cin>>infix;
   int length=infix.length(),i=0;
   push(')');
   int compare1,compare2,j=0;
   char d;
  

  while(i<length)
  {
     cout<<infix[i]<<" and i is "<<i<<endl; 
     if(infix[i]<90)
     {
        compare1= outstack_pre(infix[i]);
       // cout<<"out precednece of "<<infix[i]<<" is "<<compare1<<endl;
        d=pop();
        compare2=instack_pre(d);
       //  cout<<"in precednece of "<<d<<" is "<<compare1<<endl;
        if(compare1>compare2)
       {
         push(infix[i]);
         i++;
       } 
        else 
        {
            postfix[j++]=infix[i++];


        }
       
     }
     else
     {
         postfix[j++]=infix[i++];
        
     }
  }
  while(1)
  {
      d=pop();
      if(d==')' || d=='z')
      break;
      else{
          postfix[j++]=d;
      }
      
  }
  postfix[j]='\0';
  cout<<postfix<<endl;
}