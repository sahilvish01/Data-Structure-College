// Swap first and last

#include<stdio.h>
#include<iostream>
#define null 0
using namespace std;

struct node
{
    int data;
    node *next;
};

node *first,*temp,*ttemp;

void init()
{
   first = temp = ttemp = null; 
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

void swapfl()
{
    temp = first -> next;
    ttemp = temp -> next;

    while(ttemp -> next != null)
    {
        temp = ttemp;
        ttemp = ttemp -> next;
    }

    temp -> next = first;
    ttemp -> next = first -> next;
    first -> next = null;
    first = ttemp;
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

    swapfl();

    display();

}