// Swap mth and nth Node 

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

Node *first,*temp,*ttemp,*p,*temp1,*ttemp1,*p1;

void init()
{
    first = temp = ttemp = p = temp1 = ttemp1 = p1 = null;
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

void swapmn(int m, int n)
{
    if(first == null || m == n)
    {
        return;
    }

    if(((m==1 && n==2 ) || (m==2 && n==1)) && (first -> next -> next == null))
    {
        temp = first -> next;

        temp -> prev = null;
        temp -> next = first;

        first -> next = null;
        first -> prev = temp;

        first = temp;
        return;
    }


    if(m == n + 1)
    {
        int temp = m;
        m = n;
        n = temp;
    }

    int count1 = 2;
    int count2 = 2;


    if(n == m + 1)
    {
        temp = first;
        ttemp = ttemp1 = temp -> next;
        p = ttemp1 -> next;

        while(count1 != m)
        {
            temp = ttemp;
            ttemp = ttemp -> next;
            count1++;
        }

        while(count2 != n)
        {
            ttemp1 = p;
            p = p -> next;
            count2++;

        }

        temp -> next = ttemp1;
        ttemp1 -> prev = temp;

        p -> prev = ttemp;
        ttemp -> next = p;

        ttemp1 -> next = ttemp;
        ttemp -> prev = ttemp1;
        return;
    }


    temp = temp1 = first;
    ttemp = ttemp1 = first -> next;
    p = p1 = first -> next -> next;

    while(count1 != m)
    {
        temp = ttemp;
        ttemp = p;
        p = p -> next;
        count1++;

        
    }

    while (count2 != n)
    {
        temp1 = ttemp1;
        ttemp1 = p1;
        p1 = p1 -> next;
        count2++;

        
    }

    temp -> next = ttemp1;
    ttemp1 -> prev = temp;
    
    p -> prev = ttemp1;
    ttemp1 -> next = p;

    temp1 -> next = ttemp;
    ttemp -> prev = temp1;
    
    p1 -> prev = ttemp;
    ttemp -> next = p1;
    

    // if(m == n + 1)
    // {
    //     temp = first;
    //     ttemp = ttemp1 = temp -> next;
    //     p = ttemp1 -> next;

    //     int count1 = 2;
    //     int count2 = 2;

    //     while(count1 != n)
    //     {
    //         temp = ttemp;
    //         ttemp = ttemp -> next;
    //         count1 ++;
    //     }

    //     while(count2 != m)
    //     {
    //         ttemp1 = p;
    //         p = p -> next;
    //         count2++;
    //     }

    //     temp -> next = ttemp1;
    //     ttemp1 -> prev = temp;

    //     p -> prev = ttemp;
    //     ttemp -> next = p;

    //     ttemp1 -> next = ttemp;
    //     ttemp -> prev = ttemp1;
    // }


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

    display();

    printf("\n");

    swapmn(1,1);

    display();

    printf("\n");

    swapmn(2,1);

    display();

    printf("\n");


    addnode(30);
    addnode(40);
    addnode(50);
    addnode(60);

    display();

    printf("\n");

    swapmn(3,4);

    display();

    printf("\n");

    swapmn(4,3);

    display();

    printf("\n");

    swapmn(2,5);

    display();

    printf("\n");

    swapmn(2,6);

    display();

}