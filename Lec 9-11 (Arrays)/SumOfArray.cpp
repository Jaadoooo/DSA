#include<iostream>
using namespace std;

int main()
{   system("cls");
    int n;
    int arr[100];
    cout << "Enter the size of array - ";
    cin >> n;
    cout << "Enter " << n << " elements - ";
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }
    cout << "Sum of elements = " << sum;
}