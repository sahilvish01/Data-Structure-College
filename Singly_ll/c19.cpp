// Swap mth and nth node 

#include<stdio.h>
#include<iostream>
#define null 0
using namespace std;

struct node
{
    int data;
    node *next;
};

node *first,*temp,*ttemp,*p,*temp1,*ttemp1,*p1;

void init()
{
   first = temp = ttemp = p = temp1 = ttemp1 = p1 = null; 
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

void swapmn(int m, int n)
{
    int count = 2;
    int count1 = 2;

    temp = first;
    ttemp = temp -> next;
    p = ttemp -> next;

    temp1 = first;
    ttemp1 = temp1 -> next;
    p1 = ttemp1 -> next;

    while(count != m)
    {
        temp = ttemp;
        ttemp = p;
        p = p -> next;
        count ++;

        if(ttemp == null)
        {
            return;
        }
    }

    while(count1 != n)
    {
        temp1 = ttemp1;
        ttemp1 = p1;
        p1 = p1 -> next;
        count1 ++;

        if(ttemp1 == null)
        {
            return;
        }
    }

    temp -> next = ttemp1;
    ttemp1 -> next = p;

    temp1 -> next = ttemp;
    ttemp -> next = p1;

    
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
    addnode(60);
    addnode(70);
    addnode(80);

    display();

    printf("\n");

    swapmn(3,8);

    display();


    printf("\n");

    swapmn(4,6);

    display();

}