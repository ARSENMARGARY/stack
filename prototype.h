class Stack
{
public:
    Stack();
    ~Stack();

public:
    void push(int);
    void pop();
    int top();
    bool empty();

private:
    int* m_p_arr = nullptr;
    int m_top = -1;
    int capacity = 10;
};

class Queue
{
public:
    Queue();
    ~Queue();

public:
    int pop_front();
    void push_back(int x);
    int peek();
    int size();
    bool isEmpty();
    bool isFull();

private:
    int *arr;
    int capacity = 100;
    int front {};      
    int rear = -1;
    int count {};
};