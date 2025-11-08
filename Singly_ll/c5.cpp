// Add before first node 

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

void addbefore(int x, int y)
{
    temp = first;

    while(temp -> next -> data != x)
    {
        temp = temp -> next;
    }

    ttemp = new node;

    ttemp -> data = y;
    ttemp -> next = temp -> next;

    temp -> next = ttemp;
}


// Galat hai : 

// void addbeforefirst(int y)
// {
//     temp = new node;

//     temp -> data = y;
//     temp -> next = first -> next;

//     first = temp;
// }

// Add before first node :

void addbeforefirst(int y)
{
    temp = new node;
    temp -> data = y;

    temp -> next = first;

    first = temp;
}




int main()
{

    init();

    firstnode(10);

    addnode(20);
    addnode(30);
    addnode(40);
    addnode(50);



    addafter(30,100);

    addbefore(30,200);

    addbeforefirst(500);

    display();

}