// LeetCode 1207
// No. of elements should be unique

#include <iostream>
using namespace std;

bool areOccurrencesUnique(int arr[], int size) 
{
    int occurrences[1000] = {0};
    bool uniqueCounts[1000] = {false};

    for (int i = 0; i < size; i++) 
    {
        occurrences[arr[i]]++;
    }

    for (int i = 0; i < 1000; i++) 
    {
        if (occurrences[i] > 0) 
        {
            if (uniqueCounts[occurrences[i]]) 
            {
                return false;
            }
            uniqueCounts[occurrences[i]] = true;
        }
    }

    return true;
}


int main() 
{
    const int size = 7;
    int arr[size] = {1,2,2,1,1,3,2};

    if (areOccurrencesUnique(arr, size)) 
    {
        cout << "The occurrences are unique." << endl;
    } 
    else 
    {
        cout << "Not unique." << endl;
    }
}
