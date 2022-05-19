#include <iostream>
#include <cstring>
using namespace std;
struct node{
    char data;
    struct node *next;
}*first=NULL;

int size=0;

typedef struct node st;

void push(char data)
{
    st *p;
    p=new node;
    if(p==NULL)
    {
        cout<<"Stack is overflown"<<endl;
    }
    else
    {
        p->data=data;
        p->next=first;
        first=p;
        size++;
    }

}
char pop()
{
    if(first==NULL)
    {
        cout<<"stack is underflown";
        return 0;
    }
    st *p;
    char x;
    p=first;
    first=first->next;
    x=p->data;
    size--;
    return x;
}

bool isMatched(string Array)
{
    for(int i=0;i<Array.size();i++)
    {
        if(Array[i]=='{' || Array[i]=='(' || Array[i]=='[')
        {
            push(Array[i]);
        }
        else if((Array[i]==')' || Array[i]=='}' || Array[i]==']') && first!=NULL)
        {
           char A=pop();
           if(Array[i]-A !=2 && Array[i]-A !=1)
               return 0;
        }
        else if(Array[i]==')' || Array[i]=='}' || Array[i]==']')
        {
            return 0;
        }






    }
    if(first==NULL)
        return 1;
    else return 0;
}
int isOperand(char C)
{
    if(C=='+' || C=='-' || C=='*' || C=='/' || C=='(' || C==')' ||C=='^')
        return 0;
    else return 1;
}

int InStackpPre(char c)
{
    if(c=='*' || c=='/')
        return 4;
    else if(c=='+' || c=='-')
        return 2;
    else if(c=='^')
        return 5;
    else if (c=='(')
        return 0;
    else 0;
}
int OutStackpPre(char c)
{
    if(c=='*' || c=='/')
        return 3;
    else if(c=='+' || c=='-')
        return 1;
    else if(c=='^')
        return 6;
    else if (c=='(')
        return 7;
    else if(c==')')
        return 0;

}
string postfix(string infix)
{
    string postfix="";
    int i=0;
    while(infix[i]!='\0')
    {
        if(isOperand(infix[i]))
        {
            postfix+=infix[i];
            i++;
        }
        else
            {
               if(first==NULL || OutStackpPre(infix[i])>InStackpPre(first->data))
               {
                   push(infix[i]);
                   i++;
               }
               else {

                   if( OutStackpPre(infix[i])==InStackpPre(first->data))
                   {
                       pop();i++;
                   }
                       else postfix+=pop();




               }
            }

    }
    while (first!=NULL)
    {
        postfix+=pop();
    }

    return postfix;

}

int EvaluationOfPostfix(string postfix)
{
    int i=0,r,x1,x2;
    while (postfix[i]!='\0')
    {
        if(isOperand(postfix[i]))
            push(postfix[i++]-'0');
        else{
           x2=pop();x1=pop();
            switch (postfix[i++])
            {
                case '+':r=x1+x2;push(r);break;
                case '-':r=x1-x2;push(r);break;
                case '*':r=x1*x2;push(r);break;
                case '/':r=x1/x2;push(r);break;

            }
            push(r);
           
        }
    }

    return first->data;
}

void display()
{
    st *p=first;
    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}

int main() {
   string Array ="[{(a+b)+c}]";

  //if(isMatched(Array))
   //   cout<<"Parenthesis is matched ";
 // else cout<<"Paarenthesis is not matched";
 string infix="A+(B*C-(D/E^F)*G)*H";
 cout<<postfix(infix);
  //string postfix="52*6+3-";
  //cout<<EvaluationOfPostfix(postfix);

    return 0;
}
