// Find Sum of elements both row and column wise.

#include <iostream>
using namespace std;

void sumRow(int arr[][3])
{   
    for(int i=0; i<3; i++)
    {
        int sum = 0;
        for(int j=0; j<3; j++)
        {
            sum += arr[i][j];
        }
        cout << "Sum of " << (i+1) << " row - " << sum << endl;
    }
}

void sumCol(int arr[][3])
{
    for(int j=0; j<3; j++)           // For column we just change i with j in the loops
    {
        int sum = 0;
        for(int i=0; i<3; i++)
        {
            sum += arr[i][j];
        }
        cout << "Sum of " << (j+1) << " column - " << sum << endl;
    }
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

    sumRow(arr);
    sumCol(arr);
}