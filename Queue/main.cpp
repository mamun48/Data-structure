#include <iostream>
using namespace std;

template<class T>class node{
public:
    T data;
    node *next;
};

template<class T>class queue{
private:
    int size;
   node<T> *front;
   node<T> *rear;
public:
  queue()
  {
      size=0;
      front=rear=NULL;
  };

 void enqueue(T data);
  T dequeue();
};
template<class T>
void queue<T>::enqueue(T data)
{
    node<T> *t;
    t= new node<T>;
    t->data=data;
    t->next=NULL;
    if(size==0)
    {
        front=rear=t;
        size++;
    } else{
        rear->next=t;
        size++;

    }

}
template<class T>
T queue<T>::dequeue()
{

}



int main() {

    return 0;
}
