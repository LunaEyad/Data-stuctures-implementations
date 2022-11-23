//
// Created by lona1 on 11/23/2022.
//

#ifndef IMPLEMENTATIONS_STACK_H
#define IMPLEMENTATIONS_STACK_H

#include <iostream>
#include <string>

using namespace std;
const int max_size=100;
template<class t >
class stack {
    int top;
    t item[max_size];
public:
    stack() :top(-1) {}

    bool is_empty(){
        return top<0;
    }
    bool is_full(){

        return top==max_size-1;
    }
    void push(t element){
        if(is_full())
            cout<<"error"<<endl;
        top++;
        item[top]=element;

    }
    t pop(){
        if(is_empty())
            cout<<"error"<<endl;
        t x = item[top];
        top--;
        return x;
    }

    t get_top(){
        if(is_empty())
            cout<<"error"<<endl;
        t x = item[top];

        return x;
    }
    void get_top(t &stack_top){
        if(is_empty())
            cout<<"error"<<endl;
        return stack_top;
    }
    void print(){

        for (int i =top;i>=0;i--)
            cout << item[i]<<" ";
        cout<<endl;
    }

    virtual ~stack() {

    }
};


#endif //IMPLEMENTATIONS_STACK_H
