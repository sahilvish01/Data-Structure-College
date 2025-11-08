// Convert the given integer into the linked list
// n = 1234567

#include<stdio.h>
#include<iostream>
using namespace std;
#define null 0

struct node 
{
    int data;
    node* next;
};

node *first,*temp;

void convertinll(int n)
{
    if(n == 0)
    {
        first = new node;

        first -> data = n;
        first -> next = null;
    }
    
    else
    {
        temp = null;

        while(n != 0)
        {
            int d = n % 10;

            first = new node;

            first -> data = d;
            first -> next = temp;

            temp = first;

            n = n/10;
        }

        temp = null;

    }
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
    int n;

    cout << "Enter a number to convert : ";

    cin >> n;


    cout << endl;


    convertinll(n);

    display();

    
}