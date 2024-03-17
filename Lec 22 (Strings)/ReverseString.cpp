// Find the length of the String

#include<iostream>
using namespace std;


// My method - ulta for loop to print

// void reverse(char name[])
// {
//     int count = 0;
//     for(int i=0; name[i]!=0; i++)
//     {
//         count++;
//     }
    
//     for(int i = count-1; i>=0; i--)
//     {
//         cout << name[i] << " ";
//     }
// }

// Babbar ka 2 pointer approach 

void reverse(char name[])
{
    int count = 0;
    for(int i=0; name[i]!=0; i++)
    {
        count++;
    }
    
    int s = 0;
    int e = count-1;
    while(s<e)
    {
        swap(name[s++],name[e--]);
    }
    cout << name;
}


int main()
{
    char name[20];
    cout << "Enter your name - ";
    cin >> name;

    reverse(name);
}