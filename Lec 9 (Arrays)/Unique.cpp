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
    
    // XOR operation
    int x = 0;
    for(int i=0; i<n; i++)
    {
        x = x^arr[i];
    }

    cout << "Unique element - " << x;

}