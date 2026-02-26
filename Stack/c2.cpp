// Linked List Iplimentation of Stack : My Way

#include<stdio.h>
#define null 0

struct stack
{
    int data;
    stack *next;
};

stack *top,*temp,*ttemp;

void init()
{
    top = temp = ttemp = null;
}

void push(int x)
{
    top = new stack;
    if(top == null)
    {
        printf("\nStack is Full,%d is overflow",x);
        return;
    }

    top -> data = x;
    top -> next = temp;


    printf("\n%d is pushed",x);

    temp = top;
}

void pop()
{
    if(top == null)
    {
        printf("\nStack is Empty, Nothing is deleted");
        return;
    }
    
    temp = top -> next;
    top -> next = null;

    int x = top -> data;

    delete top;

    printf("\n%d is popped",x);

    top = temp;
}


int main()
{

    init();
    push(10);
    push(20);
    push(30);
    push(40);

    printf("\n");

    pop();
    pop();
    pop();
    pop();
    pop();
}