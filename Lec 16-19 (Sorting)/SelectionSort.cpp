#include <iostream>
using namespace std;


void selectionSort(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        int minIndex = i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }

    cout << "Sorted Array - ";
    for(int a=0; a<n; a++)
    {
        cout << arr[a]  << " ";
    }    
}


int main()
{
    int n;
    int arr[100];
    cout << "Enter the size of Array - ";
    cin >> n;

    cout << "Enter data into Array - ";
    
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    selectionSort(arr,n);
}