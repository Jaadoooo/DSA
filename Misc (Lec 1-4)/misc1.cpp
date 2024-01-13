// ASCII table should be remembered atleast the important ones
// This code tells wheather the input character is lowercase, uppercase or numerical value

#include<iostream>
using namespace std;

int main()
{
    char a;
    cout << "Enter any value - ";
    cin >> a;
    int c = a;

    if(c>=97 && c<=122)
    {
        cout << "Lowercase" << endl;
    }
    else if(c>=65 && c<=90)
    {
        cout << "Uppercase" << endl;
    }
    else if(c>=48 && c<=57)
    {
        cout << "Numeric" << endl;
    }
}