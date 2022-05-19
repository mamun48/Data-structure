#include<bits/stdc++.h>
#include<string>
using namespace std;
struct Stack
{
    char value;
    struct Stack *next;
};
typedef struct Stack stck;
stck *top=NULL;

void push(char a)
{
    stck *temp;
    temp=new stck;
    temp->value=a;
    temp->next=top;
    top=temp;
   // cout<<top->value<<endl;

} 
char pop()
{
    if(top)
    {
        char operate;
        operate=top->value;
        top=top->next;
        return operate;
    }
    else
    {
        cout<<"Stack is underflown"<<endl;
        
        
    }
   

}
int out_stack(char c)
{
    if(c=='+' || c=='-') return 1;
    else if(c=='*' || c=='/') return 3;
    else if(c=='^') return 6;
    else if(c=='(') return 7;
    else return 0;
}
int in_stack(char c)
{
    if(c=='+' || c=='-') return 2;
    else if(c=='*' || c=='/') return 4;
    else if(c=='^') return 5;
    else return 0;
}
string post(string infix)
{
    string postfix;
    for(int i=0;infix[i];i++)
    {
        if((infix[i]>='A' and infix[i]<='Z') or infix[i]>=97)
        {
            postfix+=infix[i];
        }
        else
        {
            if(top==NULL)
            {
                push(infix[i]);
            }
            else if(infix[i]==')')
            {
                while(true)
                {
                    if(top->value=='(')
                      {
                          pop();
                          break;
                      }
                    postfix+=pop();
                }
            }
            else
            {
                while(true)
                {
                      if(out_stack(infix[i])>in_stack(top->value))
                        {
                            push(infix[i]);
                            break;
                        }
                      
                      
                          if(top==NULL)
                          {
                                push(infix[i]);
                                break;
                          }
                           postfix+=pop();
                         
                      

                }
              
            }
        }
    }
    while(top)
    {
        postfix+=pop();
    }
    return postfix;

}

int main()
{
    string infix="((A+B)*C)+D^f";
    cout<<post(infix)<<endl;
   
  
}