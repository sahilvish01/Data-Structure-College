#include<iostream>
using namespace std;
#define max 5
#define null 0

class Queue
{
    int data[max];
    int rear = -1,front = -1;

    public:

    Queue(int val)
    {
        front ++,rear++;
        data[rear] = val;
    }

    void enqueue(int val)
    {
        if(rear == max -1)
        {
            cout << "Queue overflow, Queue is full" << endl;
            return;
        }

        data[++rear] = val;
        cout << val << " is inserted in the queue" << endl;
        return;
    }

    int dequeue()
    {
        if(front == -1)
        {
            cout << "Queue underflow, Queue is empty " << endl;
            return -1;
        }

        if(front == rear)
        {
            int x = data[rear];

            data[rear] = null;

            rear--; front--;

            return x;

        }

        int x = data[rear];

        data[rear] = null;

        rear--;

        return x;
    }

    void display()
    {
        if(front == -1)
        {
            cout << "Nothing to show, Queue is empty" << endl;
            return;
        }

        cout << endl;

        for(int i = 0; i<=rear; i++)
        {
            cout << data[i] << " ";
        }
        cout << endl;

    }

};

int main()
{

    Queue q(10);


    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);



    q.display();
    q.enqueue(60);
    q.display();

    q.dequeue();
    q.dequeue();

    q.display();

    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();

    q.display();
}