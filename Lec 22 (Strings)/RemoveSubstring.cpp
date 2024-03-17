// Given two strings s and part, perform the following operation on s until all 
// occurrences of the substring part are removed:
// Find the leftmost occurrence of the substring part and remove it from s. Return s 


#include<iostream>
using namespace std;


string removeOccurrences(string s, string part) 
{
    while(s.length()!=0 && s.find(part) < s.length())
    {
       s.erase(s.find(part),part.length());
    }
    return s;
}

int main()
{
    string str = "daabcbaabcbc";
    string part = "abc";

    string ans = removeOccurrences(str,part);
    cout << ans;
}