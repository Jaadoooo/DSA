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

    int rowIndex = 0;
    int colIndex = col-1;

    

    while(rowIndex < row && colIndex >=0)
    {
        int element = arr[rowIndex][colIndex];

        if(element==target)
        {
            return 1;
        }
        if(element<target)
        {
            rowIndex++;
        }
        else
        {
            colIndex--;
        }
    }
    return 0;
}


int main()
{
    vector<vector<int>> arr = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    int target = 502;

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