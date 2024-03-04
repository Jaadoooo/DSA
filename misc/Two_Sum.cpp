/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order. */


#include <vector>
#include <unordered_map>
#include <iostream>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) 
    {
        for(int i=0; i<nums.size(); i++)
        {
            for(int j=0; j<nums.size(); j++)
            {
                int sum = nums[j] + nums[i];
                if(sum==target && j!=i)
                {   
                    std::vector<int> res = {j,i};
                    return res;        
                }
            }
        }
        return {};
    }
};

int main() 
{
    std::vector<int> nums = {2,7,11,15};
    Solution sol;
    std::vector<int> result = sol.twoSum(nums, 9);
    std::cout << "Output: " << std::endl;
    for (const auto& element : result) 
    {
        std::cout << element << " ";
    } 
    return 0;
}
