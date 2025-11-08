// Merge two sorted even and odd list in sorted order 

// Saprate list into two list contains even and odd :
// 1,2,3,4,5,6,7,8,9,10



#include<stdio.h>
#include<iostream>
#define null 0
using namespace std;

struct node
{
    int data;
    node *next;
};

node *first,*temp,*ttemp,*first2,*p, *p2;

void init()
{
   first = temp = ttemp = first2 = p = p2 = null; 
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

void saprate()
{
    first2 = first -> next;

    temp = first;
    ttemp = first2;
    p = first2 -> next;

    while(temp -> next -> next != null)
    {
        temp -> next = p;
        ttemp -> next = p -> next;

        temp = temp -> next;
        ttemp = ttemp -> next;

        p = p -> next -> next;
    }

    temp -> next = null;

    
}

// void display()
// {
//     temp = first;

//     while(temp != null)
//     {
//         cout << " " << temp -> data;
//         temp = temp -> next;
//     }
// }

void display2()
{
    temp = first2;

    while(temp != null)
    {
        cout << " " << temp -> data;
        temp = temp -> next;
    }
}

void merge2ll()
{
    temp = first;
    ttemp = first2;

    p = temp -> next;
    p2 = ttemp -> next;

    // while(p != null && p2 != null)
    while(p != null)
    {
        temp -> next = ttemp;
        ttemp -> next = p;

        temp = p;
        ttemp = p2;

        p = p -> next;
        p2 = p2 -> next;
    }

    temp -> next = ttemp;
    first2 = null;

}



int main()
{

    init();

    firstnode(1);

    addnode(2);
    addnode(3);
    addnode(4);
    addnode(5);
    addnode(6);
    addnode(7);
    addnode(8);
    addnode(9);
    addnode(10);

    display();

    cout << endl;

    saprate();

    display();

    cout << endl;

    display2();

    cout << endl;

    merge2ll();

    display();


}