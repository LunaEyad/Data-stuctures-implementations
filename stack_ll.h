//
// Created by lona1 on 11/23/2022.
//
#include <iostream>
#include <string>

using namespace std;
#ifndef IMPLEMENTATIONS_STACK_LL_H
#define IMPLEMENTATIONS_STACK_LL_H

template<class t>
class stack_ll {
  struct Node{
    t data;
    Node* next;
  };
 Node* top;
 Node* cur;

public:
    stack_ll(){
        top= nullptr;

    }
    void push(t element){
        Node *new_element =new Node;
        if (new_element== nullptr) cout<<"error";
        new_element->data=element;
        new_element->next=top;
        top=new_element;
    }
    bool is_empty(){
        return (top== nullptr);// under test

    }
    void get_top(){
        if (is_empty()) cout<< "error";
        cout <<"the top element is"<< top->data<< endl ;
    }
    void pop(){
        if (is_empty()) cout<< "error";
         top=top->next;

    }
    void print(){
        cur=top;
        while(cur!= nullptr){
            cout<<cur->data<<" ";
            cur=cur->next;
        }
    }

    virtual ~stack_ll() {

    }
};


#endif //IMPLEMENTATIONS_STACK_LL_H
