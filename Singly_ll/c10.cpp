//Take a string and put on linked list and check if it is pelindrome through linked list 

#include<stdio.h>
#include<iostream>
using namespace std;
#define null 0

struct node
{
    char data;
    node *next;
};

node *first, *temp, *ttemp,*first2,*p;

void checkpelindrome(char s[])
{
    ttemp = null;
    

    for(int i = 0; s[i] != '\0'; i++ )
    {
        // storing in reverse
        first2 = new node;

        first2 -> data = s[i];
        first2 -> next = ttemp;

        ttemp = first2;
      
    }

    first = new node;
    first -> data = s[0];
    temp = first;

    // Storing straight
    for(int i = 1; s[i] != '\0'; i++ )
    {
        p = new node;

        p -> data = s[i];

        temp -> next = p;
        temp = p;
    }

    temp -> next = null;

    // Checking Pelindrome :
    
    temp = first;
    ttemp = first2;

    while(temp != null)
    {
        

        if(temp -> data == ttemp -> data)
        {
            // cout<< " " << temp -> data;
            temp = temp -> next;
            // cout << " " << ttemp -> data;
            ttemp = ttemp -> next;

            // cout << endl;

        }
        else
        {
            break;
        }
    }

    if(temp == null)
    {
        cout << s << " - String is pelindrome";
    }
    else
    {
        cout << s << " - String is not pelindrome";
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

void display2()
{
    temp = first2;

    while(temp != null)
    {
        cout << " " << temp -> data;
        temp = temp -> next;
    }
}



int main()
{

    char s[] = "madam";

    checkpelindrome(s);

    // cout << endl;

    // display();

    // cout << endl;

    // display2();

}