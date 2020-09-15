#ifndef SIMPLEARRAYQUEUE_H
#define SIMPLEARRAYQUEUE_H

class SimpleArrayQueue {
private:
    static const int MAXSIZE = 5; // max queue size
    int size;        // current number of values in the queue
    int frontIndex;  // index of front of queue
    int values[MAXSIZE]; // queue values
    
public:

    SimpleArrayQueue();  // initialize size and frontIndex to 0

    bool isFull() const; // return true iff size == MAXSIZE

    bool isEmpty() const; // return true iff size == 0

    void enqueue(int v); // add v to the back of the queue or do nothing if queue is full

    void dequeue(); // remove front value or do nothing if queue is empty

    int front() const; // return front value or throw a logic_error exception if queue is empty

    int getSize() const ; // return size

    void clear();  // reset size and frontIndex to 0

    void printQueue() const; // print queue items from front to back, enclosed by braces, followed by endl 

    int  getFrontIndex() const; // return value of frontIndex 

    int  getBackIndex() const;  // return index of value at the back of queue

};



#endif
