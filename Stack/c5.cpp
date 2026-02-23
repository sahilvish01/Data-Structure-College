// Stack Implementation

#include<iostream>
using namespace std;
#define max 5
#define null 0

class Stack 
{
    int data[max];
    int top = -1;

    public:

    Stack(int val)
    {
        data[++top] = val;
        cout << endl << val << " is push on the stack ";
    }

    void push(int val)
    {
        if(top == max-1)
        {
            cout << endl << "Stack Overflow, Stack is full ";
            return;
        }

        data[++top]=val;
        cout << endl << val << " is pushed on the stack ";
        return; 
    }

    int pop()
    {
        if(top == -1)
        {
            cout << endl << "Stack underflow, Stack is empty ";
            return -1;
        }

        int x = data[top];
        data[top--] = null;

        cout << endl << x << " is popped from stack ";
        return x;

    }
    
    void display()
    {
        cout << endl;
        for(int i = 0; i<=top; i++)
        {
            cout << data[i] << " ";
        }
    }


};


int main()
{
    Stack s(10);

    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);

    int a = s.pop();
    s.pop();
    s.pop();

    s.display();

    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
}