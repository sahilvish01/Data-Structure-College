// Polynomial Linked List

#include<stdio.h>
#include<iostream>
#define null 0
using namespace std;

struct node
{
    int coeff;
    int pow;
    node *next;
};

node *first, *temp, *ttemp;

void init()
{
    first = temp = ttemp = null;
}

void createfirst(int x, int y)
{
    first = new node;

    first -> coeff = x;
    first -> pow = y;
    first -> next = null;
}

void addnode(int x, int y)
{
    temp = first;

    while(temp -> next != null)
    {
        temp = temp -> next;
    }

    ttemp = new node;

    ttemp -> coeff = x;
    ttemp -> pow = y;
    ttemp -> next = null;

    temp -> next = ttemp;



}


void display()
{
    temp = first;

    while(temp != null)
    {
        cout << temp -> coeff;
        cout << " " << temp -> pow;
        cout << endl;
        temp = temp -> next;
    }
}

int main()
{

    init();
    createfirst(3,5);

    addnode(2,4);
    addnode(3,2);
    addnode(8,0);

    display();


}