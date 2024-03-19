// For a given two-dimensional integer array/list ‘ARR’ of size (N x M), print the ‘ARR’ in a sine wave order, i.e.,
// print the first column top to bottom, next column bottom to top, and so on.
// For eg:- The sine wave for the matrix:- 1 2
//                                         3 4
// will be [1, 3, 4, 2]


#include <iostream>
using namespace std;

int main()
{
    // Input
    // int arr[3][3];
    // for(int i=0; i<3; i++)
    // {
    //     for(int j=0; j<3; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }

    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    cout << "[";
    // Printing like a Sine wave
    for(int i=0; i<3; i++)
    {
        if(i&1)
        {
            // Odd Index - Bottom to Top
            for(int j=2; j>=0; j--)
            {
                cout << arr[j][i] << ",";
            }
        }
        else
        {
            // Even Index - Top to Bottom
            for(int j=0; j<3; j++)
            {
                cout << arr[j][i] << ",";
            }
        }
    }
    cout << "]";

}