#include "SimpleArrayQueue.h"
#include <iostream>
#include <stdexcept>
using namespace std;

SimpleArrayQueue::SimpleArrayQueue()  
{
    size = 0;
    frontIndex = 0;
}

bool SimpleArrayQueue::isFull() const 
{
    bool status = false;
    
    if(size == MAXSIZE)
        status = true;
    return status;
}

bool SimpleArrayQueue::isEmpty() const 
{
    bool status = false;
    
    if(size == 0)
        status = true;
    return status;
}

int SimpleArrayQueue::getBackIndex() const  
{
    if(frontIndex == 0)
       return frontIndex + MAXSIZE -1;
    
    return frontIndex + MAXSIZE -1 % MAXSIZE;
}


void SimpleArrayQueue::enqueue(int v)  
{
    if(size != MAXSIZE)
    {
        //size++;
        values[size] = v;
        size++;
    }
}

void SimpleArrayQueue::dequeue() 
{
    if(isEmpty())
        size--;
}

int SimpleArrayQueue::front() const 
{
   if(isEmpty())
       throw logic_error("Can't get front of an empty queue");
    return values[frontIndex];
}

int SimpleArrayQueue::getSize() const 
{
    return size;
}

void SimpleArrayQueue::clear()
{
    size = 0;
    frontIndex = 0;
}

void SimpleArrayQueue::printQueue() const 
{
    cout << "{ ";
    
    for(int i = 0; i < size; i++)
        cout << values[i] << " ";
    
    cout << "}" << endl;
}


int  SimpleArrayQueue::getFrontIndex() const 
{
    return frontIndex;
}
