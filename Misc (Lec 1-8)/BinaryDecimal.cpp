// Decimal to Binary and vice versa conversion


/*
#include<math.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter an integer - ";
    cin >> n;

    int bin = 0;
    int i = 0;

    while(n!=0)
    {
        int bit = n&1;
        bin = (bit * pow(10,i)) + bin;
        n = n >> 1;
        i++;
    }

    cout << "Binary form - " << bin;
}
*/



/*
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    cout << "Enter Binary number - ";
    int n;
    cin >> n;

    int i,dec = 0;
    while(n!=0)
    {
        int digit = n%10;
        if (digit==1)
        {
            dec = dec + pow(2,i);
        }
        n = n/10;
        i++;
    }
    cout << "Decimal form - " << dec;
}
*/