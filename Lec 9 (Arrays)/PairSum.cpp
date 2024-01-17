// You are given an integer array 'ARR' of size 'N' and an integer 'S'. Your task is to return the list of all pairs of  
// elements such that each sum of elements of each pair equals 'S'.


// Each pair should be sorted i.e the first value should be less than or equals to the second value. 

// Return the list of pairs sorted in non-decreasing order of their first value. In case if two pairs have the same first 
// value, the pair with a smaller second value should come first.


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int arr[7] = {1,3,4,-2,9,0,7};
    int s = 7;
    vector<vector<int>> ans;

    for(int i=0; i<7; i++)
    {
        for(int j=i+1; j<7; j++)
        {
            if(arr[i] + arr[j] == s)
            {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
    
    for(const auto& row: ans) 
    {
        for(const auto& element: row) 
        {
            cout << element << " ";
        }
        cout << endl;
    }
}