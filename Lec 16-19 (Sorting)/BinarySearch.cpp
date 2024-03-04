#include <iostream>
using namespace std;


int binary(int arr[], int size, int key)
{
    int start = 0;
    int end = size-1;

    int mid = (start + end)/2;

    

    while(start<=end)
    {
        mid = (start + end)/2;

        if(arr[mid]==key)
        {
            cout << "Element Found at index "<< mid;
            return true;
        }
        if(key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << "Element not found";
    return false;
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

    int key;
    cout << "Enter the key to search - ";
    cin >> key;

    binary(arr,n,key);

}