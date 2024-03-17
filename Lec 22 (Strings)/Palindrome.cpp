// You are given a string 'S'. Your task is to check whether the string is palindrome or not. For checking palindrome, 
// consider alphabets and numbers only and ignore the symbols and whitespaces.

#include<iostream>
#include <string>
using namespace std;

void palindrome(string name)
{
    string cleanedStr;

    for (char ch : name) 
    {
        if (isalnum(ch)) 
        {
            cleanedStr += tolower(ch);
        }
    }

    int count = 0;
    for(int i=0; cleanedStr[i]!=0; i++)
    {
        count++;
    }

    int start = 0;
    int end = count - 1;

    while(start<end)
    {
        if(cleanedStr[start] != cleanedStr[end])
        {
            cout << "Not a Palindrome";
        }
        else
        {
            start++;
            end--;
        }
    }

    cout << "It is a Palindrome";  
}

int main()
{
    string name;
    cout << "Enter your name - ";
    getline(cin, name); // Using getline to include spaces in input

    palindrome(name);
    return 0;
}
