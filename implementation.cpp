#include <iostream>
#include "prototype.h"

Stack::Stack()
{
    m_p_arr = new int[capacity];
}

Stack::~Stack()
{
    delete [] m_p_arr;
}

void Stack::push(int elem)
{
    if(!empty())
    {
        m_p_arr[++m_top] = elem;
    }
    else
    {
        std::cout << "overflow" << std::endl;
    }
}

void Stack::pop()
{
    if(!empty())
    {
        m_p_arr--;
    }
    else
    {
        std::cout << "underflow" << std::endl;
    }
}

int Stack::top()
{
    if(!empty())
    {
        m_p_arr[m_top];
    }
    else
    {
        std::cout << "error" << std::endl;
    }
}

bool Stack::empty()
{
    return(m_top == -1);
}


Queue::Queue()
{
    arr = new int[capacity];
}

Queue::~Queue() {
    delete[] arr;
}

void Queue::push_back(int item)
{
    if (isFull())
    {
        std::cout << "Overflow\nProgram Terminated\n";
    }
    rear = (rear + 1) % capacity;
    arr[rear] = item;
    count++;
}

int Queue::pop_front()
{
    if (isEmpty())
    {
        std::cout << "Underflow\nProgram Terminated\n";
    }
    int x = arr[front];
    front = (front + 1) % capacity;
    count--;
    return x;
}

bool Queue::isEmpty() {
    return (size() == 0);
}

bool Queue::isFull() {
    return (size() == capacity);
}