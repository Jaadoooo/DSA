// The given integer will be reversed with a catch that int ka range should not exceed(if it does then return 0)

#include<iostream>
using namespace std;

class Solution 
{
    public:
    int reverse(int x) 
    {
        int rev = 0;

        while(x!=0)
        {
            if ((rev > INT_MAX/10) || (rev < INT_MIN/10))
            {
                return 0;
            }
            
            int digit = x%10;
            rev = (rev*10) + digit;
            x = x/10;
        } 
        cout << "Reverse = " << rev;
        return 0;
    }   
   
};

int main()
{
    int x;
    cout << "Enter a integer - ";
    cin >> x;
    Solution solution;
    solution.reverse(x);

}