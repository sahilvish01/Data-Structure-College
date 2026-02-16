// Linked list 

#include<iostream>
using namespace std;

class Node
{
    protected:
    int data;
    Node* next;
};

class Linkedlist : public Node
{
    Node *first,*temp,*ttemp;
    public:

    Linkedlist()
    {
        first = temp = ttemp = nullptr;
    }


    void addnode(int x)
    {

        if(first == nullptr)
        {
            first = new Node;

            first -> data = x;
            first -> next = nullptr;

            return;
        }

        // ttemp = first;
        // temp = ttemp -> next;

        // while(temp != nullptr)
        // {
        //     ttemp = temp;
        //     temp = temp -> next;
        // }

        temp = first;

        while (temp -> next != nullptr)
        {
            temp = temp -> next;
        }


        

        ttemp = new Node;

        ttemp -> data = x;
        ttemp -> next = nullptr;

        temp -> next = ttemp;

    }


    void delnode()
    {

        if(first == nullptr)
        {
            cout << "Nothing is found to delete ";
            return;
        }

        if(first -> next == nullptr)
        {
            delete first;

            first = nullptr;
            return;
        }

        ttemp = first;
        temp = ttemp -> next;

        while (temp -> next != nullptr)
        {
            ttemp = temp;
            temp = temp -> next;
        }

        ttemp -> next = nullptr;

        delete temp;

        temp = nullptr;
        
        
    }

    void display()
    {
        temp = first;
        while(temp != nullptr)
        {
            cout << temp -> data << " ";
            temp = temp -> next;
        }
    }

};

int main()
{

    Linkedlist n;

    n.addnode(10);
    n.addnode(20);
    n.addnode(30);
    n.addnode(40);
    n.addnode(50);

    n.display();

    cout << endl;
    n.delnode();
    n.delnode();
    n.delnode();
    n.delnode();
    n.delnode();
    n.delnode();
    n.delnode();
    n.delnode();

    n.display();

}