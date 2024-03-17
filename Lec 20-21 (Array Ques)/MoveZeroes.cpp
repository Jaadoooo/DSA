// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
// Note that you must do this in-place without making a copy of the array.


// Mera Answer

/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

template<typename T>
void removeElement(vector<T>& vec, const T& value) 
{
    vec.erase(remove(vec.begin(), vec.end(), value), vec.end());
}

vector<int> moveZeroes(vector<int>& nums) 
    {
        int valueToRemove = 0;
        int count = 0;

        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==0)
            {
                count++;
            }
        }
        removeElement(nums, valueToRemove);
        for(int i=0; i<count; i++)
        {
            nums.push_back(0);
        }
       return nums;
    }


int main()
{   
    vector<int> nums = {2,0,3,4,0};
    vector<int> ans = moveZeroes(nums);

    for(const auto& element:ans)
    {
        cout << element << " ";
    }
}

*/




// Love Babbar ka Answer

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> moveZeroes(vector<int>& nums) 
{
    int i = 0;
    for(int j=0; j<nums.size(); j++)
    {
        if(nums[j]!=0)
        {
            swap(nums[j],nums[i]);
            i++;
        }
    }
    return nums;
}


int main()
{   
    vector<int> nums = {2,0,3,4,0};
    vector<int> ans = moveZeroes(nums);

    for(const auto& element:ans)
    {
        cout << element << " ";
    }
}