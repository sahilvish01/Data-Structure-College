// Array Iplimentation of Stack : My Way

#include<stdio.h>
#define max 5
struct stack
{
    int data[5];
    int top;
};

stack *p = new stack;

void init()
{
    
    p -> top = -1;

    // printf("%d",p->top);
}

int full()
{

    if(p -> top == max - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

int Empty()
{
    if(p -> top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(int x)
{
    if(full())
    {
        printf("\nStack is Full, %d is overflow",x);
    }
    else
    {
        p -> top ++;

        p -> data[p -> top] = x;

        printf("\n%d is pushed",x);
    }
}

void pop()
{
    if(Empty())
    {
        printf("\nStack is Empty, Nothing is popped");
    }
    else
    {
        int x = p -> data[p -> top];

        p -> top --;

        printf("\n%d is popped",x);
    }
}

int main()
{
    init();

    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);

    printf("\n");

    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    printf("\n");

}