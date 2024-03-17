// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// This doesn't produce TLE somehow

vector<int> rotate(vector<int> nums, int k)
{
    vector<int> temp(nums.size());

    for(int i=0; i<nums.size(); i++)
    {
        temp[(i+k)%nums.size()] = nums[i];
    }
    nums = temp;
    return nums;
}

// My code gives TLE somehow :)

// vector<int> rotate(vector<int>& arr, int k) 
// {
//     for(int i=0; i<k; i++)
//     {
//         int temp = arr.back();
//         arr.pop_back();
//         arr.insert(arr.begin(),temp);
//     }
//     return arr;    
// }



int main()
{   
    vector<int> arr = {1,2,3,4,5,6,7};
    int k = 3;
    vector<int> ans = rotate(arr,k);

    for(const auto& element:ans)
    {
        cout << element << " ";
    }
}