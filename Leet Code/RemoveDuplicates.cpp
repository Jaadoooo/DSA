#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

class Solution
{
    public:
    int removeDuplicates(vector<int>& nums) 
    {
        
       if (nums.empty()) 
       {
            return 0;
        }

        int uniqueCount = 1; 
        int i = 1; 

        for (int j = 1; j < nums.size(); j++) {
           
            if (nums[j] != nums[j - 1]) 
            {
                nums[i] = nums[j];
                uniqueCount++;
                i++;
            }
        }
        cout << uniqueCount << endl;
        return uniqueCount;
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {1,1,2,3,4,5,5};
    solution.removeDuplicates(nums);

}