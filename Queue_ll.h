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
    };
    Node* front;
    Node* rear;
    int size;


public:
    Queue_ll(int size) : size(0) , front(nullptr) , rear(nullptr)
    {}

    bool isEmpty() {
        return (size == 0);
    }


    virtual ~Queue_ll() {
        size=0;
        delete front , rear;

    }
};


#endif //IMPLEMENTATIONS_QUEUE_LL_H
