// Given a non-negative integer x, return the square root of x rounded down to the nearest integer. 
// The returned integer should be non-negative as well.

// using Binary Search makes the time complexity O(log n)
// This question only returns the int value of the input

/*
#include <iostream>
using namespace std;


int mySqrt(int x) 
{
    int s = 0;
    int e = x;
    long long int mid = s + (e-s)/2;

    long long int ans = -1;
    while(s<=e)
    {
        long long sq = mid*mid;
        if(sq==x)
        {
            return mid;
        }
        if(sq<x)
        {
            ans = mid;
            s = mid+1;
        }
        else
        {
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main()
{
    int x;
    cout << "Enter a number to find its square root - ";
    cin >> x;
    cout << "Sqrt of of " << x << " is - " << mySqrt(x);
}
*/




// If you want more precision we can make another function 

#include <iostream>
using namespace std;


int mySqrt(int x) 
{
    int s = 0;
    int e = x;
    long long int mid = s + (e-s)/2;

    long long int ans = -1;
    while(s<=e)
    {
        long long sq = mid*mid;
        if(sq==x)
        {
            return mid;
        }
        if(sq<x)
        {
            ans = mid;
            s = mid+1;
        }
        else
        {
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}


double precision(int x, int precision, int temp)
{
    double factor = 1;
    double ans = temp;

    for( int i=0; i<precision; i++) 
    {
        factor = factor/10;
        for(double j=ans; j*j<x; j=j+factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int x;
    cout << "Enter a number to find its square root - ";
    cin >> x;
    int temp = mySqrt(x);
    cout << "Sqrt of of " << x << " is - " << precision(x,7,temp);
}