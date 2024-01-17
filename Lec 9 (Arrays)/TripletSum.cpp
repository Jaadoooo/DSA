// You are given an array/list ARR consisting of N integers. Your task is to find all the distinct triplets present in the 
// array which adds up to a given number K.

// An array is said to have a triplet {ARR[i], ARR[j], ARR[k]} with sum = 'K' if there exists three indices i, j and k 
// such that i!=j, j!=k and i!=j and ARR[i] + ARR[j] + ARR[k] = 'K'.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};
    int s = 12;
    vector<vector<int>> ans;

    for(int i=0; i<5; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            for(int k=0; k<5; k++)
            {
                if(arr[i] + arr[j] + arr[k]== s && i!=j && j!=k && i!=j)
                {
                    vector<int> temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);
                    sort(temp.begin(), temp.end());
                    ans.push_back(temp);
                }
            } 
        }
    }

    sort(ans.begin(), ans.end());
    
    auto uniqueEnd = unique(ans.begin(), ans.end());
    ans.erase(uniqueEnd, ans.end());


    for(const auto& row: ans) 
    {
        for(const auto& element: row) 
        {
            cout << element << " ";
        }
        cout << endl;
    }
}