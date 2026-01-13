#include<iostream>
using namespace std;

void merge(int a[], int low, int mid, int high)
{
    int i = low;
    int j = mid +1;

    int b[high-low+1];
    int k = 0;

    while(i <= mid && j <=high)
    {
        if(a[i] <= a[j]) 
        {
            b[k] = a[i];
            i++;
            k++;
        }
        else
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }

    if(i>mid)
    {
        while(j<=high)
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }
    else
    {
        while(i<=mid)
        {
            b[k] = a[i];
            i++;
            k++;
        }
    }

    for(i=low,j=0;i<=high;i++,j++)
    {
        a[i] = b[j];
    }

}

void mergesort(int arr[],int l,int h)
{
    if(l<h)
    {
        int mid = (l+h)/2;

        mergesort(arr,l,mid);
        mergesort(arr,mid+1,h);

        merge(arr,l,mid,h);
    }
}

int main()
{
    int arr[6] = {4,3,6,2,1,5};

    int size = sizeof(arr) / sizeof(int);

    mergesort(arr,0,size-1);

    for(int i = 0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
}