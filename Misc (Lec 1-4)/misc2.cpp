// How to crearte comma seprated values in a series 

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number - ";
    cin >> n;

    for (int i = 1; i <= n; ++i) 
    {
        cout << i;
        if (i < n) 
        {
            cout << ", ";
        }
    }
    return 0;
}
