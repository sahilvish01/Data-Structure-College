// PRACTICE SELECTION SORT

#include<iostream>
using namespace std;

int* ssort(int arr[],int size)
{
    
    
    for(int i = size - 1; i > 0; i--)
    {
        int max = arr[0];
        int index = 0;

        for(int j = 1; j<=i; j++)
        {
            if(max < arr[j])
            {
                max = arr[j];
                index = j;
            }
            
        }

        int t = arr[index];
        arr[index] = arr[i];
        arr[i] = t;
    }

    return arr;
}





int main()
{
    int arr[5] = {4,2,5,3,8};
    int size = sizeof(arr)/sizeof(int);

    
    ssort(arr,size);

    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " " ;
    }

    // cout << a;
}