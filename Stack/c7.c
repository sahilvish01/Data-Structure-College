// Postfix Evaluation : 

#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define max 100

int stack[100];
int top = -1;



int posteval(char arr[],int length)
{    
    
    for(int i = 0; i < length; i++)
    {
        char ch = arr[i];
        

        if(isalnum(ch))
        {
            stack[++top] = ch - '0';
        }
        else
        {

            int op1 = stack[top--];
            int op2 = stack[top--];
            int op3;
            switch (ch)
            {
                case '^' :   op3 = pow(op2,op1);
                            break;
                case '*' :   op3 = op2*op1;
                            break;
                case '/' :   op3 = op2/op1;
                            break;
                case '+' :   op3 = op2 + op1;
                            break;
                case '-' :   op3 = op2 - op1;
            }

            
            stack[++top] = op3;


        }

    }
    return (stack[top]);

}



int main()
{

    char arr[] = "962*+73/-";

    int size = sizeof(arr)/sizeof(char);

    printf("%d",posteval(arr,size));

}