#include<iostream>
using namespace std;

int partition(int arr[],int lower,int last)
{
    int pivot = lower;
    int temp = lower + 1;

    while(temp<=last)
    {
        if(arr[temp]<arr[pivot])
        {
            lower ++;
            int t = arr[lower];
            arr[lower] = arr[temp];
            arr[temp] = t;
        }
        temp++;
    }

    int t = arr[pivot];
    arr[pivot] = arr[lower];
    arr[lower] = t;
    
    pivot = lower;

    return pivot;

}

void qsort(int arr[], int first, int last)
{
    if(first < last)
    {
        int mid = partition(arr,first, last);

        qsort(arr,first,mid-1);
        qsort(arr,mid+1,last);
    }
}

int main()
{
    int arr[8] = {4,6,2,9,3,7,5,8};

    int size = sizeof(arr) / sizeof(int);

    qsort(arr,0,size-1);

    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }


}