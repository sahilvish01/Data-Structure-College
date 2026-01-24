// Joseph's Problem

#include<iostream>
#define null 0
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node *first , *temp , *ttemp , *p;

void init()
{
    first = temp = ttemp = p = null;
}

void createfirst(int x)
{
    first = new Node;

    first -> data = x;
    first -> next = first;

}

void addnode(int x)
{
    temp = first;

    while(temp -> next != first )
    {
        temp = temp -> next;
    }

    ttemp = new Node;

    ttemp -> data = x;
    ttemp -> next = first;

    temp -> next = ttemp;
}

void JP(int magnum)
{
    temp = first;
    ttemp = first;
    int count = 0;

    while(ttemp -> next != ttemp)
    {

        temp = ttemp;
        ttemp = ttemp -> next;
        count ++;

        if(count == magnum)
        {
            temp -> next = ttemp -> next;

            delete ttemp;

            ttemp = temp -> next;

            count = 0;
            
        }

        
        
    }

    cout << "Magic Node : " << ttemp -> data << endl;

}

void display()
{
    temp = first;

    do
    {
        cout << " " << temp -> data;
        temp = temp -> next;
    }while(temp != first);

    cout << endl;
}




int main()
{

    init();

    createfirst(10);

    addnode(20);
    addnode(30);
    addnode(40);
    addnode(50);

    JP(0);

    

}