// Creation Cll

#include<iostream>
using namespace std;

class Node
{
    public :
    int data;
    Node* next;
};

class cll
{
    Node* head;
    Node* tail;

    public :

    cll()
    {
        head = tail = nullptr;
    }

    void addlast(int x)
    {
        Node* newNode = new Node;

        newNode -> data = x;

        if(head == nullptr)
        {
            head = tail = newNode;
            tail -> next = head;
            return;
            
        }

        Node* temp = head;

        while(temp -> next != head)
        {
            temp = temp -> next;
        }

        temp -> next = newNode;
        newNode -> next = head;

        tail = newNode;
    }

    void display()
    {
        Node* temp = head;

        if(head == nullptr)
        {
            return;
        }

        do
        {
            cout << " " << temp -> data;
            temp = temp -> next;

        }while(temp != head);

        cout << endl;

    }

};

int main()
{
    cll ll;

    ll.addlast(10);
    ll.addlast(20);
    ll.addlast(30);
    ll.addlast(40);
    ll.addlast(50);

    ll.display();
}