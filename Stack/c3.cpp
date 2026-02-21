// Infix to Postfix




// #include<iostream>
// using namespace std;
// #define max 10

// struct convert
// {
//     private:

//     char data[max];
//     int top;

//     int presidence(char c)
//     {
//         if(c == '^')
//         {
//             return 3;
//         }

//         if(c == '*' || c == '/')
//         {
//             return 2;
//         }

//         if(c == '+' || c == '-')
//         {
//             return 1;
//         }

//         return -1; // for '('

//     }

//     public:
    
//     convert()
//     {
//         top = -1;
//     }

//     void intopost(char arr[],int size)
//     {
//         // string result;
//         char result[size+1]; 
//         int j = 0;
//         for(int i = 0; i < size; i++)
//         {
//             char c = arr[i]; 

//             if(isalnum(c))
//             {
//             //    result += c;
//                result[j] = c; j++;
               
//             }
//             else
//             {
//                 if(c == '(')
//                 {
//                     top ++;
//                     data[top] = c; 
//                 }

//                 else if(c == ')')
//                 {
//                     while(data[top] != '(')
//                     {
//                         // result += data[top];
//                         result[j] = data[top]; j++;
//                         top --;
//                     }
//                     top --;
//                 }
//                 else
//                 {
//                     if(top != -1 && presidence(data[top]) >= presidence(c))
//                     {
//                         while(top != -1 && presidence(data[top]) >= presidence(c))
//                         {
//                             // result += data[top];
//                             result[j] = data[top]; j++;
//                             top--;
//                         }

//                         top ++;

//                         data[top] = c;
//                     }
//                     else 
//                     {
//                         top ++;

//                         data[top] = c;
//                     }
//                 }
//             }

//         }

//         while(top != -1)
//         {
//             result[j] = data[top]; j++;
//             top--;
//         }

//         for(int i = 0; i < size; i++)
//         {
//             arr[i] = result[i];
//         }
        
        
//     }


// };


// int main()
// {
//     char str[] = "A^B-(C+D/E)*F";

//     convert c;

//     c.intopost(str,13);

//     cout << str;

    
// }


#include<iostream>
using namespace std;
#define max 100

struct convert
{
    private : 

    char data[max];
    int top;

    public :

    convert()
    {
        top=-1;
    }

    int presidence(char c)
    {
        if(c == '^')
        {
            return 3;
        }

        if(c == '*' || c == '/')
        {
            return 2;
        }

        if(c == '+' || c == '-')
        {
            return 1;
        }

        return -1;
    }


    void intopost(char arr[],int size)
    {
        int j = 0;
        char *result = new char[size];

        for(int i = 0 ; i < size ; i++)
        {
            char c = arr[i];

            if(isalnum(c))
            {
                result[j] = c;
                j++;
            }

            else if(c == '(')
            {
                top ++;
                data[top] = c;
            }

            else if(c == ')')
            {
                while(data[top] != '(')
                {
                    result[j] = data[top];
                    j++;
                    top --;
                }

                top --;
            }

            else
            {
                while(top != -1 && presidence(c) <= presidence(data[top]))
                {
                    result[j] = data[top];
                    top--;
                    j++;
                }

                top ++;
                data[top] = c;
            }
        }

        while(top != -1)
        {
            result[j] = data[top];
            top--;
            j++;
        }

        // for(int i = 0 ; i < size ; i ++)
        // {
        //     arr[i] = result[i];
        // }

        // cout << result;

        for(int i = 0 ; i < j ; i ++)
        {
            arr[i] = result[i];
        }

        arr[j] = '\0';

        delete[] result;
    }

};



int main()
{

    char str[] = "A^B-(C+D/E)*F";

    convert c;

    c.intopost(str,13);

    cout << str;
}