// Add before first

#include<stdio.h>
#include<iostream>
#define null 0
using namespace std;

struct Node
{
    int data;
    Node* prev;
    Node* next;
};

Node *first,*temp,*ttemp;

void init()
{
    first = temp = ttemp = null;
}

void createfirst(int x)
{
    first = new Node;

    first -> data = x;
    first -> prev = null;
    first -> next = null;
}

void addnode(int x)
{
    temp = first;

    while(temp -> next != null)
    {
        temp = temp -> next;
    }

    ttemp = new Node;

    ttemp -> data = x;
    ttemp -> next = null;
    ttemp -> prev = temp;

    temp -> next = ttemp;
}

void addbefore(int x)
{
    temp = new Node;

    temp -> data = x;
    temp -> prev = null;
    temp -> next = first;

    first -> prev = temp;

    first = temp;
}

void display()
{
    temp = first;

    while(temp != null)
    {
        cout << " " << temp -> data;
        temp = temp -> next;
    }
}

int main()
{
    init();
    createfirst(10);

    addnode(20);
    addnode(30);
    addnode(40);
    addnode(50);

    display();

    cout << endl;

    addbefore(60);
    display();

}