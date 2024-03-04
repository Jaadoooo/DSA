// You have been given a sorted array/list 'arr' consisting of ‘n’ elements. You are also given an integer ‘k’.
// Now, your task is to find the first and last occurrence of ‘k’ in 'arr'. 1. If ‘k’ is not present in the array, 
// then the first and the last occurrence will be -1. 


// My approach, using Linear Search O(n)


/*
#include <iostream>
#include <vector>
using namespace std;

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int, int> result = {-1, -1}; 

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == k)
        {
            result.first = i;
            break; // Stop the loop after finding the first occurrence
        }
    }

    for(int i = n - 1; i >= 0; i--) // Start from n-1
    {
        if(arr[i] == k)
        {
            result.second = i;
            break; // Stop the loop after finding the last occurrence
        }
    }
    return result;
}

int main()
{
    vector<int> arr = {0,1,1,5};
    int n = 5;                      // Size of Vector
    int key = 1;                    // Element to search for 


    pair<int,int> p = firstAndLastPosition(arr,n,key);
    cout << p.first << " " << p.second << endl;
}
*/






// Optimized approach, using Binary Search O(log n)

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
    int arr[5] = {0,1,1,2,2};
    int k = 2; // key
    int n = 5; // size of array

    int a = firstOcc(arr, n, k);
    int b = lastOcc(arr, n, k) -1;

    cout << a << " " << b;
    return 0;
}

