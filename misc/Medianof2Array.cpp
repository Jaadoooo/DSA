#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Solution 
{
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> temp; 
        for (int element : nums1) 
        {
            temp.push_back(element);
        }
        for (int element : nums2) 
        {
            temp.push_back(element);
        }
        
        std::sort(temp.begin(), temp.end());
        int x = temp.size();
        if(x%2 == 0)
        {
            float a =  temp[(x/2)-1];
            float b =  temp[(x/2)];
            float median = (a+b)/2;
            return median;
        }
        else
        {
            int median = (x)/2;
            return temp[median];
        }
        
    }
};

int main() 
{
    vector<int> nums1 = {1,3};
    vector<int> nums2 = {2};
    Solution solution;
    solution.findMedianSortedArrays(nums1, nums2);

}
