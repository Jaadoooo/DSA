/*

// How to take input and output into a 2D Array.

#include <iostream>
using namespace std;

int main()
{   
    // Input
    int arr[3][3];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin >> arr[i][j];
        }
    }
    // Output
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;



    // Hardcoding the input
    int arr2[3][2] = {1,2,3,4,5,6};
    // Output
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<2; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// You can manipulate the values of i and j accordingly to print columns or rows first

*/
// Searching an element

#include <iostream>
using namespace std;

bool element(int arr[][3], int key)
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(arr[i][j]==key)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{

    int arr[3][3];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin >> arr[i][j];
        }
    }

    int key;
    cout << "Enter the element to find - ";
    cin >> key;

    if(element(arr,key))
    {
        cout << "Found";
    }
    else
    {
        cout << "Not Found";
    }
}