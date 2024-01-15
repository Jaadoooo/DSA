#include<iostream>
#include<math.h>
using namespace std;

class Solution 
{
public:
    bool isPowerOfTwo(int n) 
    {
        for(int i=0; i<=n; i++)
        {
            if(pow(2,i)==n)
            {
                return true;
                break;
            }
            else
            {   
                return false;
                continue;
            }
        }
    }
};

int main()
{
    int x;
    cout << "Enter a integer to check if it is power of 2 - ";
    cin >> x;
    Solution solution;
    solution.isPowerOfTwo(x);
}