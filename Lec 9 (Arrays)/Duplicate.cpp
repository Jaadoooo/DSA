// You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once. There is a single integer 
// value that is present in the array twice. Your task is to find the duplicate integer value present in the array.

// Consider ARR = [1, 2, 3, 4, 4], the duplicate integer value present in the array is 4. Hence, the answer is 4 in this case.


#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {1,2,3,4,5,6,6};
    int ans = 0;

    for(int i=0; i<7; i++)          // XOR all elements of array
    {
        ans = ans^arr[i];
    }

    for(int i=0; i<7; i++)          // XOR from [1,N-1] elements of array 
    {
        ans = ans^i;
    }

    cout << "Duplicate element - " << ans;
}