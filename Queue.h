//
// Created by lona1 on 11/24/2022.
//

#ifndef IMPLEMENTATIONS_QUEUE_H
#define IMPLEMENTATIONS_QUEUE_H
#include <iostream>
#include <string>
#include <cassert>
using namespace std;
template<class t>

class Queue {
int front , rear, length;
t* arr;
int capacity;

public:
    Queue(int c)  {
        if (c<0) capacity=100;
        else capacity=c;
        front =0;
        rear=capacity-1;
        arr =new t[capacity];
        length=0;
    }


    bool isfull(){
        return length==capacity;
    }
    bool isempty(){
        return length==0;

    }
    void enqueue (t element){
        if(isfull()) cout<<"error in enqueue ";
        else{rear=(rear+1)%capacity;
        arr[rear]=element;
        length++;}
    }
    void dequeue(){
        if(isempty()) cout<<"error";
        else{front=(front+1)%capacity;
        --length;}
    }
    int frontqueue(){
        assert(!isempty());//When the conditional expression in an assert statement is set to true, the program continues normally.
        // But when the expression is false, an error message is issued and the program is terminated.
        return arr[front];
    }
    int rearqueue(){
        assert(!isempty());
        return arr[rear];
    }
    void print(){
        if (!isempty()) {
            for (size_t i = front; i != rear; i = (i + 1) % capacity) cout << arr[i];
            cout << arr[rear];
        }else{
                cout<<"invalid process "<<endl;
            }
    }
    int search(t element) {
        int pos = -1;
        if (!isempty()) {
            for (size_t i= front; i != rear; i = (i + 1) % capacity) {
                if (arr[i] == element) {
                    pos = i;
                    return pos;
                }
                if (pos == -1) {// to be sure that is the first appear
                    if (arr[rear] == element) {
                        pos = rear;
                        return pos;
                    }

                }
            }
            return pos;
        } else {
            cout << "invalid process " << endl;
        }

    }
    virtual ~Queue() {
        delete[] arr;

    }
};



#endif //IMPLEMENTATIONS_QUEUE_H
