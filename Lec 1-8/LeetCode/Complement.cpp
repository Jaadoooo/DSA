// Find the complement of the given integer

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
            cout << 1;
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
                bin = (bit * pow(10,i)) + bin;
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
