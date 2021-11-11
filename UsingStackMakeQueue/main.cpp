#include<iostream>
#include<stack>

using namespace std;

class Queue {
    stack<int> input, output;
public:

    void push(int x) {
        input.push(x);
    }

    void pop(void) {
        peek();
        output.pop();
    }

    int peek(void) {
        if (output.empty())
            while (input.size())
                output.push(input.top()), input.pop();
        return output.top();
    }

    bool empty(void) {
        return input.empty() && output.empty();
    }
};

int main()
{
    //Queue* myQueue = new Queue();
    Queue myQueue;
    myQueue.push(1); // queue is: [1]
    myQueue.push(2); // queue is: [1, 2] (leftmost is front of the queue)
    cout<<myQueue.peek()<<endl; // return 1
    myQueue.pop();// return 1, queue is [2]


    myQueue.push(4); 
    myQueue.push(5);
    cout<<myQueue.peek()<<endl;myQueue.pop(); 
    cout<<myQueue.peek()<<endl;myQueue.pop();
    cout<<myQueue.peek()<<endl;myQueue.pop();  
    
    cout<<myQueue.empty()<<endl; // return false

    return 0;
}