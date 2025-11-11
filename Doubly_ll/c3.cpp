// Add a node before the given data 

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

Node *first,*temp,*ttemp,*p;

void init()
{
    first = temp = ttemp = p = null;
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

void addbefore(int x,int y)
{
    temp = first;
    p = temp -> next;

    while(p -> data != x)
    {
        temp = p;
        p = p -> next;
    }

    ttemp = new Node;

    ttemp -> data = y;
    ttemp -> prev = temp;
    ttemp -> next = p;

    temp -> next = ttemp;
    p -> prev = ttemp;
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

    printf("\n");

    addbefore(40,60);

    display();

}