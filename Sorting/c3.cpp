// Selection sort : part 2 (Not catching the logic)

#include<iostream>
using namespace std;

int ssort(int arr[],int size)
{
    for(int i = 0; i < size -1; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if(arr[i] > arr[j])
            {
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
}

int main()
{
    int arr[5] = {15,10,16,18,20};

    int size = sizeof(arr)/sizeof(int);

    ssort(arr,size);
}