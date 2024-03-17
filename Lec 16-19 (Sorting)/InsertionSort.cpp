#include <iostream>
using namespace std;


void insertionSort(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        int temp = arr[i];
        int j = i-1;
        for(j; j>=0; j--)
        {
            if(arr[j] > temp)
            {
                arr[j+1] = arr[j];
            }
            else
            {
                break;
            }
        }

        arr[j+1] = temp;
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
    insertionSort(arr,n);
}