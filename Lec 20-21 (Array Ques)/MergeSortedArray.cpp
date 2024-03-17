/*
You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


vector<int> merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
{
    for (int j = 0, i = m; j<n; j++)
    {
        nums1[i] = nums2[j];
        i++;
    }
    
    sort(nums1.begin(),nums1.end());
    return nums1;
}
    
int main()
{   
    vector<int> nums1 = {3,5,9,0,0,0};
    int n = 3;
    int m = 3;
    vector<int> nums2 = {2,8,10};

    vector<int> ans = merge(nums1,m,nums2,n);
    for(const auto& element:ans)
    {
        cout << element << " ";
    }
}