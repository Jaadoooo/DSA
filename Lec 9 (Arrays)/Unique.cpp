// In an array there are n elements where n = 2m+1. 'M' numbers are present twice and one number is present 
// only once. Print that unique number.


#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int n;
    cout << "Enter odd size of array - ";
    cin >> n;
    if(n%2==0)
    {
        cout << "Size should be odd";
        exit(EXIT_FAILURE);
    }
    else
    {
        cout << "Enter " << n << " elements - ";
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
    }

    int key;
    arr[i] == key;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[j]==key)
            {
                cout << "same element";
            }
            else
            {
                cout << "Unique number found - " << key;
                break;
            }
        }
    }


}