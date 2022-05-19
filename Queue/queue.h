//
// Created by Mamun on 2/22/2021.
//

#ifndef QUEUE_QUEUE_H
#define QUEUE_QUEUE_H

template<class T>class node{
public:
    T data;
    node *next;
};
template<class T>class queue {
private:
    int size;
    node<T> *front;
    node<T> *rear;
public:
    queue();
    void enqueue(T data);
};



#endif //QUEUE_QUEUE_H
