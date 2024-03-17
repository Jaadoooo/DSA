// You are given two numbers 'A' and 'B' in the form of two arrays (A[] and B[]) of lengths 'N' and 'M' respectively, where each array element represents a digit. You need to find the sum of these two numbers and return this sum in the form of an array.

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> sum(vector<int> arr1, vector<int> arr2, int n, int m)
{
    int num1 = 0;
    for(int i=0; i<n; i++)
    {
        num1 = num1*10 + arr1[i];       
    }
    
    int num2 = 0;
    for(int i=0; i<m; i++)
    {
        num2 = num2*10 + arr2[i];
    }
    
    int sum = num1+num2;
    vector<int> ans;
    
    while(sum!=0)
    {
        int a = sum%10;
        ans.insert(ans.begin(),a);
        sum = sum/10;
    }
    
    return ans;
}

int main()
{
    vector<int> arr1 = {1,3,5};
    vector<int> arr2 = {4,5};
    

    vector<int> ans = sum(arr1,arr2,3,2);
    for(const auto& element:ans)
    {
        cout << element << " ";
    }
}