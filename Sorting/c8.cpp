//PRACTICE INSERTION SORT

#include<iostream>
using namespace std;

void insort(int arr[],int size)
{
    for(int i = 1,j; i < size; i++)
    {
        int x = arr[i];
        for(j = i - 1; j >=0; j--)
        {

            if(x < arr[j])
            {
               arr[j+1] = arr[j]; 
            }
            else
            {
                
                break;
            }

        }

        arr[j+1] = x;     
    }

    // return arr;
}


int main()
{
    int arr[5] = {4,2,3,5,8};
    int size = sizeof(arr)/sizeof(int);

    insort(arr,size);

    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}