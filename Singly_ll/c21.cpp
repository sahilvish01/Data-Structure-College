// Polynomial 

#include<iostream>
#define null 0
using namespace std;

struct Node
{
    int coeff;
    int pow;
    Node* next;
};

Node *first, *temp, *ttemp;

void init()
{
    first = temp = ttemp = null;
}

void createfirst(int c, int p)
{
     first = new Node;

     first -> coeff = c;
     first -> pow = p;
     first -> next = null;

}

void addnode(int c,int p)
{
    ttemp = new Node;

    ttemp -> coeff = c;
    ttemp -> pow = p;

    if(first -> pow < ttemp -> pow)
    {
        ttemp -> next = first;
        first = ttemp;
        return;
    }

    temp = first;

    // if(temp -> next == null)
    // {
    //     temp -> next = ttemp;

    //     ttemp -> next = null;
    //     return;
    // }

    while(temp -> next != null)
    {
        if(temp -> next -> pow > ttemp -> pow)
        {
            temp = temp -> next;        
        }
        else
        {
            break;
        }
    }

    if(temp -> next != null && temp -> next -> pow == ttemp -> pow)
    {
        temp -> next -> coeff = temp -> next -> coeff + ttemp -> coeff;

        ttemp -> next = null;
        delete ttemp;

        return;
    }


    ttemp -> next = temp -> next; 
    temp -> next = ttemp;


}

void display()
{
    temp = first;

    while(temp != null)
    {
        cout << "Coeff : " << temp -> coeff << " Pow : " << temp -> pow << endl;
        temp = temp -> next;
    }

}

int main()
{
    createfirst(2,4);

    
    addnode(3,3);
    addnode(4,2);
    addnode(5,1);

    addnode(2,1);
    addnode(6,2);
    

    display();

    cout << endl;

    addnode(7,5);
    display();


}