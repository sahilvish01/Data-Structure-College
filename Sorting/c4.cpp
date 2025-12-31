// Insertion sort :

#include<iostream>
using namespace std;

int isort(int arr[], int size)
{
    for(int i = 1; i < size; i++)
    {
        if(arr[i] < arr[i-1])
        {
            int x = arr[i];
            int j = i-1;

            do 
            {
                arr[j+1] = arr[j];
                j--;
            }while(j>=0 && arr[j] > x);

            arr[j+1] = x;

        }
    }

    for(int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }  
}

int main()
{

    int arr[5] = {9,3,6,1,2};
    int size = sizeof(arr)/sizeof(int);

    isort(arr,size);
}