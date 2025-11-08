// Reversre the linked list

#include<stdio.h>
#include<iostream>
using namespace std;
#define null 0


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

void display()
{
    temp = first;

    while(temp!= null)
    {

        cout << " " << temp -> data;
        temp = temp -> next;
    }
}

void reverse()
{
    temp = first;
    
    if(temp -> next != null)
    {
        ttemp = temp -> next;
        p = ttemp -> next;

        temp -> next = null;

        while(p != null)
        {
            ttemp -> next = temp;
            temp = ttemp;
            ttemp = p;
            p = ttemp -> next; 
        }

        ttemp -> next = temp;
        first = ttemp;
        
    }
    else
    {
        return;
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

    cout << endl;

    reverse();

    display();


    

}