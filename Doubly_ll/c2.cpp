// Add after the given data 

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


void addafter(int x,int y)
{
    temp = first;

    while(temp ->data != x)
    {
        temp = temp -> next;
    }

    ttemp = new Node;

    ttemp -> data = y;
    ttemp -> prev = temp;
    ttemp -> next = temp -> next;

    temp -> next -> prev = ttemp;
    temp -> next = ttemp;
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

    addafter(30,60);

    display();

}