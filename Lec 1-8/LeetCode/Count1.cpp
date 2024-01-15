// This code takes input as an integer and tells how many 1's are present in its binary form
#include <iostream>
using namespace std;


int main() 
{   
    int count = 0;
    unsigned int n;
    cout << "Enter an integer - ";
    cin >> n;

    while (n > 0) 
    {
        count += n & 1;
        n >>= 1;
    }
    cout << "Number of 1's = " << count;
    return 0;
}
