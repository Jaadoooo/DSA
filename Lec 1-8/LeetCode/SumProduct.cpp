#include<iostream>
using namespace std;

int main()
{   
    int n;
    cout << "Enter a number - ";
    cin >> n;
    int sum = 0;
    int prod = 1;

    while(n%10!=0)
    {
        int a = n%10;
        n = n/10;

        sum += a;
        prod *= a;        
    }

    cout << "Sum of digits = " << sum << endl;
    cout << "Product of digits = " << prod << endl;

    



}