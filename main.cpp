#include <iostream>
#include "stack.h"
#include "stack_ll.h"
using namespace std;
int main() {
   stack_ll<int>s;
   s.push(1);
   s.push(2);
   cout<<s.is_empty();
   s.print();
    return 0;
}
