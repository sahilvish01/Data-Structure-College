// Add After the given data

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

void display()
{
    temp = first;

    while(temp!= null)
    {

        cout << " " << temp -> data;
        temp = temp -> next;
    }
}


void addafter(int x,int y)
{
    temp = first;

    while(temp -> data != x)
    {
        temp = temp -> next;
    }

    ttemp = new node;

    ttemp -> data = y;
    ttemp -> next = temp -> next;

    temp -> next = ttemp;


}

int main()
{

    init();

    firstnode(10);

    addnode(20);
    addnode(30);
    addnode(40);
    addnode(50);



    addafter(10,100);
    addafter(20,100);
    addafter(30,100);
    addafter(40,100);
    addafter(50,100);


    display();

}