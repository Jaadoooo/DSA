#include <iostream>
#include <vector>

using namespace std;

int firstOcc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int ans = -1; // Stores the value of mid

    while (s <= e)
    {
        int mid = s + (e - s)/2;
        if(arr[mid]>=key)
        {
           ans = mid;
           e = mid-1;
        }
        else
        {
            s = mid+1;
        }
    }
    return ans;
}

int lastOcc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int ans = n; // Stores the value of mid

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] > key)
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int arr[8] = {0,0,1,1,2,2,2,2};
    int k = 2; // key
    int n = 8; // size of array

    int a = firstOcc(arr, n, k);
    int b = lastOcc(arr, n, k) -1;

    int occur = b-a+1;
    cout << "Total no. of Occurence - " << occur;
    
    return 0;
}

