// PRACTICE BUBBLE SORT

#include<iostream>
using namespace std;


int bsort(int arr[],int size)
{

    int check = 1;

    for(int i = size -1; i > 0 && check == 1; i--)
    {
        check = 0;
        for(int j = 1 ; j <= i ; j++)
        {
            if(arr[j] < arr[j-1])
            {
                int t = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = t;

                // arr[j] = arr[j] + arr[j-1];
                // arr[j-1] = arr[j] - arr[j-1];
                // arr[j] = arr[j] - arr[j-1];

                // ^ Ye tarika bhi sahi hai but agar maximum size ke do integer ko swap karna ho to integer se badi value ho jayegi jiski vajah se garbage value bhi aa jayegi

                check = 1;
            }
        }
    }

    for(int i = 0; i<size;i++)
    {
        cout << arr[i] << " ";
    }

}





int main()
{
    int arr[5] = {4,2,5,3,8};
    int size = sizeof(arr)/sizeof(int);

    
    int a = bsort(arr,size);

    // cout << a;
}