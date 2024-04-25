// Given an matrix, return all elements of the matrix in spiral order.

#include <iostream>
#include <vector>
using namespace std;


vector<int> spiralPrint(vector<vector<int>> vec)
{
    vector<int> ans;

    int row = vec.size();
    int col = vec[0].size();
    int count = 0;
    int total = row * col;

    // index initialization
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;

    while (count < total)
    {
        // printing starting row
        for (int i = startingCol; count < total && i <= endingCol; i++)
        {
            ans.push_back(vec[startingRow][i]);
            count++;
        }
        startingRow++;

        // printing ending row
        for (int i = startingRow; count < total && i <= endingRow; i++)
        {
            ans.push_back(vec[i][endingCol]);
            count++;
        }
        endingCol--;

        // printing ending column
        for (int i = endingCol; count < total && i >= startingCol; i--)
        {
            ans.push_back(vec[endingRow][i]);
            count++;
        }
        endingRow--;

        // printing starting column
        for (int i = endingRow; count < total && i >= startingRow; i--)
        {
            ans.push_back(vec[i][startingCol]);
            count++;
        }
        startingCol++;
    }

    return ans;
}


int main()
{
    vector<vector<int>> arr = {{1,2,3},{4,5,6},{7,8,9}};
    vector<int> ans;

    ans = spiralPrint(arr);
    for(const auto& element: ans)
    {
        cout << element << " ";
    }
}