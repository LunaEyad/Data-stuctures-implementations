//
// Created by lona1 on 11/24/2022.
//
#include <iostream>
#include <string>
using namespace std;
#ifndef IMPLEMENTATIONS_QUEUE_LL_H
#define IMPLEMENTATIONS_QUEUE_LL_H

template<class t>
class Queue_ll {
    struct Node{
        t data;
        Node* next;
        Node(int data, Node* next=nullptr )
                : data(data), next(next)  {}

        Node() {}

        virtual ~Node(){}

    };
    Node* front;
    Node* rear;
    int size;


public:
    Queue_ll() : size(0) , front(nullptr) , rear(nullptr)
    {}

    bool isEmpty() {
        return (size == 0);
    }
    t end(){
        if (isEmpty()) return -1;
        return rear->data;

    }
    t begin() {
        if (isEmpty()) return -1;
        return front->data;
    }
    void print (){
       Node* temp=front;
        while (temp!= nullptr)
        {
            cout<<temp->data;
            temp=temp->next;
            free(temp);
        }
    }
    void push_back(t element){
        Node* newnode= new Node(element);
        if( rear==NULL)
            front =rear= newnode;

        else {

            rear->next=newnode;
            rear=newnode;
        }
        size++;
    }
    t pop_front(){
        if (size==0)
            return -1;
        Node* newnode= new Node;

        Node* temp= front ;
        t x = temp->data;
        front=temp->next;
        if (front== nullptr)
            rear= nullptr;


    delete temp;
    size--;
    return x ;
    }





    virtual ~Queue_ll() {
        size=0;
        delete front , rear;

    }
};


#endif //IMPLEMENTATIONS_QUEUE_LL_H
