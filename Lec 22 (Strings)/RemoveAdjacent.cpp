/*
You are given a string s consisting of lowercase English letters. A duplicate removal consists of choosing two adjacent 
and equal letters and removing them. We repeatedly make duplicate removals on s until we no longer can.
Return the final string after all such duplicate removals have been made. It can be proven that the answer is
*/

#include<iostream>
#include<stack>
#include<string>
using namespace std;

string removeDuplicates(string s) 
{
    int n = s.size();
    stack<char> st;

    for(int i=n-1; i>=0; i--)
    {
        if(st.empty())
        {
            st.push(s[i]);
        }
        else
        {
            if(st.top() == s[i])
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
    }

    string ans = "";
    while(!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }

    return ans;
}

int main()
{
    string s = "abbaca";
    string ans = removeDuplicates(s);

    cout << ans;
}