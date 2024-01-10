
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>

using namespace std;



class Solution 
{
public:
 

    
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        int i = 0;
        int j = 1;
        int k = 2;
        vector<vector<int>> result = { };
        for(int a=0; a<nums.size()-2; a++)
        {
            if(nums[i]+nums[j]+nums[k] == 0)
            {   
                vector<int> chit = {nums[i],nums[j],nums[k]};
                result.push_back(chit);
                j++;
                k++;
            }
            else
            {
                j++;
                k++;
            }
        }
        cout << "[";
        for (size_t i = 0; i < result.size(); ++i) 
        {
            cout << "[";
            for (size_t j = 0; j < result[i].size(); ++j) 
            {
                cout << result[i][j];
                if (j < result[i].size() - 1) 
                {
                    cout << ", ";
                }
            }
            cout << "]";
            if (i < result.size() - 1) 
            {
                cout << ", ";
            }
        }
        cout << "]" << endl;
        return result;
    }
};


int main() 
{   
   vector<int> nums = {0,0,0};
   Solution solution;
   vector<vector<int>> result = solution.threeSum(nums);
}
