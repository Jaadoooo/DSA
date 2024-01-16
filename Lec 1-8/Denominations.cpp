//Take input from user and calculate the least amount of notes required to complete that input. Denominations of 100, 50, 20, 10 and 1.

#include<iostream>
using namespace std;

int main()
{
    int amount;
    cout << "Enter the amount - ";
    cin >> amount;

    int n100 = amount / 100;
    amount %= 100;

    int n50 = amount / 50;
    amount %= 50;

    int n20 = amount / 20;
    amount %= 20;

    int n10 = amount / 10;
    amount %= 10;

    int n1 = amount;

    cout << "\nNotes required - " << endl;
    cout << "100 rupees notes - " << n100 << endl;
    cout << "50 rupees notes - " << n50 << endl;
    cout << "20 rupees notes - " << n20 << endl;
    cout << "10 rupees notes - " << n10 << endl;
    cout << "1 rupee notes - " << n1 << endl;

    return 0;
}

