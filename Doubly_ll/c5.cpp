// Creation of Doubly Linked list 

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

void swapfl()
{
    temp = first -> next;
   
    if(temp-> next == null)
    {
        first -> next = null;
        first -> prev = temp;

        temp -> prev = null;
        temp -> next = first;

        first = temp;
    }

    else
    {
        ttemp = temp -> next;

        while(ttemp -> next != null)
        {
            temp = ttemp;
            ttemp = ttemp -> next;
        }

        ttemp -> prev = null;
        ttemp -> next = first -> next;

        first -> next -> prev = ttemp;

        temp -> next = first;


        first -> prev = temp;
        first -> next = null;

        first = ttemp;
    }

    
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
    swapfl();

    display();
}