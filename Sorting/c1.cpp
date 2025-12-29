// Bubble Sort : 

#include<iostream>
using namespace std;

int bsort(int arr[],int size)
{
    
    for(int i = size - 1,check = 1; i >= 0 && check == 1; i--)
    {
        check = 0;
        cout << "Pass : " << size-i <<endl;

        for(int j = 0; j < i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                check = 1;
                int t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }

    for(int i = 0; i < size; i ++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    // int arr[10] = {100,29,17,15,12,10,9,7,4,1};

    int arr[6] = {1,2,3,4,5,6};

    int size = sizeof(arr)/sizeof(int);

    bsort(arr,size);

}