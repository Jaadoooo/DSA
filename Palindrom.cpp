// Given an integer x, return true if x is a palindrome, and false otherwise.


#include <iostream>
#include <string>
using namespace std;

class Solution 
{
    public:
        bool isPalindrome(int x) 
        {
            string xcopy = to_string(x);
            string str = to_string(x);
            int n = str.length();
            for (int i = 0; i < n / 2; i++)
                {
                    swap(str[i], str[n - i - 1]);            
                }
            if(str==xcopy)
            {
                cout << "Yes it is a Palindrome";
                return true;
            }
            else
            {
                cout << "No its not a Palindrome";
                return false;
            }  
        }        
};


int main() 
{
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    Solution solution;
    solution.isPalindrome(num);
    return 0;
}
