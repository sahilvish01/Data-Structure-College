// Selection sort : (Selection first , Swapping second)

#include<iostream>
using namespace std;

int ssort(int arr[], int size)
{
    for(int i = size -1; i > 0; i --)
    {
        int index = 0;
        int large = arr[index];
        for(int j = 1; j <= i; j++)
        {
            if(arr[index] < arr[j])
            {
                index = j;
                large = arr[index];
            }

                // int t = arr[index];
                // arr[index] = arr[i];
                // arr[i] = t;
            
        }

        arr[index] = arr[i];
        arr[i] = large;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
}

int main()
{
    int arr[5]={3,7,1,3,5};

    int size = sizeof(arr) / sizeof(int);

    ssort(arr,size);
}