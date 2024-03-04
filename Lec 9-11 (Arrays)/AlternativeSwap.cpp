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



    if(n%2==0)
    {
        for(int i=0; i<n; i+=2)
        {   
            swap(arr[i],arr[i+1]);
        }
    }
    else
    {
        for(int i=0; i<n-1; i+=2)
        {   
            swap(arr[i],arr[i+1]);
        }
    }
    

    cout << "Reversed array - ";
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}