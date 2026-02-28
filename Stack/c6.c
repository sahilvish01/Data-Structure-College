// Need Correction

#include<stdio.h>
// #include<stdlib.h>
#include<ctype.h>
#define max 100

int presidenceof(char ch)
{
    if(ch == '^')
    {
        return 3;
    }

    if(ch == '*' || ch == '/')
    {
        return 2;
    }

    if(ch == '+' || ch == '-')
    {
        return 1;
    }
 
}

void convert(char *str,int length) 
{
    char data[max];
    int top = -1;
    char result[length+1];
    int j = -1;
    for(int i = 0 ; i < length ; i++)
    {
        char ch = str[i];
        
        if(isalnum(ch))
        {
            result[++j] = ch;
        }
        
        else if(ch == '(')
        {
            data[++top] = ch;
        }

        else if(ch == ')')
        {
            while(data[top] != '(')
            {
                result[++j] = data[top--];
            }

            top--;
        }

        else if(presidenceof(ch) > presidenceof(data[top]))
        {

            data[++top] = ch;

        }
        else
        {
            while (presidenceof(ch) <= presidenceof(data[top]))
            {
                result[++j] = data[top--];
            }

            data[++top] = ch;
            

        }


    }

    while(top > -1)
    {
        result[++j] = data[top--];
    }

    result[++j] = '\0';

    for(int i = 0 ; i <= j ; i++)
    {
        printf("\t%c",result[i]);
    }

    // printf("%s",result);
    // for(int i = 0; i<j ; i++)
    // {
    //     str[i] = result[i];
    //     i++;
    // }
    
    // str = result;

}



int main()
{

    char str[] = "A+B*(C-D)^E";
    int size = sizeof(str)/sizeof(char);
    // char arr[size+1];
    
    // char *arr = convert(str,size);


    printf("\nThe infix expression : \n");

    printf("%s",str);

    printf("\nThe postfix expression : \n");


    convert(str,size);

    // printf("%s",str);

    
    

}