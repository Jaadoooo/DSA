// Find the complement of the given integer
// My method works fine for smaller integers but when multiplied with pow(2,i) the int would go out of range for some cases 

/*
#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

class Solution 
{
public:
    int bitwiseComplement(int n) 
    {

        if(n==0)
        {
            cout <<"Reversed = " << 1;
            return 1;
        }
        else
        {
            int bin = 0;
            int i = 0;
            vector<int> vec = { };

            while(n!=0)
            {
                int bit = n&1;
                bin = (bit * pow(10,i)) + bin;          // Here int goes out of range hence LeetCode ke GF ho jaati hai
                n = n >> 1;
                i++;
            }

            while(bin!=0)
            {
                int digit = bin%10;
                if(digit==0)
                {
                    digit = 1;
                    bin = bin/10;
                    vec.push_back(digit);
                }
                else
                {
                    digit = 0;
                    bin = bin/10;
                    vec.push_back(digit);
                }
            }
            
            int dec = 0;
            for(int i=0; i<vec.size(); i++)
            {
                if(vec[i]==1)
                {
                    dec = dec + pow(2,i);
                }
            }
            cout <<"Reversed = " << dec;
            return dec;
        }
    }
};


int main()
{
    int x;
    cout << "Enter a integer - ";
    cin >> x;
    Solution solution;
    solution.bitwiseComplement(x);

}
*/





// Yeh approach joh mughe thoda thoda samgh aaya hai, koi out of the box kaise he kar sakta hai aesa question idk
#include<iostream>
using namespace std;

class Solution 
{
public:
    int bitwiseComplement(int n) 
    {
        int m = n;
        int mask = 0;
        
        if(n==0)
        {
            cout << "Reversed = " << 1;
            return 1;
        }

        while(m!=0)
        {
            mask = (mask << 1) | 1;
            m = m >> 1;
        }
        int rev = (~n) & mask;
        cout << "Reversed = " << rev;
        return rev;

    }
};


int main()
{
    int x;
    cout << "Enter a integer - ";
    cin >> x;
    Solution solution;
    solution.bitwiseComplement(x);
}