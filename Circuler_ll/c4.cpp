// Practice Circuler Linked list

#include<iostream>
using namespace std;

class CLL
{
    struct Node
    { 
        int data;
        Node *next;
    };
    
    Node *first, *temp, *ttemp;
    public : 

    CLL(int val)
    {
        first = new Node;
        first -> data =val;
        first -> next = first;
    }

    void addnode(int val)
    {
        if(first == nullptr)
        {
         
            first = new Node;
            first -> data =val;
            first -> next = first;
            return;
        }

        temp = first;

        while(temp -> next != first)
        {
            temp = temp -> next;
        }

        ttemp = new Node;

        ttemp -> data = val;
        ttemp -> next = first;

        temp -> next = ttemp;
         
    }

    void delnode(int val)
    {
        if(first == nullptr)
        {
            cout << "Nothing to delete, Create linked list first. ";
            return;
        }
        if(first -> data == val && first -> next == first)
        {

            delete first;

            first = nullptr;
            return;

        }
        else if(first -> data == val)
        {
            ttemp = first;
            temp = ttemp -> next;
            

            while(temp -> next != first)
            {
                temp = temp -> next;
            }

            first = first -> next;

            temp -> next = first;

            ttemp -> next = nullptr;
            delete ttemp;

        }
        else
        {
            ttemp = first;
            temp = ttemp ->next;

            while(temp -> data != val)
            {
                ttemp = temp;
                temp = temp -> next;

                if(temp == first)
                {
                    cout << val << " is not present in linked list. ";
                    return;
                }
            }

            ttemp -> next = temp -> next;

            temp -> next = nullptr;

            delete temp;


        }
        
    }

    void display()
    {
        if(first == nullptr)
        {
            cout << "No linked list is created. ";
            return;
        }
        temp = first;

        do
        {
            cout << temp -> data << " ";
            temp = temp -> next;
        }while(temp != first);
    }

};


int main()
{

    CLL c1(10);

    c1.addnode(20);
    c1.addnode(30);
    c1.addnode(40);
    c1.addnode(50);

    c1.display();

    cout << endl;
    c1.delnode(60);

    c1.display();

    cout << endl;

    c1.delnode(10);
    c1.display();


}