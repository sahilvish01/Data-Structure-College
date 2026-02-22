// Postfix Evaluation 

#include<iostream>
#include<cmath>
using namespace std;
#define max 100

struct Evaluate
{
    private:
    int data[max];
    int top;

    int operate(int op1,int op2,char ch)
    {
        switch(ch)
        {
            case '^' : return pow(op2,op1);
            case '*' : return op2*op1;
            case '/' : return op2/op1;
            case '+' : return op2+op1;
            case '-' : return op2-op1;
        }
    }


    public :

    Evaluate()
    {
        top = -1;
    }
    

    int Evalpost(char arr[])
    {
        for(int i = 0; arr[i] != '\0'; i++)
        {
            char ch = arr[i];
            if(isalnum(ch))
            {
                top++;
                data[top] = ch - '0';
            }
            else
            {
                int op1 = data[top--];
                int op2 = data[top--];

                int op3 = operate(op1,op2,ch);

               data[++top] = op3;

            }
        }

        cout << data[top];
    }

};


int main()
{
    char str[] = "962*+73/-";

    Evaluate e;
    
    e.Evalpost(str);
}