#include <iostream>
using namespace std;


void bubbleSort(int arr[], int n)
{
    for(int i=1; i<n-1; i++)
    {
        for(int j=0; j<n-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
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
    bubbleSort(arr,n);
}