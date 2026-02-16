// 2D ARRAY :

#include<iostream>
using namespace std;



int main()
{
    int a[3][3];

    cout << "Enter the element of the 3x3 array : " << endl;

    for(int i = 0; i < 3; i++ )
    {
        for(int j = 0; j < 3 ; j++)
        {
            cin >> a[i][j];
        }

        cout << endl;
    }


    cout << "The Transpose of the matrix : " << endl;


    for(int i = 0; i < 3; i++ )
    {
        // for(int j = 0; j < 3 ; j++)
        // {
        //     if(i == j)
        //     {
        //         cout << " " << a[i][j];
        //     }
        // }

        cout << " " << a[i][i];
    }

    

    cout << endl << "The inverse of matrix : " << endl;

    for(int i = 0; i < 3; i++ )
    {
        for(int j = 0; j < 3 ; j++)
        {
            cout << " " << a[j][i];
        }

        cout << endl;
    }



}