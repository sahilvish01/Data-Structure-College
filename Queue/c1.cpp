// Creation of Queue

#include<iostream>
using namespace std;
#define max 5
class queue
{
    int front;
    int rear;
    int data[max];

    public :

    queue()
    {
        front = -1;
        rear = -1;
    }

    void enqueue(int a)
    {
        if(rear == max-1)
        {
            cout << "Overflow,Queue is full" << endl;
            return;
        }
        
        rear++;
        data[rear] = a;
        cout << a << " is inserted" << endl;
        
        if(rear == 0)
        {
            front = rear;
        }

    }

    void dequeue()
    {
        if(front == -1)
        {
            cout << "Underflow, Queue is empty" << endl;
            return;
        }

        int x = data[front];
        cout << x << " is deleted" << endl;

        if(front == rear)
        { 
            front = rear = -1;
            return;
        }

        front ++;
        return;
    }

};

int main()
{
    queue q;

    q.dequeue();

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.enqueue(70);

    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();


    

}