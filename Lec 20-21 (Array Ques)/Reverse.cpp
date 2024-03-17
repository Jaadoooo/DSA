// Given an array 'arr' of integers and a position You have to reverse the array after that position (m).
#include <iostream>
#include <vector>

using namespace std;

vector<int> reverseArray(vector<int> arr, int n, int m)
{
    int s = m+1;
    int e = n-1;

    while(s<=e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    return arr;
}
    
int main()
{
    vector <int> arr = {1,2,3,4,5,6,7};
    int n = arr.size();
    int m = 2;
    vector<int> ans = reverseArray(arr,n,m);
    
    for(const auto& element:ans)
    {
        cout << element << " ";
    }
}
