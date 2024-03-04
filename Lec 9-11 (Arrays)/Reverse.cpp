#include<iostream>
using namespace std;

int main()
{   
    int n;
    int arr[100];
    cout << "Enter the size of array - ";
    cin >> n;
    cout << "Enter " << n << " elements - ";
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    for(int i=0; i<n/2; i++)
    {   
        swap(arr[i],arr[n-1-i]);
    }

    cout << "Reversed array - ";
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}