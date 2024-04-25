// You are given an m x n integer matrix matrix with the following two properties:

// Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the previous row.
// Given an integer target, return true if target is in matrix or false otherwise.


#include <iostream>
#include <vector>
using namespace std;


int search(vector<vector<int>> arr, int target)
{
    int row = arr.size();
    int col = arr[0].size();

    int s = 0;
    int e = row*col - 1;

    int mid = s + (e-s)/2;

    while(s<=e)
    {
        int element = arr[mid/col][mid%col];

        if(element==target)
        {
            return 1;
        }
        if(element<target)
        {
            s = mid+1;
        }
        else
        {
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return 0;
}


int main()
{
    vector<vector<int>> arr = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 34;

    int ans = search(arr,target);
    if(ans)
    {
        cout << "Element found";
    }
    else
    {
        cout << "Element not found";
    }

    return 0;
}