#include<iostream>
using namespace std;

int shellsort(int arr[],int size)
{
    for(int k = size / 2; k>0 ;k=k/2)
    {
        for(int i = k;i < size;i++)
        {
            if(arr[i] < arr[i-k])
            {
                int x = arr[i];
                int j = arr[i-k];
                do
                {
                    arr[j + k] = arr[j];
                    j = j - k;
                }while(j >= 0 && arr[j] > x);

                arr[j+k] = x;
            }
        }
    }

    for(int i = 0; i < size ; i++)
    {
        cout << " " << arr[i];
    }
}

int main()
{

    int arr[5] = {8,6,2,7,1};
    int size = sizeof(arr)/sizeof(int);

    shellsort(arr,size);
}