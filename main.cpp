#include <iostream>
#include "stack.h"
#include "Queue.h"

#include "Queue_ll.h"
#include "stack_ll.h"
using namespace std;
int main() {
Queue_ll<int > q;
q.push_back(1);
q.push_back(2);
cout<<q.pop_front()<<endl;
    q.print();
    cout<<q.end()<<endl;
    cout<<q.begin()<<endl;


}
