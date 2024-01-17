// Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice,
// return an array of all the integers that appears twice.

#include <iostream>
#include <vector>

using namespace std;

vector<int> findDuplicates(vector<int>& nums) 
{
    vector<int> result;

    for (int i = 0; i < nums.size(); i++) 
    {
        int index = abs(nums[i]) - 1;
        if (nums[index] > 0) 
        {
            nums[index] = -nums[index];
        } 
        else 
        {
            result.push_back(index + 1);
        }
    }

    return result;
}

int main() 
{
    vector<int> nums = {4, 3, 2, 7, 8, 2, 1, 1};
    vector<int> duplicates = findDuplicates(nums);

    cout << "Duplicates: ";
    for (int num : duplicates) 
    {
        cout << num << " ";
    }
    cout << endl;
}
