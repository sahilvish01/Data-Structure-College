// Delete after the given data

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

void delafter(int x)
{
    temp = first;
    ttemp = temp -> next;

    while(temp -> data !=  x)
    {
        temp = ttemp;
        ttemp = ttemp -> next;
    }
    temp -> next = ttemp -> next;
    ttemp -> next = null;
    delete ttemp;

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

    delafter(30);
    display();

}