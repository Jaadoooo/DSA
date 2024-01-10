#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>

using namespace std;

class Solution 
{
public:
    int maxArea(vector<int>& height) 
    {
        int max_area = 0;
        int l = 0;
        int r = height.size() - 1;
        while(l<r)
        {
            int area = (r - l) * min(height[r], height[l]);
            max_area = max(max_area, area);
            if (height[l]<height[r])
            {
                l = l+1;
            }
            else
            {
                r=r-1;
            }
        }
        return max_area;
    }
};





int main() 
{   
   vector<int> height = {1,1};
   Solution solution;
   int result = solution.maxArea(height);
   cout << "Area = " << result << endl; 
}
