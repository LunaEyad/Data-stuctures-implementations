#include <iostream>
#include "stack.h"
#include "Queue.h"

#include "Queue_ll.hh"
#include "stack_ll.h"
using namespace std;
int main() {

    Queue<char>q(5);

    q.enqueue('a');

  q.enqueue('b');

    q.enqueue('c');

    q.enqueue('d');

    q.enqueue('e');

   q.enqueue('f');

    q.print();

    cout<<endl;




    q.dequeue();

    q.enqueue('J');

    q.print();

    cout<<endl;

    cout<<q.search('e')<<endl;
}
