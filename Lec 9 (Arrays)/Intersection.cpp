// You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively. Both these arrays are sorted in non-decreasing order. 
// You have to find the intersection of these two arrays.



// 1st method

/*
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr1[3] = {1,2,3};
    int arr2[5] = {1,2,6,7,9};

    vector<int> ans;

    for(int i=0; i<3; i++)
    {
        int element = arr1[i];
        for(int j=0; j<5; j++)
        {
            if(element==arr2[j])
            {
                ans.push_back(element);
                arr2[j] = -1;
                break;
            }
        }
    }
    cout << "Intersection of 2 arrays - ";
    for(const auto& element: ans)
    {
        cout << element << " ";
    }
}
*/



// 2nd method (Optimized)

#include <iostream>
#include <vector>
using namespace std;


int main()
{
    int arr1[8] = {1,2,3,6,12,34,47,62};
    int arr2[10] = {1,2,6,7,9,10,55,59,61,62};

    vector<int> ans;
    int i,j = 0;

    while(i<8 && j<10)
    {
        if(arr1[i]==arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    
    cout << "Intersection of 2 arrays - ";
    for(const auto& element: ans)
    {
        cout << element << " ";
    }
}

