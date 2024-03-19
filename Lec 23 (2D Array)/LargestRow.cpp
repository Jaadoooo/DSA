// Find Sum of elements both row and column wise.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void largestRow(int arr[][3])
{   
    vector<int> vec;
    for(int i=0; i<3; i++)
    {   
        int sum = 0;
        for(int j=0; j<3; j++)
        {
            sum += arr[i][j];
        }
        vec.push_back(sum);
    }
    int ans = *max_element(vec.begin(),vec.end());
    cout << "The largest row sum is - " << ans << endl;
}

void largestCol(int arr[][3])
{
    vector<int> vec;
    for(int j=0; j<3; j++)           // For column we just change i with j in the loops
    {
        int sum = 0;
        for(int i=0; i<3; i++)
        {
            sum += arr[i][j];
        }
        vec.push_back(sum);
    }
    int ans = *max_element(vec.begin(),vec.end());
    cout << "The largest column sum is - " << ans << endl;
}

int main()
{
    int arr[3][3];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin >> arr[i][j];
        }
    }

    largestRow(arr);
    largestCol(arr);
}