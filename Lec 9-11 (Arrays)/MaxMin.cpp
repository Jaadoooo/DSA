#include <iostream>
using namespace std;

int main()
{   
    int n;
    cout << "Enter size - ";
    cin >> n;
    int arr[100];


    cout << "Enter " << n << " elements into Array - ";
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    
    int max = arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    int min = arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }

    cout << "Min element of Array - " << min << endl;
    cout << "Max element of Array - " << max;
}