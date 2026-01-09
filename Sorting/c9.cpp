#include<iostream>
using namespace std;

void shellsort(int arr[], int size)
{
                                                //  
    for(int k = size/2 ; k > 0 ; k= k/2)
    {
        for(int i = k ; i < size ; i++ )
        {
            int j = i - k;
            int x = arr[i];
            for(; j >= 0; j-=k)
            {
                if(arr[j] > x)
                {
                    arr[j+k] = arr[j];
                }
                else
                {
                    break;
                }
            }
            arr[j+k] = x;
        }
    }
}
int main()
{

    int arr[8] = {4, 6, 2, 9, 3, 7, 5, 8};
    
    int size = sizeof(arr) / sizeof(int);
    shellsort(arr,size);

    for(int i = 0 ; i < size ; i++)
    {
        cout << arr[i] << " ";
    }

}