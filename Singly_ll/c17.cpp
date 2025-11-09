// Swap last and second last

#include<stdio.h>
#include<iostream>
#define null 0
using namespace std;

struct node
{
    int data;
    node *next;
};

node *first,*temp,*ttemp,*p;

void init()
{
   first = temp = ttemp = p = null; 
}

void firstnode(int x)
{
    first = new node;

    first -> data = x;
    first -> next = null;
}

void addnode(int x)
{
    temp = first;

    while(temp -> next != null)
    {
        temp = temp -> next;
    }

    ttemp = new node;

    temp -> next = ttemp;

    ttemp -> data = x;
    ttemp -> next = null;
}

void swaplsl()
{
    temp = first;
    ttemp = temp -> next;
    p = ttemp -> next;

    while(p -> next != null)
    {
        temp = ttemp;
        ttemp = p;
        p = p -> next;
    }

    temp -> next = p;
    p -> next = ttemp;
    ttemp -> next = null;
}

void display()
{
    temp = first;

    while(temp!= null)
    {

        cout << " " << temp -> data;
        temp = temp -> next;
    }
}

int main()
{

    init();

    firstnode(10);

    addnode(20);
    addnode(30);
    addnode(40);
    addnode(50);

    display();

    printf("\n");

    swaplsl();

    display();


}