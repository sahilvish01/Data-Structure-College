// WAP TO INSERT THE DATA IN THE ARRAY

#include<iostream>
using namespace std;

void update(int ind, int val ,int arr[])
{

    arr[ind] = val;
    
}

int main()
{
    int a[5];

    int ind,val;
    int* BA = &a[0];

    cout << "Enter the index value to insert value : ";
    cin >> ind;

    if(ind<sizeof(a)/sizeof(int))
    {
        cout << endl << "Insert the value : ";
        cin >> val;
        a[ind] = val;

        
        cout << val << " is inserted" << endl;
        cout << "Address : " << (unsigned)(BA + (ind*sizeof(int))); 
    }
    else
    {
        cout << endl << "Index value does not exist, size of array is 5" <<endl;
    }

    cout << endl;

    cout << "Enter all elements : " << endl;
    for(int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    for(int i = 0; i < 5; i++)
    {
        cout << " " << a[i];
    }

    cout << endl;

    update(0,100,a);

    for(int i = 0; i < 5; i++)
    {
        cout << " " << a[i];
    }
}