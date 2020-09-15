#include "SimpleArrayQueue.h"
#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

void printInfo(const SimpleArrayQueue &q, string msg) {
    cout << msg << endl;
    q.printQueue();
    cout << "size = " << q.getSize() << endl;
    cout << "empty = " << (q.isEmpty() ? "true" : "false") << endl;
    cout << "full  = " << (q.isFull() ? "true" : "false") << endl;
    try {
        cout << "value at front = " << q.front() << endl;
    }
    catch (logic_error e) {
        cout << e.what() << endl;
    }
    cout    << "frontIndex, backIndex = " 
            << q.getFrontIndex() << ", " 
            <<  q.getBackIndex()  << endl;

    cout << "_____________________________________" << endl;
}


int main() {
    SimpleArrayQueue q1;
    printInfo(q1, "Empty");
    for (int i = 1; i <= 5; i++)
        q1.enqueue(i);
    printInfo(q1, "After 5 enqueues");
    q1.enqueue(10);
    printInfo(q1, "After one more enqueue");
    q1.dequeue();
    q1.dequeue();
    q1.enqueue(8);
    q1.enqueue(9);
    printInfo(q1, "After 2 dequeues and two enqueues");
    for (int i = 0; i < 5; i++)
        q1.dequeue();
    printInfo(q1, "After 5 dequeues");
    q1.dequeue();
    printInfo(q1, "After one more dequeue");
    q1.enqueue(100);
    q1.enqueue(200);
    q1.enqueue(300);
    q1.enqueue(400);
    printInfo(q1, "After four enqueues");
    for (int i = 0; i < 3; i++)
        q1.dequeue();
    printInfo(q1, "After three dequeues");
    q1.enqueue(500);
    printInfo(q1, "After another enqueue");
    q1.clear();
    printInfo(q1, "After clear");

   
    
    return 0;

}