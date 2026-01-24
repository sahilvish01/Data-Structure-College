// According to college

#include<iostream>
#define null 0
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node *first , *temp , *ttemp , *p;

void init()
{
    first = temp = ttemp = p = null;
}

void createfirst(int x)
{
    first = new Node;

    first -> data = x;
    first -> next = first;

}

void addnode(int x)
{
    temp = first;

    while(temp -> next != first )
    {
        temp = temp -> next;
    }

    ttemp = new Node;

    ttemp -> data = x;
    ttemp -> next = first;

    temp -> next = ttemp;
}

void display()
{
    temp = first;

    do
    {
        cout << " " << temp -> data;
        temp = temp -> next;
    }while(temp != first);

    cout << endl;
}




int main()
{

    init();

    createfirst(10);

    addnode(20);
    addnode(30);
    addnode(40);

    display();

}